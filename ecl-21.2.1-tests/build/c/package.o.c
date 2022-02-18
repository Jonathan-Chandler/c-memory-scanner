#line 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c/package.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * package.d - packages
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 * Copyright (c) 2017 Daniel Kochmański
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

#include <string.h>
#include <ecl/ecl.h>
#include <ecl/internal.h>
#include <ecl/ecl-inl.h>

/******************************* ------- ******************************/
/*
 * NOTE 1: we only need to use the package locks when reading/writing the hash
 * tables, or changing the fields of a package.  We do not need the locks to
 * read lists from the packages (i.e. list of shadowing symbols, used
 * packages, etc), or from the global environment (cl_core.packages_list) if
 * we do not destructively modify them (For instance, use ecl_remove_eq
 * instead of ecl_delete_eq).
 */
/*
 * NOTE 2: Operations between locks must be guaranteed not fail, or, if
 * they signal an error, they should undo all locks they had before.
 */

static cl_object find_symbol_inner(cl_object name, cl_object p, int *intern_flag);

static void
FEpackage_error(const char *message, cl_object package, int narg, ...)
{
  ecl_va_list args;
  cl_object rest;
  ecl_va_start(args, narg, narg, 0);
  rest = narg? cl_grab_rest_args(args) : cl_list(1,package);
  ecl_va_end(args);
  si_signal_simple_error(6,
                         ECL_SYM("PACKAGE-ERROR",620),
                         ECL_NIL, /* not correctable */
                         ecl_make_constant_base_string(message,-1), /* format control */
                         rest, /* format args */
                         ECL_SYM(":PACKAGE",1311), package); /* extra arguments */
}

void
CEpackage_error(const char *message, const char *continue_message, cl_object package, int narg, ...)
{
  ecl_va_list args;
  cl_object arg;
  ecl_va_start(args, narg, narg, 0);
  arg = narg? cl_grab_rest_args(args) : cl_list(1,package);
  ecl_va_end(args);
  si_signal_simple_error(6,
                         ECL_SYM("PACKAGE-ERROR",620),
                         ecl_make_constant_base_string(continue_message,-1),
                         ecl_make_constant_base_string(message,-1), /* format control */
                         arg,
                         ECL_SYM(":PACKAGE",1311), package);
}

static bool
member_string_eq(cl_object x, cl_object l)
{
  /* INV: l is a proper list */
  loop_for_on_unsafe(l) {
    if (ecl_string_eq(x, ECL_CONS_CAR(l)))
      return TRUE;
  } end_loop_for_on_unsafe(l);
  return FALSE;
}

#if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#define INLINE inline
#else
#define INLINE
#endif

static INLINE void
symbol_remove_package(cl_object s, cl_object p)
{
  if (Null(s))
    s = ECL_NIL_SYMBOL;
  if (s->symbol.hpack == p)
    s->symbol.hpack = ECL_NIL;
}

static INLINE void
symbol_add_package(cl_object s, cl_object p)
{
  if (Null(s))
    s = ECL_NIL_SYMBOL;
  if (s->symbol.hpack == ECL_NIL)
    s->symbol.hpack = p;
}

/*
  ecl_make_package(n, ns, ul, lns) makes a package with name n, which
  must be a string or a symbol, and nicknames ns, which must be a list
  of strings or symbols, and uses packages in list ul, which must be a
  list of packages or package names i.e. strings or symbols. lns is an
  alist (local-nickname . package) which is used for having private
  nicknames for other packages.
*/
static cl_object
make_package_hashtable()
{
  return cl__make_hash_table(ECL_SYM("PACKAGE",619), /* package hash table */
                             ecl_make_fixnum(128), /* initial size */
                             cl_core.rehash_size,
                             cl_core.rehash_threshold);
}

static cl_object
alloc_package(cl_object name)
{
  cl_object p = ecl_alloc_object(t_package);
  p->pack.internal = make_package_hashtable();
  p->pack.external = make_package_hashtable();
  p->pack.name = name;
  p->pack.nicknames = ECL_NIL;
  p->pack.local_nicknames = ECL_NIL;
  p->pack.nicknamedby = ECL_NIL;
  p->pack.shadowings = ECL_NIL;
  p->pack.uses = ECL_NIL;
  p->pack.usedby = ECL_NIL;
  p->pack.locked = FALSE;
  return p;
}

cl_object
_ecl_package_to_be_created(const cl_env_ptr env, cl_object name)
{
  cl_object package = ecl_assoc(name, env->packages_to_be_created);
  if (Null(package)) {
    const cl_env_ptr env = ecl_process_env();
    package = alloc_package(name);
    env->packages_to_be_created =
      cl_acons(name, package, env->packages_to_be_created);
  } else {
    package = ECL_CONS_CDR(package);
  }
  return package;
}

static cl_object
find_pending_package(cl_env_ptr env, cl_object name, cl_object nicknames)
{
  cl_object l = env->packages_to_be_created;
  while (!Null(l)) {
    cl_object pair = ECL_CONS_CAR(l);
    cl_object other_name = ECL_CONS_CAR(pair);
    if (ecl_equal(other_name, name) ||
        _ecl_funcall5(ECL_SYM("MEMBER",554), other_name, nicknames,
                      ECL_SYM(":TEST",1343), ECL_SYM("STRING=",824)) != ECL_NIL)
      {
        cl_object x = ECL_CONS_CDR(pair);
        env->packages_to_be_created =
          ecl_remove_eq(pair,
                        env->packages_to_be_created);
        return x;
      }
    l = ECL_CONS_CDR(l);
  }
  return ECL_NIL;
}

static cl_object
find_local_nickname_package(cl_object name) {
  cl_object p = ecl_symbol_value(ECL_SYM("*PACKAGE*",45));
  if (ECL_PACKAGEP(p)) {
    p = ecl_assoc(name, p->pack.local_nicknames);
    if (!Null(p)) return ECL_CONS_CDR(p);
  }
  return ECL_NIL;
}

static cl_object
process_nicknames(cl_object nicknames)
{
  cl_object l;
  nicknames = cl_copy_list(nicknames);
  for (l = nicknames; l != ECL_NIL; l = ECL_CONS_CDR(l))
    ECL_RPLACA(l, cl_string(ECL_CONS_CAR(l)));
  return nicknames;
}

static cl_object
process_package_list(cl_object packages)
{
  cl_object l;
  packages = cl_copy_list(packages);
  for (l = packages; l != ECL_NIL; l = ECL_CONS_CDR(l))
    ECL_RPLACA(l, si_coerce_to_package(ECL_CONS_CAR(l)));
  return packages;
}

static cl_object
process_local_nicknames_list(cl_object local_nicknames)
{
  cl_object l, nl;
  local_nicknames = cl_copy_list(local_nicknames);
  for (l = local_nicknames; l != ECL_NIL; l = ECL_CONS_CDR(l)) {
    nl = ECL_CONS_CAR(l);
    ECL_RPLACA(nl, cl_string(ECL_CONS_CAR(nl)));
    ECL_RPLACD(nl, si_coerce_to_package(ECL_CONS_CDR(nl)));
  }
  return local_nicknames;
}

cl_object
ecl_make_package(cl_object name, cl_object nicknames,
                 cl_object use_list, cl_object local_nicknames)
{
  const cl_env_ptr env = ecl_process_env();
  cl_object x, other = ECL_NIL;

  /* Type checking, coercions, and the like, happen before we
   * acquire the lock */
  name = cl_string(name);
  nicknames = process_nicknames(nicknames);
  use_list = process_package_list(use_list);
  local_nicknames = process_local_nicknames_list(local_nicknames);

  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(env) {
    if (ecl_option_values[ECL_OPT_BOOTED]) {
      /* Find a similarly named package in the list of packages to be created
       * and use it or try to build a new package. */
      x = find_pending_package(env, name, nicknames);
      if (Null(x)) {
        other = ecl_find_package_nolock(name);
        if (other != ECL_NIL) {
          goto OUTPUT;
        } else {
          x = alloc_package(name);
        }
      }
      loop_for_in(nicknames) {
        cl_object nick = ECL_CONS_CAR(nicknames);
        other = ecl_find_package_nolock(nick);
        if (other != ECL_NIL) {
          name = nick;
          goto OUTPUT;
        }
        x->pack.nicknames = CONS(nick, x->pack.nicknames);
      } end_loop_for_in;
    } else {
      /* When we are not booted yet, then we are certain that there are no
         duplicated package definitions (nor pending packages or nicknames
         overlapping with existing packages). */
      x = alloc_package(name);
      x->pack.nicknames = nicknames;
    }
    loop_for_in(use_list) {
      cl_object y = ECL_CONS_CAR(use_list);
      x->pack.uses = CONS(y, x->pack.uses);
      y->pack.usedby = CONS(x, y->pack.usedby);
    } end_loop_for_in;
    loop_for_in(local_nicknames) {
      cl_object y = ECL_CONS_CAR(local_nicknames);
      cl_object nicknamed = ECL_CONS_CDR(y);
      x->pack.local_nicknames = CONS(y, x->pack.local_nicknames);
      nicknamed->pack.nicknamedby = CONS(x, nicknamed->pack.nicknamedby);
    } end_loop_for_in;
    /* Finally, add it to the list of packages */
    cl_core.packages = CONS(x, cl_core.packages);
  OUTPUT:
    (void)0;
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
  if (!Null(other)) {
    CEpackage_error("A package with the name ~A already exists.",
                    "Return existing package",
                    other, 1, name);
    return other;
  }
  return x;
}

cl_object
ecl_rename_package(cl_object x, cl_object name, cl_object nicknames)
{
  bool error;

  name = cl_string(name);
  nicknames = process_nicknames(nicknames);
  x = si_coerce_to_package(x);
  if (x->pack.locked
      && ECL_SYM_VAL(ecl_process_env(),
                     ECL_SYM("SI::*IGNORE-PACKAGE-LOCKS*",1119)) == ECL_NIL) {
    CEpackage_error("Cannot rename locked package ~S.",
                    "Ignore lock and proceed.", x, 0);
  }
  nicknames = ecl_cons(name, nicknames);
  error = 0;
  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(ecl_process_env()) {
    cl_object l;
    for (l = nicknames; l != ECL_NIL; l = ECL_CONS_CDR(l)) {
      cl_object nick = ECL_CONS_CAR(l);
      cl_object p = ecl_find_package_nolock(nick);
      if ((p != ECL_NIL) && (p != x)) {
        name = nick;
        error = 1;
        break;
      }
    }
    if (!error) {
      x->pack.name = name;
      x->pack.nicknames = ECL_CONS_CDR(nicknames);
    }
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
  if (error) {
    FEpackage_error("A package with name ~S already exists.", x,
                    1, name);
  }
  return x;
}

/*
  ecl_find_package_nolock(n) seaches for a package with name n, where n is
  a valid string designator, or simply outputs n if it is a
  package.

  This is not a locking routine and someone may replace the list of
  packages while we are scanning it. Nevertheless, the list IS NOT
  be destructively modified, which means that we are on the safe side.
  Routines which need to ensure that the package list remains constant
  should enforce a global lock with PACKAGE_OP_LOCK().
*/
cl_object
ecl_find_package_nolock(cl_object name)
{
  cl_object l, p;

  if (ECL_PACKAGEP(name))
    return name;
  name = cl_string(name);

  p = find_local_nickname_package(name);
  if (!Null(p)) return p;

  l = cl_core.packages;
  loop_for_on_unsafe(l) {
    p = ECL_CONS_CAR(l);
    if (ecl_string_eq(name, p->pack.name))
      return p;
    if (member_string_eq(name, p->pack.nicknames))
      return p;
  } end_loop_for_on_unsafe(l);
  return ECL_NIL;
}

cl_object
ecl_find_package(const char *p)
{
  ecl_def_ct_base_string(pack_name,p,strlen(p),,);
  return cl_find_package(pack_name);
}

cl_object
si_coerce_to_package(cl_object p)
{
  /* INV: ecl_find_package_nolock() signals an error if "p" is neither a package
     nor a string */
  cl_object pp = ecl_find_package_nolock(p);
  if (Null(pp)) {
    FEpackage_error("There exists no package with name ~S", p, 0);
  }
  {
#line 375
	const cl_env_ptr the_env = ecl_process_env();
#line 375
	#line 375
	cl_object __value0 = pp;
#line 375
	the_env->nvalues = 1;
#line 375
	the_env->values[0] = __value0;
#line 375
	#line 375
	return __value0;
#line 375
}
;
}

cl_object
ecl_current_package(void)
{
  cl_object x = ecl_symbol_value(ECL_SYM("*PACKAGE*",45));
  unlikely_if (!ECL_PACKAGEP(x)) {
    const cl_env_ptr env = ecl_process_env();
    ECL_SETQ(env, ECL_SYM("*PACKAGE*",45), cl_core.user_package);
    FEerror("The value of *PACKAGE*, ~S, was not a package",
            1, x);
  }
  return x;
}

/*
  Ecl_Intern(st, p) interns string st in package p.
*/
cl_object
_ecl_intern(const char *s, cl_object p)
{
  int intern_flag;
  cl_object str = ecl_make_constant_base_string(s,-1);
  return ecl_intern(str, p, &intern_flag);
}

cl_object
ecl_intern(cl_object name, cl_object p, int *intern_flag)
{
  cl_object s;
  bool error, ignore_error = 0;

  if (ecl_unlikely(!ECL_STRINGP(name)))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*INTERN*/444), 1, name, ecl_make_fixnum(/*STRING*/807));
  p = si_coerce_to_package(p);
 AGAIN:
  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(ecl_process_env()) {
    s = find_symbol_inner(name, p, intern_flag);
    if (*intern_flag) {
      error = 0;
    } else if (p->pack.locked
               && !ignore_error
               && ECL_SYM_VAL(ecl_process_env(),
                              ECL_SYM("SI::*IGNORE-PACKAGE-LOCKS*",1119)) == ECL_NIL) {
      error = 1;
    } else {
      s = cl_make_symbol(name);
      s->symbol.hpack = p;
      *intern_flag = 0;
      if (p == cl_core.keyword_package) {
        ecl_symbol_type_set(s, ecl_symbol_type(s) | ecl_stp_constant);
        ECL_SET(s, s);
        p->pack.external =
          _ecl_sethash(name, p->pack.external, s);
      } else {
        p->pack.internal =
          _ecl_sethash(name, p->pack.internal, s);
      }
      error = 0;
    }
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
  if (error) {
    CEpackage_error("Cannot intern symbol ~S in locked package ~S.",
                    "Ignore lock and proceed.", p, 2, name, p);
    ignore_error = 1;
    goto AGAIN;
  }
  return s;
}

/*
  find_symbol_inner(st, len, p) searches for string st of length
  len in package p.
*/
static cl_object
find_symbol_inner(cl_object name, cl_object p, int *intern_flag)
{
  cl_object s, ul;

  s = ecl_gethash_safe(name, p->pack.external, OBJNULL);
  if (s != OBJNULL) {
    *intern_flag = ECL_EXTERNAL;
    goto OUTPUT;
  }
  if (p == cl_core.keyword_package)
    goto NOTHING;
  s = ecl_gethash_safe(name, p->pack.internal, OBJNULL);
  if (s != OBJNULL) {
    *intern_flag = ECL_INTERNAL;
    goto OUTPUT;
  }
  ul = p->pack.uses;
  loop_for_on_unsafe(ul) {
    s = ecl_gethash_safe(name, ECL_CONS_CAR(ul)->pack.external, OBJNULL);
    if (s != OBJNULL) {
      *intern_flag = ECL_INHERITED;
      goto OUTPUT;
    }
  } end_loop_for_on_unsafe(ul);
 NOTHING:
  *intern_flag = 0;
  s = ECL_NIL;
 OUTPUT:
  return s;
}

cl_object
ecl_find_symbol(cl_object n, cl_object p, int *intern_flag)
{
  cl_object s;
  if (ecl_unlikely(!ECL_STRINGP(n)))
    FEwrong_type_nth_arg(ecl_make_fixnum(/*FIND-SYMBOL*/371), 1, n, ecl_make_fixnum(/*STRING*/807));
  p = si_coerce_to_package(p);
  ECL_WITH_GLOBAL_ENV_RDLOCK_BEGIN(ecl_process_env()) {
    s = find_symbol_inner(n, p, intern_flag);
  } ECL_WITH_GLOBAL_ENV_RDLOCK_END;
  return s;
}

static cl_object
potential_unintern_conflict(cl_object name, cl_object s, cl_object p)
{
  cl_object x = OBJNULL;
  cl_object l = p->pack.uses;
  loop_for_on_unsafe(l) {
    cl_object other_p = ECL_CONS_CAR(l);
    cl_object y = ecl_gethash_safe(name, other_p->pack.external, OBJNULL);
    if (y != OBJNULL) {
      if (x == OBJNULL) {
        x = y;
      } else if (x != y) {
        return ecl_cons(x, y);
      }
    }
  } end_loop_for_on_unsafe(l);
  return ECL_NIL;
}

bool
ecl_unintern(cl_object s, cl_object p)
{
  cl_object conflict;
  bool output = FALSE;
  cl_object name = ecl_symbol_name(s);

  p = si_coerce_to_package(p);
  if (p->pack.locked
      && ECL_SYM_VAL(ecl_process_env(),
                     ECL_SYM("SI::*IGNORE-PACKAGE-LOCKS*",1119)) == ECL_NIL) {
    CEpackage_error("Cannot unintern symbol ~S from locked package ~S.",
                    "Ignore lock and proceed.", p, 2, s, p);
  }
  conflict = ECL_NIL;
  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(ecl_process_env()) {
    cl_object hash = p->pack.internal;
    cl_object x = ecl_gethash_safe(name, hash, OBJNULL);
    if (x != s) {
      hash = p->pack.external;
      x = ecl_gethash_safe(name, hash, OBJNULL);
      if (x != s)
        goto OUTPUT;
    }
    if (ecl_member_eq(s, p->pack.shadowings)) {
      conflict = potential_unintern_conflict(name, s, p);
      if (conflict != ECL_NIL) {
        goto OUTPUT;
      }
      p->pack.shadowings = ecl_remove_eq(s, p->pack.shadowings);
    }
    ecl_remhash(name, hash);
    symbol_remove_package(s, p);
    output = TRUE;
  OUTPUT:
    (void)0;
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
  if (conflict != ECL_NIL) {
    FEpackage_error("Cannot unintern the shadowing symbol ~S~%"
                    "from ~S,~%"
                    "because ~S and ~S will cause~%"
                    "a name conflict.", p, 4, s, p,
                    ECL_CONS_CAR(conflict), ECL_CONS_CDR(conflict));
  }
  return output;
}

static cl_object
potential_export_conflict(cl_object name, cl_object s, cl_object p)
{
  cl_object l = p->pack.usedby;
  loop_for_on_unsafe(l) {
    int intern_flag;
    cl_object other_p = ECL_CONS_CAR(l);
    cl_object x = find_symbol_inner(name, other_p, &intern_flag);
    if (intern_flag && s != x &&
        !ecl_member_eq(x, other_p->pack.shadowings)) {
      return other_p;
    }
  } end_loop_for_on_unsafe(l);
  return ECL_NIL;
}

void
cl_export2(cl_object s, cl_object p)
{
  int intern_flag, error;
  cl_object other_p = ECL_NIL, name = ecl_symbol_name(s);
  p = si_coerce_to_package(p);
  if (p->pack.locked
      && ECL_SYM_VAL(ecl_process_env(),
                     ECL_SYM("SI::*IGNORE-PACKAGE-LOCKS*",1119)) == ECL_NIL)
    CEpackage_error("Cannot export symbol ~S from locked package ~S.",
                    "Ignore lock and proceed.", p, 2, s, p);
 AGAIN:
  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(ecl_process_env()) {
    cl_object x = find_symbol_inner(name, p, &intern_flag);
    if (!intern_flag) {
      error = 1;
    } else if (x != s) {
      error = 2;
    } else if (intern_flag == ECL_EXTERNAL) {
      error = 0;
    } else if ((other_p = potential_export_conflict(name, s, p)) != ECL_NIL) {
      error = 3;
    } else {
      if (intern_flag == ECL_INTERNAL)
        ecl_remhash(name, p->pack.internal);
      p->pack.external = _ecl_sethash(name, p->pack.external, s);
      error = 0;
    }
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
  if (error == 1) {
    CEpackage_error("The symbol ~S is not accessible from ~S "
                    "and cannot be exported.",
                    "Import the symbol in the package and proceed.",
                    p, 2, s, p);
    cl_import2(s, p);
    goto AGAIN;
  } else if (error == 2) {
    FEpackage_error("Cannot export the symbol ~S from ~S,~%"
                    "because there is already a symbol with the same name~%"
                    "in the package.", p, 2, s, p);
  } else if (error == 3) {
    FEpackage_error("Cannot export the symbol ~S~%"
                    "from ~S,~%"
                    "because it will cause a name conflict~%"
                    "in ~S.", p, 3, s, p, other_p);
  } 
}

cl_object
cl_delete_package(cl_object p)
{
  cl_object hash, l;
  cl_index i;

  /* 1) Try to remove the package from the global list */
  p = ecl_find_package_nolock(p);
  if (Null(p)) {
    CEpackage_error("Package ~S not found. Cannot delete it.",
                    "Ignore error and continue.", p, 0);
    {
#line 636
	const cl_env_ptr the_env = ecl_process_env();
#line 636
	#line 636
	cl_object __value0 = ECL_NIL;
#line 636
	the_env->nvalues = 1;
#line 636
	the_env->values[0] = __value0;
#line 636
	#line 636
	return __value0;
#line 636
}
;
  }
  if (p->pack.locked
      && ECL_SYM_VAL(ecl_process_env(),
                     ECL_SYM("SI::*IGNORE-PACKAGE-LOCKS*",1119)) == ECL_NIL)
    CEpackage_error("Cannot delete locked package ~S.",
                    "Ignore lock and proceed.", p, 0);
  if (p == cl_core.lisp_package || p == cl_core.keyword_package) {
    FEpackage_error("Cannot remove package ~S", p, 0);
  }

  /* 2) Now remove the package from the other packages that use it and
     empty the package. */
  if (Null(p->pack.name)) {
    {
#line 650
	const cl_env_ptr the_env = ecl_process_env();
#line 650
	#line 650
	cl_object __value0 = ECL_NIL;
#line 650
	the_env->nvalues = 1;
#line 650
	the_env->values[0] = __value0;
#line 650
	#line 650
	return __value0;
#line 650
}
;
  }
  while (!Null(l = p->pack.uses)) {
    ecl_unuse_package(ECL_CONS_CAR(l), p);
  }
  while (!Null(l = p->pack.usedby)) {
    ecl_unuse_package(p, ECL_CONS_CAR(l));
  }

  /* 3) Now remove local nickname related bits. */
  while (!Null(l = p->pack.local_nicknames)) {
    cl_object nickname = ECL_CONS_CAR(l);
    si_remove_package_local_nickname(ECL_CONS_CAR(nickname), p);
  }

  while (!Null(l = p->pack.nicknamedby)) {
    cl_object nicknaming = ECL_CONS_CAR(l);
    cl_object nicklist = nicknaming->pack.local_nicknames;
    loop_for_in(nicklist) {
      cl_object nickname = ECL_CONS_CAR(nicklist);
      if (ECL_CONS_CDR(nickname) == p) {
        si_remove_package_local_nickname(ECL_CONS_CAR(nickname), nicknaming);
        break;
      }
    } end_loop_for_in;
  }

  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(ecl_process_env()) {
    for (hash = p->pack.internal, i = 0; i < hash->hash.size; i++)
      if (hash->hash.data[i].key != OBJNULL) {
        cl_object s = hash->hash.data[i].value;
        symbol_remove_package(s, p);
      }
    cl_clrhash(p->pack.internal);
    for (hash = p->pack.external, i = 0; i < hash->hash.size; i++)
      if (hash->hash.data[i].key != OBJNULL) {
        cl_object s = hash->hash.data[i].value;
        symbol_remove_package(s, p);
      }
    cl_clrhash(p->pack.external);
    p->pack.shadowings = ECL_NIL;
    p->pack.name = ECL_NIL;
    /* 4) Only at the end, remove the package from the list of packages. */
    cl_core.packages = ecl_remove_eq(p, cl_core.packages);
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
  {
#line 695
	const cl_env_ptr the_env = ecl_process_env();
#line 695
	#line 695
	cl_object __value0 = ECL_T;
#line 695
	the_env->nvalues = 1;
#line 695
	the_env->values[0] = __value0;
#line 695
	#line 695
	return __value0;
#line 695
}
;
}

void
cl_unexport2(cl_object s, cl_object p)
{
  cl_object name = ecl_symbol_name(s);
  bool error;
  p = si_coerce_to_package(p);
  if (p == cl_core.keyword_package) {
    FEpackage_error("Cannot unexport a symbol from the keyword package.",
                    cl_core.keyword_package, 0);
  }
  if (p->pack.locked
      && ECL_SYM_VAL(ecl_process_env(),
                     ECL_SYM("SI::*IGNORE-PACKAGE-LOCKS*",1119)) == ECL_NIL) {
    CEpackage_error("Cannot unexport symbol ~S from locked package ~S.",
                    "Ignore lock and proceed.", p, 2, s, p);
  }
  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(ecl_process_env()) {
    int intern_flag;
    cl_object x = find_symbol_inner(name, p, &intern_flag);
    if (intern_flag == 0 || x != s) {
      error = 1;
    } else if (intern_flag != ECL_EXTERNAL) {
      /* According to ANSI & Cltl, internal symbols are
         ignored in unexport */
      error = 0;
    } else {
      ecl_remhash(name, p->pack.external);
      p->pack.internal = _ecl_sethash(name, p->pack.internal, s);
      error = 0;
    }
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
  if (error) {
    FEpackage_error("Cannot unexport ~S because it does not "
                    "belong to package ~S.",
                    p, 2, s, p);
  }
}

void
cl_import2(cl_object s, cl_object p)
{
  int intern_flag, error, ignore_error = 0;
  cl_object name = ecl_symbol_name(s);
  p = si_coerce_to_package(p);
  if (p->pack.locked
      && ECL_SYM_VAL(ecl_process_env(),
                     ECL_SYM("SI::*IGNORE-PACKAGE-LOCKS*",1119)) == ECL_NIL) {
    CEpackage_error("Cannot import symbol ~S into locked package ~S.",
                    "Ignore lock and proceed.", p, 2, s, p);
  }
  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(ecl_process_env()) {
    cl_object x = find_symbol_inner(name, p, &intern_flag);
    if (intern_flag) {
      if (x != s && !ignore_error) {
        error = 1;
        goto OUTPUT;
      }
      if (intern_flag == ECL_INTERNAL || intern_flag == ECL_EXTERNAL) {
        error = 0;
        goto OUTPUT;
      }
    }
    p->pack.internal = _ecl_sethash(name, p->pack.internal, s);
    symbol_add_package(s, p);
    error = 0;
  OUTPUT:
    (void)0;
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
  if (error) {
    CEpackage_error("Cannot import the symbol ~S "
                    "from package ~A,~%"
                    "because there is already a symbol with the same name~%"
                    "in the package.",
                    "Ignore conflict and proceed.", p, 2, s, p);
    ignore_error = 1;
  }
}

void
ecl_shadowing_import(cl_object s, cl_object p)
{
  int intern_flag;
  cl_object x;
  cl_object name = ecl_symbol_name(s);
  p = si_coerce_to_package(p);
  if (p->pack.locked
      && ECL_SYM_VAL(ecl_process_env(),
                     ECL_SYM("SI::*IGNORE-PACKAGE-LOCKS*",1119)) == ECL_NIL)
    CEpackage_error("Cannot shadowing-import symbol ~S into "
                    "locked package ~S.",
                    "Ignore lock and proceed.", p, 2, s, p);

  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(ecl_process_env()) {
    x = find_symbol_inner(name, p, &intern_flag);
    if (intern_flag && intern_flag != ECL_INHERITED) {
      if (x == s) {
        if (!ecl_member_eq(x, p->pack.shadowings))
          p->pack.shadowings
            = CONS(x, p->pack.shadowings);
        goto OUTPUT;
      }
      if(ecl_member_eq(x, p->pack.shadowings))
        p->pack.shadowings =
          ecl_remove_eq(x, p->pack.shadowings);
      if (intern_flag == ECL_INTERNAL)
        ecl_remhash(name, p->pack.internal);
      else
        ecl_remhash(name, p->pack.external);
      symbol_remove_package(x, p);
    }
    p->pack.shadowings = CONS(s, p->pack.shadowings);
    p->pack.internal = _ecl_sethash(name, p->pack.internal, s);
  OUTPUT:
    (void)0;
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
}

void
ecl_shadow(cl_object s, cl_object p)
{
  int intern_flag;
  cl_object x;

  /* Contrary to CLTL, in ANSI CL, SHADOW operates on strings. */
  s = cl_string(s);
  p = si_coerce_to_package(p);
  if (p->pack.locked
      && ECL_SYM_VAL(ecl_process_env(),
                     ECL_SYM("SI::*IGNORE-PACKAGE-LOCKS*",1119)) == ECL_NIL)
    CEpackage_error("Cannot shadow symbol ~S in locked package ~S.",
                    "Ignore lock and proceed.", p, 2, s, p);
  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(ecl_process_env()) {
    x = find_symbol_inner(s, p, &intern_flag);
    if (intern_flag != ECL_INTERNAL && intern_flag != ECL_EXTERNAL) {
      x = cl_make_symbol(s);
      p->pack.internal = _ecl_sethash(s, p->pack.internal, x);
      x->symbol.hpack = p;
    }
    p->pack.shadowings = CONS(x, p->pack.shadowings);
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
}

void
ecl_use_package(cl_object x, cl_object p)
{
  struct ecl_hashtable_entry *hash_entries;
  cl_index i, hash_length;
  cl_object here, there, name;
  int intern_flag, error = 0;

  x = si_coerce_to_package(x);
  if (x == cl_core.keyword_package)
    FEpackage_error("Cannot use keyword package.",
                    cl_core.keyword_package, 0);
  p = si_coerce_to_package(p);
  if (p == x)
    return;
  if (ecl_member_eq(x, p->pack.uses))
    return;
  if (p == cl_core.keyword_package)
    FEpackage_error("Cannot apply USE-PACKAGE on keyword package.",
                    cl_core.keyword_package, 0);
  if (p->pack.locked
      && ECL_SYM_VAL(ecl_process_env(),
                     ECL_SYM("SI::*IGNORE-PACKAGE-LOCKS*",1119)) == ECL_NIL)
    CEpackage_error("Cannot use package ~S in locked package ~S.",
                    "Ignore lock and proceed.",
                    p, 2, x, p);

  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(ecl_process_env()) {
    hash_entries = x->pack.external->hash.data;
    hash_length = x->pack.external->hash.size;
    for (i = 0, error = 0;  i < hash_length;  i++) {
      if (hash_entries[i].key != OBJNULL) {
        here = hash_entries[i].value;
        name = ecl_symbol_name(here);
        there = find_symbol_inner(name, p, &intern_flag);
        if (intern_flag && here != there
            && ! ecl_member_eq(there, p->pack.shadowings)) {
          error = 1;
          break;
        }
      }
    }
    if (!error) {
      p->pack.uses = CONS(x, p->pack.uses);
      x->pack.usedby = CONS(p, x->pack.usedby);
    }
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
  if (error) {
    FEpackage_error("Cannot use ~S~%"
                    "from ~S,~%"
                    "because ~S and ~S will cause~%"
                    "a name conflict.", p, 4, x, p, here, there);
  }
}

void
ecl_unuse_package(cl_object x, cl_object p)
{
  x = si_coerce_to_package(x);
  p = si_coerce_to_package(p);
  if (p->pack.locked
      && ECL_SYM_VAL(ecl_process_env(),
                     ECL_SYM("SI::*IGNORE-PACKAGE-LOCKS*",1119)) == ECL_NIL)
    CEpackage_error("Cannot unuse package ~S from locked package ~S.",
                    "Ignore lock and proceed.",
                    p, 2, x, p);
  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(ecl_process_env()) {
    p->pack.uses = ecl_remove_eq(x, p->pack.uses);
    x->pack.usedby = ecl_remove_eq(p, x->pack.usedby);
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
}

#line 915
cl_object cl_make_package(cl_narg narg, cl_object pack_name, ...)
{
#line 915

#line 917
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 917
	static cl_object KEYS[3] = {(cl_object)(cl_symbols+1304), (cl_object)(cl_symbols+1351), (cl_object)(cl_symbols+1295)};
	cl_object nicknames;
	cl_object use;
	cl_object local_nicknames;
#line 917
	cl_object KEY_VARS[6];
#line 917
	ecl_va_list ARGS;
	ecl_va_start(ARGS, pack_name, narg, 1);
#line 917
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(532));
#line 917
	cl_parse_key(ARGS, 3, KEYS, KEY_VARS, NULL, 0);
#line 917
	if (KEY_VARS[3]==ECL_NIL) {
#line 917
	  nicknames = ECL_NIL;
	} else {
#line 917
	  nicknames = KEY_VARS[0];
	}
#line 917
	if (KEY_VARS[4]==ECL_NIL) {
#line 917
	  use = CONS(cl_core.lisp_package, ECL_NIL);
	} else {
#line 917
	  use = KEY_VARS[1];
	}
#line 917
	if (KEY_VARS[5]==ECL_NIL) {
#line 917
	  local_nicknames = ECL_NIL;
	} else {
#line 917
	  local_nicknames = KEY_VARS[2];
	}
#line 917
  /* INV: ecl_make_package() performs type checking */
  {
#line 918
	#line 918
	cl_object __value0 = ecl_make_package(pack_name, nicknames, use, local_nicknames);
#line 918
	the_env->nvalues = 1;
#line 918
	the_env->values[0] = __value0;
#line 918
	ecl_va_end(ARGS);
#line 918
	return __value0;
#line 918
}
;
}

cl_object
si_select_package(cl_object pack_name)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object p = si_coerce_to_package(pack_name);
  ecl_return1(the_env, ECL_SETQ(the_env, ECL_SYM("*PACKAGE*",45), p));
}

cl_object
cl_find_package(cl_object p)
{
  {
#line 932
	const cl_env_ptr the_env = ecl_process_env();
#line 932
	#line 932
	cl_object __value0 = ecl_find_package_nolock(p);
#line 932
	the_env->nvalues = 1;
#line 932
	the_env->values[0] = __value0;
#line 932
	#line 932
	return __value0;
#line 932
}
;
}

cl_object
cl_package_name(cl_object p)
{
  p = si_coerce_to_package(p);
  return cl_copy_seq(p->pack.name);
}

cl_object
cl_package_nicknames(cl_object p)
{
  p = si_coerce_to_package(p);
  return cl_copy_list(p->pack.nicknames);
}

#line 949
cl_object cl_rename_package(cl_narg narg, cl_object pack, cl_object new_name, ...)
{
#line 949

#line 951
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 951
	cl_object new_nicknames;
#line 951
	va_list ARGS;
	va_start(ARGS, new_name);
#line 951
	if (ecl_unlikely(narg < 2|| narg > 3)) FEwrong_num_arguments(ecl_make_fixnum(718));
#line 951
	if (narg > 2) {
#line 951
		new_nicknames = va_arg(ARGS,cl_object);
#line 951
	} else {
#line 951
		new_nicknames = ECL_NIL;
#line 951
	}
#line 951
  /* INV: ecl_rename_package() type checks and coerces pack to package */
  {
#line 952
	#line 952
	cl_object __value0 = ecl_rename_package(pack, new_name, new_nicknames);
#line 952
	the_env->nvalues = 1;
#line 952
	the_env->values[0] = __value0;
#line 952
	va_end(ARGS);
#line 952
	return __value0;
#line 952
}
;
}

cl_object
cl_package_use_list(cl_object p)
{
  return cl_copy_list(si_coerce_to_package(p)->pack.uses);
}

cl_object
cl_package_used_by_list(cl_object p)
{
  return cl_copy_list(si_coerce_to_package(p)->pack.usedby);
}

cl_object
cl_package_shadowing_symbols(cl_object p)
{
  p = si_coerce_to_package(p);
  return cl_copy_list(p->pack.shadowings);
}

cl_object
si_package_lock(cl_object p, cl_object t)
{
  bool previous;
  p = si_coerce_to_package(p);
  previous = p->pack.locked;
  p->pack.locked = (t != ECL_NIL);
  {
#line 981
	const cl_env_ptr the_env = ecl_process_env();
#line 981
	#line 981
	cl_object __value0 = (previous? ECL_T : ECL_NIL);
#line 981
	the_env->nvalues = 1;
#line 981
	the_env->values[0] = __value0;
#line 981
	#line 981
	return __value0;
#line 981
}
;
}

cl_object
si_package_locked_p (cl_object p)
{
  p = si_coerce_to_package(p);
  return (p->pack.locked ? ECL_T : ECL_NIL);
}

/* --- local nicknames ---------------------------------------------------- */
cl_object
si_package_local_nicknames(cl_object p)
{
  p = si_coerce_to_package(p);
  return cl_copy_tree(p->pack.local_nicknames);
}

cl_object
si_package_locally_nicknamed_by_list(cl_object p)
{
  p = si_coerce_to_package(p);
  return cl_copy_list(p->pack.nicknamedby);
}

cl_object
si_add_package_local_nickname(cl_object local_nickname,
                              cl_object actual_package,
                              cl_object target_package) {

  local_nickname = cl_string(local_nickname);
  actual_package = si_coerce_to_package(actual_package);
  target_package = si_coerce_to_package(target_package);

  cl_object existing = target_package->pack.local_nicknames;
  cl_object cell = ecl_assoc(local_nickname, existing);

  if (target_package->pack.locked
      && ECL_SYM_VAL(ecl_process_env(), ECL_SYM("SI::*IGNORE-PACKAGE-LOCKS*",1119)) == ECL_NIL) {
    CEpackage_error("Cannot nickname package ~S from locked package ~S.",
                    "Ignore lock and proceed.",
                    target_package, 2, actual_package, target_package);
  }

  if (!Null(cell)) {
    cl_object old_package = ECL_CONS_CDR(cell);
    if (old_package != actual_package) {
      FEpackage_error("Cannot add ~A as local nickname for ~A:~%"
                      "already a nickname for ~A.",
                      target_package, 3,
                      local_nickname, actual_package, old_package);
    }
    return target_package;
  }

  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(ecl_process_env()) {
    cl_object nickname_cons = CONS(local_nickname, actual_package);

    target_package->pack.local_nicknames
      = CONS(nickname_cons, target_package->pack.local_nicknames);

    actual_package->pack.nicknamedby
      = CONS(target_package, actual_package->pack.nicknamedby);
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;

  return target_package;
}

cl_object
si_remove_package_local_nickname(cl_object old_nickname,
                                 cl_object target_package) {
  old_nickname = cl_string(old_nickname);
  target_package = si_coerce_to_package(target_package);

  if (target_package->pack.locked
      && ECL_SYM_VAL(ecl_process_env(),
                     ECL_SYM("SI::*IGNORE-PACKAGE-LOCKS*",1119)) == ECL_NIL) {
    CEpackage_error("Cannot remove local package nickname ~S from locked package ~S.",
                    "Ignore lock and proceed.",
                    target_package, 2, old_nickname, target_package);
  }

  cl_object actual_package = ECL_NIL;
  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(ecl_process_env()) {
    cl_object cell = ecl_assoc(old_nickname, target_package->pack.local_nicknames);
    if (!Null(cell)) {
      actual_package = ECL_CONS_CDR(cell);
      target_package->pack.local_nicknames
        = ecl_delete_eq(cell, target_package->pack.local_nicknames);
      actual_package->pack.nicknamedby
        = ecl_delete_eq(target_package, actual_package->pack.nicknamedby);
    }
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
  return Null(actual_package) ? ECL_NIL : ECL_T;
}
/* ------------------------------------------------------------------------ */

cl_object
cl_list_all_packages()
{
  return cl_copy_list(cl_core.packages);
}

#line 1084
cl_object cl_intern(cl_narg narg, cl_object strng, ...)
{
#line 1084

  int intern_flag;
#line 1087
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1087
	cl_object p;
#line 1087
	cl_object sym;
#line 1087
	va_list ARGS;
	va_start(ARGS, strng);
#line 1087
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(444));
#line 1087
	if (narg > 1) {
#line 1087
		p = va_arg(ARGS,cl_object);
#line 1087
	} else {
#line 1087
		p = ecl_current_package();
#line 1087
	}
#line 1087
	sym = ECL_NIL;
#line 1087
  sym = ecl_intern(strng, p, &intern_flag);
  if (intern_flag == ECL_INTERNAL) {
    {
#line 1089
	#line 1089
	cl_object __value0 = sym;
#line 1089
	cl_object __value1 = ECL_SYM(":INTERNAL",1284);
#line 1089
	the_env->nvalues = 2;
#line 1089
	the_env->values[1] = __value1;
#line 1089
	the_env->values[0] = __value0;
#line 1089
	va_end(ARGS);
#line 1089
	return __value0;
#line 1089
}
;
  }
  if (intern_flag == ECL_EXTERNAL) {
    {
#line 1092
	#line 1092
	cl_object __value0 = sym;
#line 1092
	cl_object __value1 = ECL_SYM(":EXTERNAL",1257);
#line 1092
	the_env->nvalues = 2;
#line 1092
	the_env->values[1] = __value1;
#line 1092
	the_env->values[0] = __value0;
#line 1092
	va_end(ARGS);
#line 1092
	return __value0;
#line 1092
}
;
  }
  if (intern_flag == ECL_INHERITED) {
    {
#line 1095
	#line 1095
	cl_object __value0 = sym;
#line 1095
	cl_object __value1 = ECL_SYM(":INHERITED",1276);
#line 1095
	the_env->nvalues = 2;
#line 1095
	the_env->values[1] = __value1;
#line 1095
	the_env->values[0] = __value0;
#line 1095
	va_end(ARGS);
#line 1095
	return __value0;
#line 1095
}
;
  }
  {
#line 1097
	#line 1097
	cl_object __value0 = sym;
#line 1097
	cl_object __value1 = ECL_NIL;
#line 1097
	the_env->nvalues = 2;
#line 1097
	the_env->values[1] = __value1;
#line 1097
	the_env->values[0] = __value0;
#line 1097
	va_end(ARGS);
#line 1097
	return __value0;
#line 1097
}
;
}

#line 1100
cl_object cl_find_symbol(cl_narg narg, cl_object strng, ...)
{
#line 1100

  cl_object x;
  int intern_flag;
#line 1104
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1104
	cl_object p;
#line 1104
	va_list ARGS;
	va_start(ARGS, strng);
#line 1104
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(371));
#line 1104
	if (narg > 1) {
#line 1104
		p = va_arg(ARGS,cl_object);
#line 1104
	} else {
#line 1104
		p = ecl_current_package();
#line 1104
	}
#line 1104
  x = ecl_find_symbol(strng, p, &intern_flag);
  if (intern_flag == ECL_INTERNAL) {
    {
#line 1106
	#line 1106
	cl_object __value0 = x;
#line 1106
	cl_object __value1 = ECL_SYM(":INTERNAL",1284);
#line 1106
	the_env->nvalues = 2;
#line 1106
	the_env->values[1] = __value1;
#line 1106
	the_env->values[0] = __value0;
#line 1106
	va_end(ARGS);
#line 1106
	return __value0;
#line 1106
}
;
  }
  if (intern_flag == ECL_EXTERNAL) {
    {
#line 1109
	#line 1109
	cl_object __value0 = x;
#line 1109
	cl_object __value1 = ECL_SYM(":EXTERNAL",1257);
#line 1109
	the_env->nvalues = 2;
#line 1109
	the_env->values[1] = __value1;
#line 1109
	the_env->values[0] = __value0;
#line 1109
	va_end(ARGS);
#line 1109
	return __value0;
#line 1109
}
;
  }
  if (intern_flag == ECL_INHERITED) {
    {
#line 1112
	#line 1112
	cl_object __value0 = x;
#line 1112
	cl_object __value1 = ECL_SYM(":INHERITED",1276);
#line 1112
	the_env->nvalues = 2;
#line 1112
	the_env->values[1] = __value1;
#line 1112
	the_env->values[0] = __value0;
#line 1112
	va_end(ARGS);
#line 1112
	return __value0;
#line 1112
}
;
  }
  {
#line 1114
	#line 1114
	cl_object __value0 = ECL_NIL;
#line 1114
	cl_object __value1 = ECL_NIL;
#line 1114
	the_env->nvalues = 2;
#line 1114
	the_env->values[1] = __value1;
#line 1114
	the_env->values[0] = __value0;
#line 1114
	va_end(ARGS);
#line 1114
	return __value0;
#line 1114
}
;
}

#line 1117
cl_object cl_unintern(cl_narg narg, cl_object symbl, ...)
{
#line 1117

#line 1119
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1119
	cl_object p;
#line 1119
	va_list ARGS;
	va_start(ARGS, symbl);
#line 1119
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(883));
#line 1119
	if (narg > 1) {
#line 1119
		p = va_arg(ARGS,cl_object);
#line 1119
	} else {
#line 1119
		p = ecl_current_package();
#line 1119
	}
#line 1119
  {
#line 1119
	#line 1119
	cl_object __value0 = (ecl_unintern(symbl, p) ? ECL_T : ECL_NIL);
#line 1119
	the_env->nvalues = 1;
#line 1119
	the_env->values[0] = __value0;
#line 1119
	va_end(ARGS);
#line 1119
	return __value0;
#line 1119
}
;
}

#line 1122
cl_object cl_export(cl_narg narg, cl_object symbols, ...)
{
#line 1122

#line 1124
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1124
	cl_object pack;
#line 1124
	va_list ARGS;
	va_start(ARGS, symbols);
#line 1124
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(346));
#line 1124
	if (narg > 1) {
#line 1124
		pack = va_arg(ARGS,cl_object);
#line 1124
	} else {
#line 1124
		pack = ecl_current_package();
#line 1124
	}
#line 1124
  switch (ecl_t_of(symbols)) {
  case t_symbol:
    cl_export2(symbols, pack);
    break;
  case t_list:
    pack = si_coerce_to_package(pack);
    loop_for_in(symbols) {
      cl_export2(ECL_CONS_CAR(symbols), pack);
    } end_loop_for_in;
    break;
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*EXPORT*/346),1,symbols,
                         cl_list(3,ECL_SYM("OR",616),ECL_SYM("SYMBOL",842),ECL_SYM("LIST",483)));
  }
  {
#line 1138
	#line 1138
	cl_object __value0 = ECL_T;
#line 1138
	the_env->nvalues = 1;
#line 1138
	the_env->values[0] = __value0;
#line 1138
	va_end(ARGS);
#line 1138
	return __value0;
#line 1138
}
;
}

#line 1141
cl_object cl_unexport(cl_narg narg, cl_object symbols, ...)
{
#line 1141

#line 1143
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1143
	cl_object pack;
#line 1143
	va_list ARGS;
	va_start(ARGS, symbols);
#line 1143
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(882));
#line 1143
	if (narg > 1) {
#line 1143
		pack = va_arg(ARGS,cl_object);
#line 1143
	} else {
#line 1143
		pack = ecl_current_package();
#line 1143
	}
#line 1143
  switch (ecl_t_of(symbols)) {
  case t_symbol:
    cl_unexport2(symbols, pack);
    break;
  case t_list:
    pack = si_coerce_to_package(pack);
    loop_for_in(symbols) {
      cl_unexport2(ECL_CONS_CAR(symbols), pack);
    } end_loop_for_in;
    break;
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*UNEXPORT*/882),1,symbols,
                         cl_list(3,ECL_SYM("OR",616),ECL_SYM("SYMBOL",842),ECL_SYM("LIST",483)));
  }
  {
#line 1157
	#line 1157
	cl_object __value0 = ECL_T;
#line 1157
	the_env->nvalues = 1;
#line 1157
	the_env->values[0] = __value0;
#line 1157
	va_end(ARGS);
#line 1157
	return __value0;
#line 1157
}
;
}

#line 1160
cl_object cl_import(cl_narg narg, cl_object symbols, ...)
{
#line 1160

#line 1162
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1162
	cl_object pack;
#line 1162
	va_list ARGS;
	va_start(ARGS, symbols);
#line 1162
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(433));
#line 1162
	if (narg > 1) {
#line 1162
		pack = va_arg(ARGS,cl_object);
#line 1162
	} else {
#line 1162
		pack = ecl_current_package();
#line 1162
	}
#line 1162
  switch (ecl_t_of(symbols)) {
  case t_symbol:
    cl_import2(symbols, pack);
    break;
  case t_list:
    pack = si_coerce_to_package(pack);
    loop_for_in(symbols) {
      cl_import2(ECL_CONS_CAR(symbols), pack);
    } end_loop_for_in;
    break;
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*IMPORT*/433),1,symbols,
                         cl_list(3,ECL_SYM("OR",616),ECL_SYM("SYMBOL",842),ECL_SYM("LIST",483)));
  }
  {
#line 1176
	#line 1176
	cl_object __value0 = ECL_T;
#line 1176
	the_env->nvalues = 1;
#line 1176
	the_env->values[0] = __value0;
#line 1176
	va_end(ARGS);
#line 1176
	return __value0;
#line 1176
}
;
}

#line 1179
cl_object cl_shadowing_import(cl_narg narg, cl_object symbols, ...)
{
#line 1179

#line 1181
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1181
	cl_object pack;
#line 1181
	va_list ARGS;
	va_start(ARGS, symbols);
#line 1181
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(756));
#line 1181
	if (narg > 1) {
#line 1181
		pack = va_arg(ARGS,cl_object);
#line 1181
	} else {
#line 1181
		pack = ecl_current_package();
#line 1181
	}
#line 1181
  switch (ecl_t_of(symbols)) {
  case t_symbol:
    ecl_shadowing_import(symbols, pack);
    break;
  case t_list:
    pack = si_coerce_to_package(pack);
    loop_for_in(symbols) {
      ecl_shadowing_import(ECL_CONS_CAR(symbols), pack);
    } end_loop_for_in;
    break;
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SHADOWING-IMPORT*/756),1,symbols,
                         cl_list(3,ECL_SYM("OR",616),ECL_SYM("SYMBOL",842),ECL_SYM("LIST",483)));
  }
  {
#line 1195
	#line 1195
	cl_object __value0 = ECL_T;
#line 1195
	the_env->nvalues = 1;
#line 1195
	the_env->values[0] = __value0;
#line 1195
	va_end(ARGS);
#line 1195
	return __value0;
#line 1195
}
;
}

#line 1198
cl_object cl_shadow(cl_narg narg, cl_object symbols, ...)
{
#line 1198

#line 1200
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1200
	cl_object pack;
#line 1200
	va_list ARGS;
	va_start(ARGS, symbols);
#line 1200
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(755));
#line 1200
	if (narg > 1) {
#line 1200
		pack = va_arg(ARGS,cl_object);
#line 1200
	} else {
#line 1200
		pack = ecl_current_package();
#line 1200
	}
#line 1200
  switch (ecl_t_of(symbols)) {
#ifdef ECL_UNICODE
  case t_string:
#endif
  case t_base_string:
  case t_symbol:
  case t_character:
    /* Arguments to SHADOW may be: string designators ... */
    ecl_shadow(symbols, pack);
    break;
  case t_list:
    /* ... or lists of string designators */
    pack = si_coerce_to_package(pack);
    loop_for_in(symbols) {
      ecl_shadow(ECL_CONS_CAR(symbols), pack);
    } end_loop_for_in;
    break;
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SHADOW*/755),1,symbols,
                         cl_list(3,ECL_SYM("OR",616),ECL_SYM("SYMBOL",842),ECL_SYM("LIST",483)));
  }
  {
#line 1221
	#line 1221
	cl_object __value0 = ECL_T;
#line 1221
	the_env->nvalues = 1;
#line 1221
	the_env->values[0] = __value0;
#line 1221
	va_end(ARGS);
#line 1221
	return __value0;
#line 1221
}
;
}

#line 1224
cl_object cl_use_package(cl_narg narg, cl_object pack, ...)
{
#line 1224

#line 1226
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1226
	cl_object pa;
#line 1226
	va_list ARGS;
	va_start(ARGS, pack);
#line 1226
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(894));
#line 1226
	if (narg > 1) {
#line 1226
		pa = va_arg(ARGS,cl_object);
#line 1226
	} else {
#line 1226
		pa = ecl_current_package();
#line 1226
	}
#line 1226
  switch (ecl_t_of(pack)) {
  case t_symbol:
  case t_character:
  case t_base_string:
#ifdef ECL_UNICODE
  case t_string:
#endif
  case t_package:
    ecl_use_package(pack, pa);
    break;
  case t_list:
    pa = si_coerce_to_package(pa);
    loop_for_in(pack) {
      ecl_use_package(ECL_CONS_CAR(pack), pa);
    } end_loop_for_in;
    break;
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*USE-PACKAGE*/894), 1, pack,
                         ecl_read_from_cstring("(OR SYMBOL CHARACTER STRING LIST PACKAGE)"));
  }
  {
#line 1246
	#line 1246
	cl_object __value0 = ECL_T;
#line 1246
	the_env->nvalues = 1;
#line 1246
	the_env->values[0] = __value0;
#line 1246
	va_end(ARGS);
#line 1246
	return __value0;
#line 1246
}
;
}

#line 1249
cl_object cl_unuse_package(cl_narg narg, cl_object pack, ...)
{
#line 1249

#line 1251
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1251
	cl_object pa;
#line 1251
	va_list ARGS;
	va_start(ARGS, pack);
#line 1251
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(889));
#line 1251
	if (narg > 1) {
#line 1251
		pa = va_arg(ARGS,cl_object);
#line 1251
	} else {
#line 1251
		pa = ecl_current_package();
#line 1251
	}
#line 1251
  switch (ecl_t_of(pack)) {
  case t_symbol:
  case t_character:
  case t_base_string:
#ifdef ECL_UNICODE
  case t_string:
#endif
  case t_package:
    ecl_unuse_package(pack, pa);
    break;
  case t_list:
    pa = si_coerce_to_package(pa);
    loop_for_in(pack) {
      ecl_unuse_package(ECL_CONS_CAR(pack), pa);
    } end_loop_for_in;
    break;
  default:
    FEwrong_type_nth_arg(ecl_make_fixnum(/*UNUSE-PACKAGE*/889), 1, pack,
                         ecl_read_from_cstring("(OR SYMBOL CHARACTER STRING LIST PACKAGE)"));
  }
  {
#line 1271
	#line 1271
	cl_object __value0 = ECL_T;
#line 1271
	the_env->nvalues = 1;
#line 1271
	the_env->values[0] = __value0;
#line 1271
	va_end(ARGS);
#line 1271
	return __value0;
#line 1271
}
;
}

cl_object
si_package_hash_tables(cl_object p)
{
  const cl_env_ptr the_env = ecl_process_env();
  cl_object he, hi, u;
  unlikely_if (!ECL_PACKAGEP(p))
    FEwrong_type_only_arg(ecl_make_fixnum(/*SI::PACKAGE-HASH-TABLES*/1132), p, ecl_make_fixnum(/*PACKAGE*/619));
  ECL_WITH_GLOBAL_ENV_WRLOCK_BEGIN(the_env) {
    he = si_copy_hash_table(p->pack.external);
    hi = si_copy_hash_table(p->pack.internal);
    u = cl_copy_list(p->pack.uses);
  } ECL_WITH_GLOBAL_ENV_WRLOCK_END;
  {
#line 1286
	const cl_env_ptr the_env = ecl_process_env();
#line 1286
	#line 1286
	cl_object __value0 = he;
#line 1286
	cl_object __value1 = hi;
#line 1286
	cl_object __value2 = u;
#line 1286
	the_env->nvalues = 3;
#line 1286
	the_env->values[2] = __value2;
#line 1286
	the_env->values[1] = __value1;
#line 1286
	the_env->values[0] = __value0;
#line 1286
	#line 1286
	return __value0;
#line 1286
}
;
}

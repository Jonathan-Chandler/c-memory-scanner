#line 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c/pathname.d"
/* -*- Mode: C; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/* vim: set filetype=c tabstop=2 shiftwidth=2 expandtab: */

/*
 * pathname.d - pathnames
 *
 * Copyright (c) 1984 Taiichi Yuasa and Masami Hagiya
 * Copyright (c) 1990 Giuseppe Attardi
 * Copyright (c) 2001 Juan Jose Garcia Ripoll
 * Copyright (c) 2015 Daniel Kochmański
 *
 * See file 'LICENSE' for the copyright details.
 *
 */

/*
  O.S. DEPENDENT

  This file contains those functions that interpret namestrings.
*/

#include <ecl/ecl.h>
#include <ecl/ecl-inl.h>
#include <ecl/internal.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>

typedef int (*delim_fn)(int);

/*
 * Translates a string into the host's preferred case.
 * See CLHS 19.2.2.1.2.2 Common Case in Pathname Components.
 */
/* We use UN*X conventions, so lower case is default.
 * However, this really should be conditionalised to the OS type,
 * and it should translate to _opposite_ of the local case.
 */

static cl_object
normalize_case(cl_object path, cl_object cas)
{
  if (cas == ECL_SYM(":LOCAL",1294)) {
    if (path->pathname.logical)
      return ECL_SYM(":UPCASE",1350);
    return ECL_SYM(":DOWNCASE",1245);
  } else if (cas == ECL_SYM(":COMMON",1230) || cas == ECL_SYM(":DOWNCASE",1245) || cas == ECL_SYM(":UPCASE",1350)) {
    return cas;
  } else {
    FEerror("Not a valid pathname case :~%~A", 1, cas);
  }
}

static bool
in_local_case_p(cl_object str, cl_object cas)
{
  if (cas == ECL_SYM(":DOWNCASE",1245))
    return ecl_string_case(str) < 0;
  return 1;
}

static bool
in_antilocal_case_p(cl_object str, cl_object cas)
{
  if (cas == ECL_SYM(":DOWNCASE",1245))
    return ecl_string_case(str) > 0;
  return 0;
}

static cl_object
to_local_case(cl_object str, cl_object cas)
{
  if (cas == ECL_SYM(":DOWNCASE",1245))
    return cl_string_downcase(1, str);
  return cl_string_upcase(1, str);
}

static cl_object
host_case(cl_object host)
{
  if (Null(host))
    return ECL_SYM(":LOCAL",1294);
  if (ecl_logical_hostname_p(host))
    return ECL_SYM(":UPCASE",1350);
  return ECL_SYM(":DOWNCASE",1245);
}

static cl_object
to_antilocal_case(cl_object str, cl_object cas)
{
  if (cas == ECL_SYM(":DOWNCASE",1245))
    return cl_string_upcase(1, str);
  return cl_string_upcase(1, str);
}

static cl_object
translate_from_common(cl_object str, cl_object tocase)
{
  int string_case = ecl_string_case(str);
  if (string_case > 0) { /* ALL_UPPER */
    return to_local_case(str, tocase);
  } else if (string_case < 0) { /* ALL_LOWER */
    return to_antilocal_case(str, tocase);
  } else { /* Mixed case goes unchanged */
    return str;
  }
}

static cl_object
translate_to_common(cl_object str, cl_object fromcase)
{
  if (in_local_case_p(str, fromcase)) {
    return cl_string_upcase(1, str);
  } else if (in_antilocal_case_p(str, fromcase)) {
    return cl_string_downcase(1, str);
  } else {
    return str;
  }
}

static cl_object
translate_component_case(cl_object str, cl_object fromcase, cl_object tocase)
{
  /* Pathnames may contain some other objects, such as symbols,
   * numbers, etc, which need not be translated */
  if (str == OBJNULL) {
    return str;
  } else if (!ECL_STRINGP(str)) {
    return str;
  } else if (tocase == fromcase) {
    return str;
  } else if (tocase == ECL_SYM(":COMMON",1230)) {
    return translate_to_common(str, fromcase);
  } else if (fromcase == ECL_SYM(":COMMON",1230)) {
    return translate_from_common(str, tocase);
  } else {
    str = translate_to_common(str, fromcase);
    return translate_from_common(str, tocase);
  }
}

static cl_object
translate_list_case(cl_object list, cl_object fromcase, cl_object tocase)
{
  /* If the argument is really a list, translate all strings in it and
   * return this new list, else assume it is a string and translate it.
   */
  if (!CONSP(list)) {
    return translate_component_case(list, fromcase, tocase);
  } else {
    cl_object l;
    list = cl_copy_list(list);
    for (l = list; !ecl_endp(l); l = CDR(l)) {
      /* It is safe to pass anything to translate_component_case,
       * because it will only transform strings, leaving other
       * object (such as symbols) unchanged.*/
      cl_object name = ECL_CONS_CAR(l);
      name = ECL_LISTP(name)?
        translate_list_case(name, fromcase, tocase) :
        translate_component_case(name, fromcase, tocase);
      ECL_RPLACA(l, name);
    }
    return list;
  }
}

static void
push_substring(cl_object buffer, cl_object string, cl_index start, cl_index end)
{
  string = cl_string(string);
  while (start < end) {
    ecl_string_push_extend(buffer, ecl_char(string, start));
    start++;
  }
}

static void
push_string(cl_object buffer, cl_object string)
{
  push_substring(buffer, string, 0, ecl_length(string));
}

static cl_object
destructively_check_directory(cl_object directory, bool logical, bool delete_back)
{
  /* This function performs two tasks
   * 1) It ensures that the list is a valid directory list
   * 2) It ensures that all strings in the list are valid C strings without fill pointer
   *    All strings are copied, thus avoiding problems with the user modifying the
   *    list that was passed to MAKE-PATHNAME.
   * 3) Redundant :back are removed.
   */
  /* INV: directory is always a list */
  cl_object ptr;
  int i;

  if (!LISTP(directory))
    return ECL_SYM(":ERROR",1251);
  if (Null(directory))
    return directory;
  if (ECL_CONS_CAR(directory) != ECL_SYM(":ABSOLUTE",1218) &&
      ECL_CONS_CAR(directory) != ECL_SYM(":RELATIVE",1326))
    return ECL_SYM(":ERROR",1251);
 BEGIN:
  for (i=0, ptr=directory; CONSP(ptr); ptr = ECL_CONS_CDR(ptr), i++) {
    cl_object item = ECL_CONS_CAR(ptr);
    if (item == ECL_SYM(":BACK",1222)) {
      if (i == 0)
        return ECL_SYM(":ERROR",1251);
      item = ecl_nth(i-1, directory);
      if (item == ECL_SYM(":ABSOLUTE",1218) || item == ECL_SYM(":WILD-INFERIORS",1356))
        return ECL_SYM(":ERROR",1251);
      if (delete_back && i >= 2) {
        cl_object next = ECL_CONS_CDR(ptr);
        ptr = ecl_nthcdr(i-2, directory);
        ECL_RPLACD(ptr, next);
        i = i-2;
      }
    } else if (item == ECL_SYM(":UP",1349)) {
      if (i == 0)
        return ECL_SYM(":ERROR",1251);
      item = ecl_nth(i-1, directory);
      if (item == ECL_SYM(":ABSOLUTE",1218) || item == ECL_SYM(":WILD-INFERIORS",1356))
        return ECL_SYM(":ERROR",1251);
    } else if (item == ECL_SYM(":RELATIVE",1326) || item == ECL_SYM(":ABSOLUTE",1218)) {
      if (i > 0)
        return ECL_SYM(":ERROR",1251);
    } else if (ecl_stringp(item)) {
      cl_index l = ecl_length(item);
      item = cl_copy_seq(item);
      ECL_RPLACA(ptr, item);
      if (logical)
        continue;
      if (l && ecl_char(item,0) == '.') {
        if (l == 1) {
          /* Single dot */
          if (i == 0)
            return ECL_SYM(":ERROR",1251);
          ECL_RPLACD(ecl_nthcdr(--i, directory),
                     ECL_CONS_CDR(ptr));
        } else if (l == 2 && ecl_char(item,1) == '.') {
          ECL_RPLACA(ptr, ECL_SYM(":UP",1349));
          goto BEGIN;
        }
      }
    } else if (item != ECL_SYM(":WILD",1355) && item != ECL_SYM(":WILD-INFERIORS",1356)) {
      return ECL_SYM(":ERROR",1251);
    }
  }
  return directory;
}

cl_object
ecl_make_pathname(cl_object host, cl_object device, cl_object directory,
                  cl_object name, cl_object type, cl_object version,
                  cl_object fromcase)
{
  cl_object x, p, component;

  p = ecl_alloc_object(t_pathname);
  if (ecl_stringp(host))
    p->pathname.logical = ecl_logical_hostname_p(host);
  else if (host == ECL_NIL)
    p->pathname.logical = FALSE;
  else {
    x = directory;
    component = ECL_SYM(":HOST",1267);
    goto ERROR;
  }
  if (device != ECL_NIL && device != ECL_SYM(":UNSPECIFIC",1347) &&
      !(!p->pathname.logical && ecl_stringp(device))) {
    x = device;
    component = ECL_SYM(":DEVICE",1239);
    goto ERROR;
  }
  if (name != ECL_NIL && name != ECL_SYM(":WILD",1355) && !ecl_stringp(name)) {
    x = name;
    component = ECL_SYM(":NAME",1300);
    goto ERROR;
  }
  if (type != ECL_NIL && type != ECL_SYM(":UNSPECIFIC",1347) && type != ECL_SYM(":WILD",1355) && !ecl_stringp(type)) {
    x = type;
    component = ECL_SYM(":TYPE",1346);
    goto ERROR;
  }
  if (version != ECL_SYM(":UNSPECIFIC",1347) && version != ECL_SYM(":NEWEST",1303) &&
      version != ECL_SYM(":WILD",1355) && version != ECL_NIL && !ECL_FIXNUMP(version))
    {
      x = version;
      component = ECL_SYM(":VERSION",1354);
    ERROR:  FEerror("~s is not a valid pathname-~a component", 2, x, component);
    }
  switch (ecl_t_of(directory)) {
#ifdef ECL_UNICODE
  case t_string:
#endif
  case t_base_string:
    directory = cl_list(2, ECL_SYM(":ABSOLUTE",1218), directory);
    break;
  case t_symbol:
    if (directory == ECL_SYM(":WILD",1355)) {
      directory = cl_list(2, ECL_SYM(":ABSOLUTE",1218), ECL_SYM(":WILD-INFERIORS",1356));
      break;
    }
    x = directory;
    component = ECL_SYM(":DIRECTORY",1241);
    goto ERROR;
  case t_list:
    directory = cl_copy_list(directory);
    break;
  default:
    x = directory;
    component = ECL_SYM(":DIRECTORY",1241);
    goto ERROR;
  }
  p->pathname.host = host;
  {
    cl_object tocase = normalize_case(p, ECL_SYM(":LOCAL",1294));
    if (p->pathname.logical)
      fromcase = ECL_SYM(":COMMON",1230);
    else
      fromcase = normalize_case(p, fromcase);
    p->pathname.host =
      translate_component_case(host, fromcase, tocase);
    p->pathname.device =
      translate_component_case(device, fromcase, tocase);
    p->pathname.directory =
      directory =
      translate_list_case(directory, fromcase, tocase);
    p->pathname.name =
      translate_component_case(name, fromcase, tocase);
    p->pathname.type =
      translate_component_case(type, fromcase, tocase);
    p->pathname.version = version;
  }
  directory = destructively_check_directory(directory, p->pathname.logical, 0);
  unlikely_if (directory == ECL_SYM(":ERROR",1251)) {
    cl_error(3, ECL_SYM("FILE-ERROR",355), ECL_SYM(":PATHNAME",1312), p);
  }
  p->pathname.directory = directory;
  return(p);
}

static cl_object
tilde_expand(cl_object pathname)
{
  /*
   * If the pathname is a physical one, without hostname, without device
   * and the first element is either a tilde '~' or '~' followed by
   * a user name, we merge the user homedir pathname with this one.
   */
  cl_object directory, head;
  if (pathname->pathname.logical || pathname->pathname.host != ECL_NIL
      || pathname->pathname.device != ECL_NIL) {
    return pathname;
  }
  directory = pathname->pathname.directory;
  if (!CONSP(directory) || ECL_CONS_CAR(directory) != ECL_SYM(":RELATIVE",1326)
      || ECL_CONS_CDR(directory) == ECL_NIL) {
    return pathname;
  }
  head = CADR(directory);
  if (ecl_stringp(head) && ecl_length(head) > 0 && 
      ecl_char(head,0) == '~') {
    /* Remove the tilde component */
    ECL_RPLACD(directory, CDDR(directory));
    pathname = cl_merge_pathnames(2, pathname,
                                  ecl_homedir_pathname(head));
  }
  return pathname;
}

#define WORD_INCLUDE_DELIM 1
#define WORD_ALLOW_ASTERISK  2
#define WORD_EMPTY_IS_NIL 4
#define WORD_LOGICAL 8
#define WORD_SEARCH_LAST_DOT 16
#define WORD_ALLOW_LEADING_DOT 32
#define WORD_DISALLOW_SLASH 64
#define WORD_DISALLOW_SEMICOLON 128

static cl_object
make_one(cl_object s, cl_index start, cl_index end)
{
  return cl_subseq(3, s, ecl_make_fixnum(start), ecl_make_fixnum(end));
}

static int is_colon(int c) { return c == ':'; }
static int is_slash(int c) { return IS_DIR_SEPARATOR(c); }
static int is_semicolon(int c) { return c == ';'; }
static int is_dot(int c) { return c == '.'; }
static int is_null(int c) { return c == '\0'; }

/*
 * Parses a word from string `S' until either:
 *      1) character `DELIM' is found
 *      2) end of string is reached
 *      3) a non valid character is found
 * Output is either
 *      1) :error in case (3) above
 *      2) :wild, :wild-inferiors, :up
 *      3) "" or ECL_NIL when word has no elements
 *      5) A non empty string
 */
static cl_object
parse_word(cl_object s, delim_fn delim, int flags, cl_index start,
           cl_index end, cl_index *end_of_word)
{
  cl_index i, j, last_delim = end;
  bool wild_inferiors = FALSE;

  i = j = start;
  for (; i < end; i++) {
    bool valid_char;
    cl_index c = ecl_char(s, i);
    if (delim(c)) {
      if ((i == start) && (flags & WORD_ALLOW_LEADING_DOT)) {
        /* Leading dot is included */
        continue;
      }
      last_delim = i;
      if (!(flags & WORD_SEARCH_LAST_DOT)) {
        break;
      }
    }
    if (c == '*') {
      if (!(flags & WORD_ALLOW_ASTERISK))
        valid_char = FALSE; /* Asterisks not allowed in this word */
      else {
        wild_inferiors = (i > start && ecl_char(s, i-1) == '*');
        valid_char = TRUE; /* single "*" */
      }
    } else if (c == ';' && (flags & WORD_DISALLOW_SEMICOLON)) {
      valid_char = 0;
    } else if (c == '/' && (flags & WORD_DISALLOW_SLASH)) {
      valid_char = 0;
    } else {
      valid_char = c != 0;
    }
    if (!valid_char) {
      *end_of_word = start;
      return ECL_SYM(":ERROR",1251);
    }
  }
  if (i > last_delim) {
    /* Go back to the position of the last delimiter */
    i = last_delim;
  }
  if (i < end) {
    *end_of_word = i+1;
  } else {
    *end_of_word = end;
    /* We have reached the end of the string without finding
       the proper delimiter */
    if (flags & WORD_INCLUDE_DELIM) {
      *end_of_word = start;
      return ECL_NIL;
    }
  }
  switch(i-j) {
  case 0:
    if (flags & WORD_EMPTY_IS_NIL)
      return ECL_NIL;
    return cl_core.null_string;
  case 1:
    if (ecl_char(s,j) == '*')
      return ECL_SYM(":WILD",1355);
    break;
  case 2: {
    cl_index c0 = ecl_char(s,j);
    cl_index c1 = ecl_char(s,j+1);
    if (c0 == '*' && c1 == '*')
      return ECL_SYM(":WILD-INFERIORS",1356);
    if (!(flags & WORD_LOGICAL) && c0 == '.' && c1 == '.')
      return ECL_SYM(":UP",1349);
    break;
  }
  default:
    if (wild_inferiors)     /* '**' surrounded by other characters */
      return ECL_SYM(":ERROR",1251);
  }
  return make_one(s, j, i);
}

/*
 * Parses a logical or physical directory tree. Output is always a
 * list of valid directory components, which may be just NIL.
 *
 * INV: When parsing of directory components has failed, a valid list
 * is also returned, and it will be later in the parsing of
 * pathname-name or pathname-type when the same error is detected.
 */

static cl_object
parse_directories(cl_object s, int flags, cl_index start, cl_index end,
                  cl_index *end_of_dir)
{
  cl_index i, j;
  cl_object path = ECL_NIL;
  delim_fn delim = (flags & WORD_LOGICAL) ? is_semicolon : is_slash;

  flags |= WORD_INCLUDE_DELIM | WORD_ALLOW_ASTERISK;
  *end_of_dir = start;
  for (i = j = start; i < end; j = i) {
    cl_object part = parse_word(s, delim, flags, j, end, &i);
    if (part == ECL_SYM(":ERROR",1251) || part == ECL_NIL)
      break;
    if (part == cl_core.null_string) {  /* "/", ";" */
      if (j != start) {
        if (flags & WORD_LOGICAL)
          return ECL_SYM(":ERROR",1251);
        *end_of_dir = i;
        continue;
      }
      part = (flags & WORD_LOGICAL) ? ECL_SYM(":RELATIVE",1326) : ECL_SYM(":ABSOLUTE",1218);
    }
    *end_of_dir = i;
    path = ecl_cons(part, path);
  }
  return cl_nreverse(path);
}

bool
ecl_logical_hostname_p(cl_object host)
{
  if (!ecl_stringp(host))
    return FALSE;
  return !Null(cl_assoc(4, host, cl_core.pathname_translations, ECL_SYM(":TEST",1343), ECL_SYM("STRING-EQUAL",810)));
}

/*
 * Parses a lisp namestring until the whole substring is parsed or an
 * error is found. It returns a valid pathname or NIL, plus the place
 * where parsing ended in *END_OF_PARSING.
 *
 * The rules are as follows:
 *
 * 1) If a hostname is supplied it determines whether the namestring
 *    will be parsed as logical or as physical.
 *
 * 2) If no hostname is supplied, first it tries parsing using logical
 *    pathname rules and, if no logical hostname is found, then it
 *    tries the physical pathname format.
 *
 * 3) Logical pathname syntax:
 *      [logical-hostname:][;][logical-directory-component;][pathname-name][.pathname-type]
 *
 * 4) Physical pathname syntax:
 *      [device:][[//hostname]/][directory-component/]*[pathname-name][.pathname-type]
 *
 *      logical-hostname, device, hostname = word
 *      logical-directory-component = word | wildcard-word
 *      directory-component = word | wildcard-word | '..' | '.'
 *      pathname-name, pathname-type = word | wildcard-word | ""
 *
 */
cl_object
ecl_parse_namestring(cl_object s, cl_index start, cl_index end, cl_index *ep,
                     cl_object default_host)
{
  cl_object host, device, path, name, type, aux, version;
  bool logical;

  if (start == end) {
    host = device = path = name = type = aux = version = ECL_NIL;
    logical = 0;
    *ep = end;
    goto make_it;
  }
  /* We first try parsing as logical-pathname. In case of
   * failure, physical-pathname parsing is performed only when
   * there is no supplied *logical* host name. All other failures
   * result in ECL_NIL as output.
   */
  host = parse_word(s, is_colon, WORD_LOGICAL | WORD_INCLUDE_DELIM |
                    WORD_DISALLOW_SEMICOLON, start, end, ep);
  if (default_host != ECL_NIL) {
    if (host == ECL_NIL || host == ECL_SYM(":ERROR",1251))
      host = default_host;
  }
  if (!ecl_logical_hostname_p(host))
    goto physical;
  /*
   * Logical pathname format:
   *      [logical-hostname:][;][logical-directory-component;][pathname-name][.pathname-type]
   */
  logical = TRUE;
  device = ECL_SYM(":UNSPECIFIC",1347);
  path = parse_directories(s, WORD_LOGICAL, *ep, end, ep);
  if (CONSP(path)) {
    if (ECL_CONS_CAR(path) != ECL_SYM(":RELATIVE",1326) &&
        ECL_CONS_CAR(path) != ECL_SYM(":ABSOLUTE",1218))
      path = CONS(ECL_SYM(":ABSOLUTE",1218), path);
    path = destructively_check_directory(path, TRUE, FALSE);
  } else {
    path = CONS(ECL_SYM(":ABSOLUTE",1218), path);
  }
  if (path == ECL_SYM(":ERROR",1251))
    return ECL_NIL;
  name = parse_word(s, is_dot, WORD_LOGICAL | WORD_ALLOW_ASTERISK |
                    WORD_EMPTY_IS_NIL, *ep, end, ep);
  if (name == ECL_SYM(":ERROR",1251))
    return ECL_NIL;
  type = ECL_NIL;
  version = ECL_NIL;
  if (*ep == start || ecl_char(s, *ep-1) != '.')
    goto make_it;
  type = parse_word(s, is_dot, WORD_LOGICAL | WORD_ALLOW_ASTERISK |
                    WORD_EMPTY_IS_NIL, *ep, end, ep);
  if (type == ECL_SYM(":ERROR",1251))
    return ECL_NIL;
  if (*ep == start || ecl_char(s, *ep-1) != '.')
    goto make_it;
  aux = parse_word(s, is_null, WORD_LOGICAL | WORD_ALLOW_ASTERISK |
                   WORD_EMPTY_IS_NIL, *ep, end, ep);
  if (aux == ECL_SYM(":ERROR",1251)) {
    return ECL_NIL;
  } else if (ECL_SYMBOLP(aux)) {
    version = aux;
  } else {
    const cl_env_ptr the_env = ecl_process_env();
    cl_object parsed_length;
    version = cl_parse_integer(3, aux, ECL_SYM(":JUNK-ALLOWED",1287), ECL_T);
    parsed_length = ecl_nth_value(the_env, 1);
    if (ecl_fixnum(parsed_length) == ecl_length(aux) &&
        cl_integerp(version) != ECL_NIL && ecl_plusp(version))
      ;
    else if (cl_string_equal(2, aux, ECL_SYM(":NEWEST",1303)) != ECL_NIL)
      version = ECL_SYM(":NEWEST",1303);
    else
      return ECL_NIL;
  }
  goto make_it;
 physical:
  /*
   * Physical pathname format:
   *      [[device:[//hostname]]/][directory-component/]*[pathname-name][.pathname-type]
   */
  logical = FALSE;
  /* We only parse a hostname when the device was present. This
   * requisite is a bit stupid and only applies to the Unix port,
   * where "//home/" is equivalent to "/home" However, in Windows
   * we need "//FOO/" to be separately handled, for it is a shared
   * resource.
   */
#if defined(ECL_MS_WINDOWS_HOST)
  if ((start+1 <= end) && is_slash(ecl_char(s, start))) {
    device = ECL_NIL;
    goto maybe_parse_host;
  }
#endif
  device = parse_word(s, is_colon, WORD_INCLUDE_DELIM | WORD_EMPTY_IS_NIL |
                      WORD_DISALLOW_SLASH, start, end, ep);
  if (device == ECL_SYM(":ERROR",1251) || device == ECL_NIL) {
    device = ECL_NIL;
    host = ECL_NIL;
    goto done_device_and_host;
  }
  if (!ecl_stringp(device)) {
    return ECL_NIL;
  }
#if defined(ECL_MS_WINDOWS_HOST)
 maybe_parse_host:
#endif
  /* Files have no effective device. */
  if (cl_string_equal(2, device, ECL_SYM(":FILE",1260)) == ECL_T)
    device = ECL_NIL;
  start = *ep;
  host = ECL_NIL;
  if ((start+2) <= end && is_slash(ecl_char(s, start)) &&
      is_slash(ecl_char(s, start+1)))
    {
      host = parse_word(s, is_slash, WORD_EMPTY_IS_NIL,
                        start+2, end, ep);
      if (host == ECL_SYM(":ERROR",1251)) {
        host = ECL_NIL;
      } else if (host != ECL_NIL) {
        if (!ecl_stringp(host))
          return ECL_NIL;
        start = *ep;
        if (is_slash(ecl_char(s,--start)))
          *ep = start;
      }
    }
  if (ecl_length(device) == 0)
    device = ECL_NIL;
 done_device_and_host:
  path = parse_directories(s, 0, *ep, end, ep);
  if (CONSP(path)) {
    if (ECL_CONS_CAR(path) != ECL_SYM(":RELATIVE",1326) &&
        ECL_CONS_CAR(path) != ECL_SYM(":ABSOLUTE",1218))
      path = CONS(ECL_SYM(":RELATIVE",1326), path);
    path = destructively_check_directory(path, FALSE, FALSE);
  }
  if (path == ECL_SYM(":ERROR",1251))
    return ECL_NIL;
  start = *ep;
  name = parse_word(s, is_dot,
                    WORD_ALLOW_LEADING_DOT | WORD_SEARCH_LAST_DOT |
                    WORD_ALLOW_ASTERISK | WORD_EMPTY_IS_NIL,
                    start, end, ep);
  if (name == ECL_SYM(":ERROR",1251))
    return ECL_NIL;
  if ((*ep - start) <= 1 || ecl_char(s, *ep-1) != '.') {
    type = ECL_NIL;
  } else {
    type = parse_word(s, is_null, WORD_ALLOW_ASTERISK, *ep, end, ep);
    if (type == ECL_SYM(":ERROR",1251))
      return ECL_NIL;
  }
  version = (name != ECL_NIL || type != ECL_NIL) ? ECL_SYM(":NEWEST",1303) : ECL_NIL;
 make_it:
  if (*ep >= end) *ep = end;
  path = ecl_make_pathname(host, device, path, name, type, version,
                           ECL_SYM(":LOCAL",1294));
  path->pathname.logical = logical;
  return tilde_expand(path);
}

cl_object
si_default_pathname_defaults(void)
{
  /* This routine outputs the value of *default-pathname-defaults*
   * coerced to type PATHNAME. Special care is taken so that we do
   * not enter an infinite loop when using PARSE-NAMESTRING, because
   * this routine might itself try to use the value of this variable. */
  cl_object path = ecl_symbol_value(ECL_SYM("*DEFAULT-PATHNAME-DEFAULTS*",34));
  unlikely_if (!ECL_PATHNAMEP(path)) {
    const cl_env_ptr the_env = ecl_process_env();
    ecl_bds_bind(the_env, ECL_SYM("*DEFAULT-PATHNAME-DEFAULTS*",34), si_getcwd(0));
    FEwrong_type_key_arg(ecl_make_fixnum(/*PATHNAME*/632), ecl_make_fixnum(/**DEFAULT-PATHNAME-DEFAULTS**/34),
                         path, ECL_SYM("PATHNAME",632));
  }
  {
#line 734
	const cl_env_ptr the_env = ecl_process_env();
#line 734
	#line 734
	cl_object __value0 = path;
#line 734
	the_env->nvalues = 1;
#line 734
	the_env->values[0] = __value0;
#line 734
	#line 734
	return __value0;
#line 734
}
;
}

cl_object
cl_pathname(cl_object x)
{
 L:
  switch (ecl_t_of(x)) {
#ifdef ECL_UNICODE
  case t_string:
#endif
  case t_base_string:
    x = cl_parse_namestring(1, x);
  case t_pathname:
    break;
  case t_stream:
    switch ((enum ecl_smmode)x->stream.mode) {
    case ecl_smm_input:
    case ecl_smm_output:
    case ecl_smm_probe:
    case ecl_smm_io:
    case ecl_smm_input_file:
    case ecl_smm_output_file:
    case ecl_smm_io_file:
      x = IO_STREAM_FILENAME(x);
      goto L;
    case ecl_smm_synonym:
      x = SYNONYM_STREAM_STREAM(x);
      goto L;
    default:
      ;/* Fall through to error message */
    }
  default: {
    const char *type = "(OR FILE-STREAM STRING PATHNAME)";
    FEwrong_type_only_arg(ecl_make_fixnum(/*PATHNAME*/632), x, ecl_read_from_cstring(type));
  }
  }
  {
#line 771
	const cl_env_ptr the_env = ecl_process_env();
#line 771
	#line 771
	cl_object __value0 = x;
#line 771
	the_env->nvalues = 1;
#line 771
	the_env->values[0] = __value0;
#line 771
	#line 771
	return __value0;
#line 771
}
;
}

cl_object
cl_logical_pathname(cl_object x)
{
  x = cl_pathname(x);
  if (!x->pathname.logical) {
    cl_error(9, ECL_SYM("SIMPLE-TYPE-ERROR",775), ECL_SYM(":FORMAT-CONTROL",1263),
             ecl_make_constant_base_string("~S cannot be coerced to a logical pathname.",-1),
             ECL_SYM(":FORMAT-ARGUMENTS",1262), cl_list(1, x),
             ECL_SYM(":EXPECTED-TYPE",1254), ECL_SYM("LOGICAL-PATHNAME",500),
             ECL_SYM(":DATUM",1236), x);
  }
  {
#line 785
	const cl_env_ptr the_env = ecl_process_env();
#line 785
	#line 785
	cl_object __value0 = x;
#line 785
	the_env->nvalues = 1;
#line 785
	the_env->values[0] = __value0;
#line 785
	#line 785
	return __value0;
#line 785
}
;
}

/* FIXME! WILD-PATHNAME-P is missing! */
#line 789
cl_object cl_wild_pathname_p(cl_narg narg, cl_object pathname, ...)
{
#line 789

  bool checked = 0;
#line 792
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 792
	cl_object component;
#line 792
	va_list ARGS;
	va_start(ARGS, pathname);
#line 792
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(908));
#line 792
	if (narg > 1) {
#line 792
		component = va_arg(ARGS,cl_object);
#line 792
	} else {
#line 792
		component = ECL_NIL;
#line 792
	}
#line 792
  pathname = cl_pathname(pathname);
  if (component == ECL_NIL || component == ECL_SYM(":HOST",1267)) {
    if (pathname->pathname.host == ECL_SYM(":WILD",1355)) {
      {
#line 795
	#line 795
	cl_object __value0 = ECL_T;
#line 795
	the_env->nvalues = 1;
#line 795
	the_env->values[0] = __value0;
#line 795
	va_end(ARGS);
#line 795
	return __value0;
#line 795
}
;
    }
    checked = 1;
  }
  if (component == ECL_NIL || component == ECL_SYM(":DEVICE",1239)) {
    if (pathname->pathname.device == ECL_SYM(":WILD",1355)) {
      {
#line 801
	#line 801
	cl_object __value0 = ECL_T;
#line 801
	the_env->nvalues = 1;
#line 801
	the_env->values[0] = __value0;
#line 801
	va_end(ARGS);
#line 801
	return __value0;
#line 801
}
;
    }
    checked = 1;
  }
  if (component == ECL_NIL || component == ECL_SYM(":VERSION",1354)) {
    if (pathname->pathname.version == ECL_SYM(":WILD",1355)) {
      {
#line 807
	#line 807
	cl_object __value0 = ECL_T;
#line 807
	the_env->nvalues = 1;
#line 807
	the_env->values[0] = __value0;
#line 807
	va_end(ARGS);
#line 807
	return __value0;
#line 807
}
;
    }
    checked = 1;
  }
  if (component == ECL_NIL || component == ECL_SYM(":NAME",1300)) {
    cl_object name = pathname->pathname.name;
    if (name != ECL_NIL &&
        (name == ECL_SYM(":WILD",1355) || ecl_wild_string_p(name))) {
      {
#line 815
	#line 815
	cl_object __value0 = ECL_T;
#line 815
	the_env->nvalues = 1;
#line 815
	the_env->values[0] = __value0;
#line 815
	va_end(ARGS);
#line 815
	return __value0;
#line 815
}
;
    }
    checked = 1;
  }
  if (component == ECL_NIL || component == ECL_SYM(":TYPE",1346)) {
    cl_object name = pathname->pathname.type;
    if (name != ECL_NIL &&
        (name == ECL_SYM(":WILD",1355) || ecl_wild_string_p(name))) {
      {
#line 823
	#line 823
	cl_object __value0 = ECL_T;
#line 823
	the_env->nvalues = 1;
#line 823
	the_env->values[0] = __value0;
#line 823
	va_end(ARGS);
#line 823
	return __value0;
#line 823
}
;
    }
    checked = 1;
  }
  if (component == ECL_NIL || component == ECL_SYM(":DIRECTORY",1241)) {
    cl_object list = pathname->pathname.directory;
    checked = 1;
    loop_for_on_unsafe(list) {
      cl_object name = ECL_CONS_CAR(list);
      if (name != ECL_NIL &&
          (name == ECL_SYM(":WILD",1355) || name == ECL_SYM(":WILD-INFERIORS",1356) ||
           ecl_wild_string_p(name))) {
          {
#line 835
	#line 835
	cl_object __value0 = ECL_T;
#line 835
	the_env->nvalues = 1;
#line 835
	the_env->values[0] = __value0;
#line 835
	va_end(ARGS);
#line 835
	return __value0;
#line 835
}
;
        }
    } end_loop_for_on_unsafe(list);
  }
  if (checked == 0) {
    FEerror("~A is not a valid pathname component", 1, component);
  }
  {
#line 842
	#line 842
	cl_object __value0 = ECL_NIL;
#line 842
	the_env->nvalues = 1;
#line 842
	the_env->values[0] = __value0;
#line 842
	va_end(ARGS);
#line 842
	return __value0;
#line 842
}
;
}

/*
 * coerce_to_file_pathname(P) converts P to a physical pathname,
 * for a file which is accesible in our filesystem.
 * INV: Wildcards are allowed.
 * INV: A fresh new copy of the pathname is created.
 * INV: The pathname is absolute.
 */
cl_object
coerce_to_file_pathname(cl_object pathname)
{
  pathname = coerce_to_physical_pathname(pathname);
  pathname = cl_merge_pathnames(1, pathname);
#if 0
#if !defined(cygwin) && !defined(ECL_MS_WINDOWS_HOST)
  if (pathname->pathname.device != ECL_NIL)
    FEerror("Device ~S not yet supported.", 1,
            pathname->pathname.device);
  if (pathname->pathname.host != ECL_NIL)
    FEerror("Access to remote files not yet supported.", 0);
#endif
#endif
  if (pathname->pathname.directory == ECL_NIL ||
      ECL_CONS_CAR(pathname->pathname.directory) == ECL_SYM(":RELATIVE",1326)) {
    pathname = cl_merge_pathnames(2, pathname, si_getcwd(0));
  }
  return pathname;
}

/*
 * coerce_to_physical_pathname(P) converts P to a physical pathname,
 * performing the appropriate transformation if P was a logical pathname.
 */
cl_object
coerce_to_physical_pathname(cl_object x)
{
  x = cl_pathname(x);
  if (x->pathname.logical)
    return cl_translate_logical_pathname(1, x);
  return x;
}

/*
 * si_coerce_to_filename(P) converts P to a physical pathname and then to
 * a namestring. The output must always be a new simple-string which can
 * be used by the C library.
 * INV: No wildcards are allowed.
 */
cl_object
si_coerce_to_filename(cl_object pathname_orig)
{
  cl_object namestring, pathname;

  /* We always go through the pathname representation and thus
   * cl_namestring() always outputs a fresh new string */
  pathname = coerce_to_file_pathname(pathname_orig);
  if (cl_wild_pathname_p(1,pathname) != ECL_NIL)
    cl_error(3, ECL_SYM("FILE-ERROR",355), ECL_SYM(":PATHNAME",1312), pathname_orig);
  namestring = ecl_namestring(pathname,
                              ECL_NAMESTRING_TRUNCATE_IF_ERROR |
                              ECL_NAMESTRING_FORCE_BASE_STRING);
  if (namestring == ECL_NIL) {
    FEerror("Pathname without a physical namestring:"
            "~% :HOST ~A"
            "~% :DEVICE ~A"
            "~% :DIRECTORY ~A"
            "~% :NAME ~A"
            "~% :TYPE ~A"
            "~% :VERSION ~A",
            6, pathname_orig->pathname.host,
            pathname_orig->pathname.device,
            pathname_orig->pathname.directory,
            pathname_orig->pathname.name,
            pathname_orig->pathname.type,
            pathname_orig->pathname.version);
  }
  if (cl_core.path_max != -1 &&
      ecl_length(namestring) >= cl_core.path_max - 16)
    FEerror("Too long filename: ~S.", 1, namestring);
  return namestring;
}

#define default_device(host) ECL_NIL

cl_object
ecl_merge_pathnames(cl_object path, cl_object defaults, cl_object default_version)
{
  cl_object host, device, directory, name, type, version;
  cl_object tocase;

  defaults = cl_pathname(defaults);
  path = cl_parse_namestring(1, path, ECL_NIL, defaults);
  if (Null(host = path->pathname.host))
    host = defaults->pathname.host;
  tocase = host_case(host);
  if (Null(path->pathname.device)) {
    if (Null(path->pathname.host))
      device = cl_pathname_device(3, defaults, ECL_SYM(":CASE",1227), tocase);
    else if (path->pathname.host == defaults->pathname.host)
      device = defaults->pathname.device;
    else
      device = default_device(path->pathname.host);
  } else {
    device = path->pathname.device;
  }
  if (Null(path->pathname.directory)) {
    directory = cl_pathname_directory(3, defaults, ECL_SYM(":CASE",1227), tocase);
  } else if (ECL_CONS_CAR(path->pathname.directory) == ECL_SYM(":ABSOLUTE",1218)) {
    directory = path->pathname.directory;
  } else if (!Null(defaults->pathname.directory)) {
    directory = ecl_append(cl_pathname_directory(3, defaults,
                                                 ECL_SYM(":CASE",1227), tocase),
                           CDR(path->pathname.directory));
    /* Eliminate redundant :back */
    directory = destructively_check_directory(directory, TRUE, TRUE);
  } else {
    directory = path->pathname.directory;
  }
  if (Null(name = path->pathname.name)) {
    name = cl_pathname_name(3, defaults, ECL_SYM(":CASE",1227), tocase);
  }
  if (Null(type = path->pathname.type)) {
    type = cl_pathname_type(3, defaults, ECL_SYM(":CASE",1227), tocase);
  }
  version = path->pathname.version;
  if (Null(path->pathname.name)) {
    if (Null(version))
      version = defaults->pathname.version;
  }
  if (Null(version)) {
    version = default_version;
  }
  if (default_version == ECL_SYM(":DEFAULT",1237)) {
    if (Null(name) && Null(type)) {
      version = ECL_NIL;
    } else {
      version = ECL_SYM(":NEWEST",1303);
    }
  }
  /*
    In this implementation, version is not considered
  */
  defaults = ecl_make_pathname(host, device, directory, name,
                               type, version, tocase);
  return defaults;
}

/*
  ecl_namestring(x, flag) converts a pathname to a namestring.
  if flag is true, then the pathname may be coerced to the requirements
  of the filesystem, removing fields that have no meaning (such as
  version, or type, etc); otherwise, when it is not possible to
  produce a readable representation of the pathname, NIL is returned.
*/
cl_object
ecl_namestring(cl_object x, int flags)
{
  bool logical;
  cl_object l, y;
  cl_object buffer, host;
  bool truncate_if_unreadable = flags & ECL_NAMESTRING_TRUNCATE_IF_ERROR;

  x = cl_pathname(x);

  /* INV: Pathnames can only be created by mergin, parsing namestrings
   * or using ecl_make_pathname(). In all of these cases ECL will complain
   * at creation time if the pathname has wrong components.
   */
  buffer = ecl_make_string_output_stream(128, 1);
  logical = x->pathname.logical;
  host = x->pathname.host;
  if (logical) {
    if ((y = x->pathname.device) != ECL_SYM(":UNSPECIFIC",1347) &&
        truncate_if_unreadable)
      return ECL_NIL;
    if (host != ECL_NIL) {
      si_do_write_sequence(host, buffer, ecl_make_fixnum(0), ECL_NIL);
      writestr_stream(":", buffer);
    }
  } else {
    if ((y = x->pathname.device) != ECL_NIL) {
      si_do_write_sequence(y, buffer, ecl_make_fixnum(0), ECL_NIL);
      writestr_stream(":", buffer);
    }
    if (host != ECL_NIL) {
#if !defined(ECL_MS_WINDOWS_HOST)
      if (y == ECL_NIL) {
        writestr_stream("file:", buffer);
      }
#endif
      writestr_stream("//", buffer);
      si_do_write_sequence(host, buffer, ecl_make_fixnum(0), ECL_NIL);
    }
  }
  l = x->pathname.directory;
  if (ecl_endp(l))
    goto NO_DIRECTORY;
  y = ECL_CONS_CAR(l);
  if (y == ECL_SYM(":RELATIVE",1326)) {
    if (logical)
      ecl_write_char(';', buffer);
  } else {
    if (!logical)
      ecl_write_char(DIR_SEPARATOR, buffer);
  }
  l = ECL_CONS_CDR(l);
  loop_for_in(l) {
    y = ECL_CONS_CAR(l);
    if (y == ECL_SYM(":UP",1349)) {
      writestr_stream("..", buffer);
    } else if (y == ECL_SYM(":WILD",1355)) {
      writestr_stream("*", buffer);
    } else if (y == ECL_SYM(":WILD-INFERIORS",1356)) {
      writestr_stream("**", buffer);
    } else if (y != ECL_SYM(":BACK",1222)) {
      si_do_write_sequence(y, buffer, ecl_make_fixnum(0), ECL_NIL);
    } else {
      /* Directory :back has no namestring representation */
      return ECL_NIL;
    }
    ecl_write_char(logical? ';' : DIR_SEPARATOR, buffer);
  } end_loop_for_in;
 NO_DIRECTORY:
  if (ecl_file_position(buffer) == ecl_make_fixnum(0)) {
    if ((ecl_stringp(x->pathname.name) &&
         ecl_member_char(':', x->pathname.name)) ||
        (ecl_stringp(x->pathname.type) &&
         ecl_member_char(':', x->pathname.type)))
      writestr_stream(":", buffer);
  }
  y = x->pathname.name;
  if (y != ECL_NIL) {
    if (y == ECL_SYM(":WILD",1355)) {
      writestr_stream("*", buffer);
    } else {
      si_do_write_sequence(y, buffer, ecl_make_fixnum(0), ECL_NIL);
    }
  } else if (!logical && !Null(x->pathname.type)) {
    /* #P".txt" is :NAME = ".txt" :TYPE = NIL and
       hence :NAME = NIL and :TYPE != NIL does not have
       a printed representation */
    return ECL_NIL;
  }
  y = x->pathname.type;
  if (y == ECL_SYM(":UNSPECIFIC",1347)) {
    return ECL_NIL;
  } else if (y != ECL_NIL) {
    if (y == ECL_SYM(":WILD",1355)) {
      writestr_stream(".*", buffer);
    } else {
      writestr_stream(".", buffer);
      si_do_write_sequence(y, buffer, ecl_make_fixnum(0), ECL_NIL);
    }
  }
  y = x->pathname.version;
  if (logical) {
    if (y != ECL_NIL) {
      writestr_stream(".", buffer);
      if (y == ECL_SYM(":WILD",1355)) {
        writestr_stream("*", buffer);
      } else if (y == ECL_SYM(":NEWEST",1303)) {
        si_do_write_sequence(ecl_symbol_name(y), buffer,
                             ecl_make_fixnum(0), ECL_NIL);
      } else {
        /* Since the printer is not reentrant,
         * we cannot use cl_write and friends.
         */
        int n = ecl_fixnum(y), i;
        char b[ECL_FIXNUM_BITS / 2];
        for (i = 0; n; i++) {
          b[i] = n%10 + '0';
          n = n/10;
        }
        if (i == 0)
          b[i++] = '0';
        while (i--) {
          ecl_write_char(b[i], buffer);
        }
      }
    }
  } else if (!truncate_if_unreadable) {
    /* Namestrings of physical pathnames have restrictions... */
    if (Null(x->pathname.name) && Null(x->pathname.type)) {
      /* Directories cannot have a version number */
      if (y != ECL_NIL)
        return ECL_NIL;
    } else if (y != ECL_SYM(":NEWEST",1303)) {
      /* Filenames have an implicit version :newest */
      return ECL_NIL;
    }
  }
  buffer = cl_get_output_stream_string(buffer);
#ifdef ECL_UNICODE
  if (ECL_EXTENDED_STRING_P(buffer) &&
      (flags & ECL_NAMESTRING_FORCE_BASE_STRING)) {
    unlikely_if (!ecl_fits_in_base_string(buffer))
      FEerror("The filesystem does not accept filenames "
              "with extended characters: ~S",
              1, buffer);
    buffer = si_copy_to_simple_base_string(buffer);
  }
#endif
  return buffer;
}

cl_object
cl_namestring(cl_object x)
{
  {
#line 1152
	const cl_env_ptr the_env = ecl_process_env();
#line 1152
	#line 1152
	cl_object __value0 = ecl_namestring(x, ECL_NAMESTRING_TRUNCATE_IF_ERROR);
#line 1152
	the_env->nvalues = 1;
#line 1152
	the_env->values[0] = __value0;
#line 1152
	#line 1152
	return __value0;
#line 1152
}
;
}

#line 1158
cl_object cl_parse_namestring(cl_narg narg, cl_object thing, ...)
{
#line 1158

#line 1160
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1160
	cl_object host;
#line 1160
	cl_object defaults;
#line 1160
	static cl_object KEYS[3] = {(cl_object)(cl_symbols+1337), (cl_object)(cl_symbols+1247), (cl_object)(cl_symbols+1287)};
	cl_object start;
	cl_object end;
	cl_object junk_allowed;
#line 1160
	cl_object output;
#line 1160
	cl_object KEY_VARS[6];
#line 1160
	ecl_va_list ARGS;
	ecl_va_start(ARGS, thing, narg, 1);
#line 1160
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(631));
#line 1160
	if (narg > 1) {
#line 1160
		host = ecl_va_arg(ARGS);
#line 1160
	} else {
#line 1160
		host = ECL_NIL;
#line 1160
	}
#line 1160
	if (narg > 2) {
#line 1160
		defaults = ecl_va_arg(ARGS);
#line 1160
	} else {
#line 1160
		defaults = si_default_pathname_defaults();
#line 1160
	}
#line 1160
	cl_parse_key(ARGS, 3, KEYS, KEY_VARS, NULL, 0);
#line 1160
	if (KEY_VARS[3]==ECL_NIL) {
#line 1160
	  start = ecl_make_fixnum(0);
	} else {
#line 1160
	  start = KEY_VARS[0];
	}
#line 1160
	if (KEY_VARS[4]==ECL_NIL) {
#line 1160
	  end = ECL_NIL;
	} else {
#line 1160
	  end = KEY_VARS[1];
	}
#line 1160
	if (KEY_VARS[5]==ECL_NIL) {
#line 1160
	  junk_allowed = ECL_NIL;
	} else {
#line 1160
	  junk_allowed = KEY_VARS[2];
	}
#line 1160
	output = ECL_NIL;
#line 1160
  if (host != ECL_NIL) {
    host = cl_string(host);
  }
  if (!ecl_stringp(thing)) {
    output = cl_pathname(thing);
  } else {
    cl_object default_host = host;
    cl_index_pair p;
    cl_index ee;
    if (default_host == ECL_NIL && defaults != ECL_NIL) {
      defaults = cl_pathname(defaults);
      default_host = defaults->pathname.host;
    }
    p = ecl_vector_start_end(ecl_make_fixnum(/*PARSE-NAMESTRING*/631), thing, start, end);
    output = ecl_parse_namestring(thing, p.start, p.end, &ee, default_host);
    start = ecl_make_fixnum(ee);
    if (output == ECL_NIL || ee != p.end) {
      if (Null(junk_allowed)) {
        FEparse_error("Cannot parse the namestring ~S~%"
                      "from ~S to ~S.", ECL_NIL,
                      3, thing, start, end);
      }
      goto OUTPUT;
    }
  }
  if (host != ECL_NIL && !ecl_equal(output->pathname.host, host)) {
    FEerror("The pathname ~S does not contain the required host ~S.",
            2, thing, host);
  }
 OUTPUT:
  {
#line 1190
	#line 1190
	cl_object __value0 = output;
#line 1190
	cl_object __value1 = start;
#line 1190
	the_env->nvalues = 2;
#line 1190
	the_env->values[1] = __value1;
#line 1190
	the_env->values[0] = __value0;
#line 1190
	ecl_va_end(ARGS);
#line 1190
	return __value0;
#line 1190
}
;
}

#line 1195
cl_object cl_merge_pathnames(cl_narg narg, cl_object path, ...)
{
#line 1195

#line 1197
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1197
	cl_object defaults;
#line 1197
	cl_object default_version;
#line 1197
	va_list ARGS;
	va_start(ARGS, path);
#line 1197
	if (ecl_unlikely(narg < 1|| narg > 3)) FEwrong_num_arguments(ecl_make_fixnum(558));
#line 1197
	if (narg > 1) {
#line 1197
		defaults = va_arg(ARGS,cl_object);
#line 1197
	} else {
#line 1197
		defaults = si_default_pathname_defaults();
#line 1197
	}
#line 1197
	if (narg > 2) {
#line 1197
		default_version = va_arg(ARGS,cl_object);
#line 1197
	} else {
#line 1197
		default_version = ECL_SYM(":NEWEST",1303);
#line 1197
	}
#line 1197
  path = cl_pathname(path);
  defaults = cl_pathname(defaults);
  {
#line 1199
	#line 1199
	cl_object __value0 = ecl_merge_pathnames(path, defaults, default_version);
#line 1199
	the_env->nvalues = 1;
#line 1199
	the_env->values[0] = __value0;
#line 1199
	va_end(ARGS);
#line 1199
	return __value0;
#line 1199
}
;
}

#line 1207
cl_object cl_make_pathname(cl_narg narg, ...)
{
#line 1207

#line 1209
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1209
	static cl_object KEYS[8] = {(cl_object)(cl_symbols+1267), (cl_object)(cl_symbols+1239), (cl_object)(cl_symbols+1241), (cl_object)(cl_symbols+1300), (cl_object)(cl_symbols+1346), (cl_object)(cl_symbols+1354), (cl_object)(cl_symbols+1227), (cl_object)(cl_symbols+1238)};
	cl_object host;
	bool hostp;
	cl_object device;
	bool devicep;
	cl_object directory;
	bool directoryp;
	cl_object name;
	bool namep;
	cl_object type;
	bool typep;
	cl_object version;
	bool versionp;
	cl_object scase;
	cl_object defaults;
#line 1209
	cl_object x;
#line 1209
	cl_object KEY_VARS[16];
#line 1209
	ecl_va_list ARGS;
	ecl_va_start(ARGS, narg, narg, 0);
#line 1209
	if (ecl_unlikely(narg < 0)) FEwrong_num_arguments(ecl_make_fixnum(533));
#line 1209
	cl_parse_key(ARGS, 8, KEYS, KEY_VARS, NULL, 0);
#line 1209
	if (KEY_VARS[8]==ECL_NIL) {
#line 1209
	  host = ECL_NIL;
#line 1209
	  hostp = FALSE;
	} else {
#line 1209
	  hostp = TRUE;
#line 1209
	  host = KEY_VARS[0];
	}
#line 1209
	if (KEY_VARS[9]==ECL_NIL) {
#line 1209
	  device = ECL_NIL;
#line 1209
	  devicep = FALSE;
	} else {
#line 1209
	  devicep = TRUE;
#line 1209
	  device = KEY_VARS[1];
	}
#line 1209
	if (KEY_VARS[10]==ECL_NIL) {
#line 1209
	  directory = ECL_NIL;
#line 1209
	  directoryp = FALSE;
	} else {
#line 1209
	  directoryp = TRUE;
#line 1209
	  directory = KEY_VARS[2];
	}
#line 1209
	if (KEY_VARS[11]==ECL_NIL) {
#line 1209
	  name = ECL_NIL;
#line 1209
	  namep = FALSE;
	} else {
#line 1209
	  namep = TRUE;
#line 1209
	  name = KEY_VARS[3];
	}
#line 1209
	if (KEY_VARS[12]==ECL_NIL) {
#line 1209
	  type = ECL_NIL;
#line 1209
	  typep = FALSE;
	} else {
#line 1209
	  typep = TRUE;
#line 1209
	  type = KEY_VARS[4];
	}
#line 1209
	if (KEY_VARS[13]==ECL_NIL) {
#line 1209
	  version = ECL_NIL;
#line 1209
	  versionp = FALSE;
	} else {
#line 1209
	  versionp = TRUE;
#line 1209
	  version = KEY_VARS[5];
	}
#line 1209
	if (KEY_VARS[14]==ECL_NIL) {
#line 1209
	  scase = ECL_SYM(":LOCAL",1294);
	} else {
#line 1209
	  scase = KEY_VARS[6];
	}
#line 1209
	if (KEY_VARS[15]==ECL_NIL) {
#line 1209
	  defaults = ECL_NIL;
	} else {
#line 1209
	  defaults = KEY_VARS[7];
	}
#line 1209
	x = ECL_NIL;
#line 1209
  if (Null(defaults)) {
    defaults = si_default_pathname_defaults();
    defaults = ecl_make_pathname(defaults->pathname.host,
                                 ECL_NIL, ECL_NIL, ECL_NIL, ECL_NIL, ECL_NIL,
                                 ECL_SYM(":LOCAL",1294));
  } else {
    defaults = cl_pathname(defaults);
  }
  if (!hostp) host = defaults->pathname.host;
  x = ecl_make_pathname(host, device, directory, name, type, version, scase);
  if (!devicep) x->pathname.device = defaults->pathname.device;
  if (!directoryp) x->pathname.directory = defaults->pathname.directory;
  if (!namep) x->pathname.name = defaults->pathname.name;
  if (!typep) x->pathname.type = defaults->pathname.type;
  if (!versionp) x->pathname.version = defaults->pathname.version;

  {
#line 1225
	#line 1225
	cl_object __value0 = x;
#line 1225
	the_env->nvalues = 1;
#line 1225
	the_env->values[0] = __value0;
#line 1225
	ecl_va_end(ARGS);
#line 1225
	return __value0;
#line 1225
}
;
}

cl_object
cl_pathnamep(cl_object pname)
{
  {
#line 1231
	const cl_env_ptr the_env = ecl_process_env();
#line 1231
	#line 1231
	cl_object __value0 = (ECL_PATHNAMEP(pname) ? ECL_T : ECL_NIL);
#line 1231
	the_env->nvalues = 1;
#line 1231
	the_env->values[0] = __value0;
#line 1231
	#line 1231
	return __value0;
#line 1231
}
;
}

cl_object
si_logical_pathname_p(cl_object pname)
{
  {
#line 1238
	const cl_env_ptr the_env = ecl_process_env();
#line 1238
	#line 1238
	cl_object __value0 = ((ECL_PATHNAMEP(pname) && pname->pathname.logical)?
            ECL_T : ECL_NIL);
#line 1238
	the_env->nvalues = 1;
#line 1238
	the_env->values[0] = __value0;
#line 1238
	#line 1238
	return __value0;
#line 1238
}
;
}

#line 1241
cl_object cl_pathname_host(cl_narg narg, cl_object pname, ...)
{
#line 1241

#line 1243
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1243
	static cl_object KEYS[1] = {(cl_object)(cl_symbols+1227)};
	cl_object scase;
#line 1243
	cl_object KEY_VARS[2];
#line 1243
	ecl_va_list ARGS;
	ecl_va_start(ARGS, pname, narg, 1);
#line 1243
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(635));
#line 1243
	cl_parse_key(ARGS, 1, KEYS, KEY_VARS, NULL, 0);
#line 1243
	if (KEY_VARS[1]==ECL_NIL) {
#line 1243
	  scase = ECL_SYM(":LOCAL",1294);
	} else {
#line 1243
	  scase = KEY_VARS[0];
	}
#line 1243
  pname = cl_pathname(pname);
  {
#line 1246
	#line 1246
	cl_object __value0 = translate_component_case(pname->pathname.host,
                                    normalize_case(pname, ECL_SYM(":LOCAL",1294)),
                                    normalize_case(pname, scase));
#line 1246
	the_env->nvalues = 1;
#line 1246
	the_env->values[0] = __value0;
#line 1246
	ecl_va_end(ARGS);
#line 1246
	return __value0;
#line 1246
}
;
}

#line 1249
cl_object cl_pathname_device(cl_narg narg, cl_object pname, ...)
{
#line 1249

#line 1251
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1251
	static cl_object KEYS[1] = {(cl_object)(cl_symbols+1227)};
	cl_object scase;
#line 1251
	cl_object KEY_VARS[2];
#line 1251
	ecl_va_list ARGS;
	ecl_va_start(ARGS, pname, narg, 1);
#line 1251
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(633));
#line 1251
	cl_parse_key(ARGS, 1, KEYS, KEY_VARS, NULL, 0);
#line 1251
	if (KEY_VARS[1]==ECL_NIL) {
#line 1251
	  scase = ECL_SYM(":LOCAL",1294);
	} else {
#line 1251
	  scase = KEY_VARS[0];
	}
#line 1251
  pname = cl_pathname(pname);
  {
#line 1254
	#line 1254
	cl_object __value0 = translate_component_case(pname->pathname.device,
                                    normalize_case(pname, ECL_SYM(":LOCAL",1294)),
                                    normalize_case(pname, scase));
#line 1254
	the_env->nvalues = 1;
#line 1254
	the_env->values[0] = __value0;
#line 1254
	ecl_va_end(ARGS);
#line 1254
	return __value0;
#line 1254
}
;
}

#line 1257
cl_object cl_pathname_directory(cl_narg narg, cl_object pname, ...)
{
#line 1257

#line 1259
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1259
	static cl_object KEYS[1] = {(cl_object)(cl_symbols+1227)};
	cl_object scase;
#line 1259
	cl_object KEY_VARS[2];
#line 1259
	ecl_va_list ARGS;
	ecl_va_start(ARGS, pname, narg, 1);
#line 1259
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(634));
#line 1259
	cl_parse_key(ARGS, 1, KEYS, KEY_VARS, NULL, 0);
#line 1259
	if (KEY_VARS[1]==ECL_NIL) {
#line 1259
	  scase = ECL_SYM(":LOCAL",1294);
	} else {
#line 1259
	  scase = KEY_VARS[0];
	}
#line 1259
  pname = cl_pathname(pname);
  {
#line 1262
	#line 1262
	cl_object __value0 = translate_list_case(pname->pathname.directory,
                               normalize_case(pname, ECL_SYM(":LOCAL",1294)),
                               normalize_case(pname, scase));
#line 1262
	the_env->nvalues = 1;
#line 1262
	the_env->values[0] = __value0;
#line 1262
	ecl_va_end(ARGS);
#line 1262
	return __value0;
#line 1262
}
;
}

#line 1265
cl_object cl_pathname_name(cl_narg narg, cl_object pname, ...)
{
#line 1265

#line 1267
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1267
	static cl_object KEYS[1] = {(cl_object)(cl_symbols+1227)};
	cl_object scase;
#line 1267
	cl_object KEY_VARS[2];
#line 1267
	ecl_va_list ARGS;
	ecl_va_start(ARGS, pname, narg, 1);
#line 1267
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(637));
#line 1267
	cl_parse_key(ARGS, 1, KEYS, KEY_VARS, NULL, 0);
#line 1267
	if (KEY_VARS[1]==ECL_NIL) {
#line 1267
	  scase = ECL_SYM(":LOCAL",1294);
	} else {
#line 1267
	  scase = KEY_VARS[0];
	}
#line 1267
  pname = cl_pathname(pname);
  {
#line 1270
	#line 1270
	cl_object __value0 = translate_component_case(pname->pathname.name,
                                    normalize_case(pname, ECL_SYM(":LOCAL",1294)),
                                    normalize_case(pname, scase));
#line 1270
	the_env->nvalues = 1;
#line 1270
	the_env->values[0] = __value0;
#line 1270
	ecl_va_end(ARGS);
#line 1270
	return __value0;
#line 1270
}
;
}

#line 1273
cl_object cl_pathname_type(cl_narg narg, cl_object pname, ...)
{
#line 1273

#line 1275
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1275
	static cl_object KEYS[1] = {(cl_object)(cl_symbols+1227)};
	cl_object scase;
#line 1275
	cl_object KEY_VARS[2];
#line 1275
	ecl_va_list ARGS;
	ecl_va_start(ARGS, pname, narg, 1);
#line 1275
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(638));
#line 1275
	cl_parse_key(ARGS, 1, KEYS, KEY_VARS, NULL, 0);
#line 1275
	if (KEY_VARS[1]==ECL_NIL) {
#line 1275
	  scase = ECL_SYM(":LOCAL",1294);
	} else {
#line 1275
	  scase = KEY_VARS[0];
	}
#line 1275
  pname = cl_pathname(pname);
  {
#line 1278
	#line 1278
	cl_object __value0 = translate_component_case(pname->pathname.type,
                                    normalize_case(pname, ECL_SYM(":LOCAL",1294)),
                                    normalize_case(pname, scase));
#line 1278
	the_env->nvalues = 1;
#line 1278
	the_env->values[0] = __value0;
#line 1278
	ecl_va_end(ARGS);
#line 1278
	return __value0;
#line 1278
}
;
}

cl_object
cl_pathname_version(cl_object pname)
{
  pname = cl_pathname(pname);
  {
#line 1285
	const cl_env_ptr the_env = ecl_process_env();
#line 1285
	#line 1285
	cl_object __value0 = pname->pathname.version;
#line 1285
	the_env->nvalues = 1;
#line 1285
	the_env->values[0] = __value0;
#line 1285
	#line 1285
	return __value0;
#line 1285
}
;
}

cl_object
cl_file_namestring(cl_object pname)
{
  pname = cl_pathname(pname);
  {
#line 1297
	const cl_env_ptr the_env = ecl_process_env();
#line 1297
	#line 1297
	cl_object __value0 = ecl_namestring(ecl_make_pathname(ECL_NIL, ECL_NIL, ECL_NIL,
                                            pname->pathname.name,
                                            pname->pathname.type,
                                            pname->pathname.version,
                                            ECL_SYM(":LOCAL",1294)),
                          ECL_NAMESTRING_TRUNCATE_IF_ERROR);
#line 1297
	the_env->nvalues = 1;
#line 1297
	the_env->values[0] = __value0;
#line 1297
	#line 1297
	return __value0;
#line 1297
}
;
}

cl_object
cl_directory_namestring(cl_object pname)
{
  pname = cl_pathname(pname);
  {
#line 1308
	const cl_env_ptr the_env = ecl_process_env();
#line 1308
	#line 1308
	cl_object __value0 = ecl_namestring(ecl_make_pathname(ECL_NIL, ECL_NIL,
                                            pname->pathname.directory,
                                            ECL_NIL, ECL_NIL, ECL_NIL,
                                            ECL_SYM(":LOCAL",1294)),
                          ECL_NAMESTRING_TRUNCATE_IF_ERROR);
#line 1308
	the_env->nvalues = 1;
#line 1308
	the_env->values[0] = __value0;
#line 1308
	#line 1308
	return __value0;
#line 1308
}
;
}

cl_object
cl_host_namestring(cl_object pname)
{
  pname = cl_pathname(pname);
  pname = pname->pathname.host;
  if (Null(pname) || pname == ECL_SYM(":WILD",1355))
    pname = cl_core.null_string;
  {
#line 1318
	const cl_env_ptr the_env = ecl_process_env();
#line 1318
	#line 1318
	cl_object __value0 = pname;
#line 1318
	the_env->nvalues = 1;
#line 1318
	the_env->values[0] = __value0;
#line 1318
	#line 1318
	return __value0;
#line 1318
}
;
}

#define EN_MATCH(p1,p2,el) (ecl_equalp(p1->pathname.el, p2->pathname.el)? ECL_NIL : p1->pathname.el)

#line 1324
cl_object cl_enough_namestring(cl_narg narg, cl_object path, ...)
{
#line 1324

  cl_object newpath, pathdir, defaultdir, fname;
#line 1327
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1327
	cl_object defaults;
#line 1327
	va_list ARGS;
	va_start(ARGS, path);
#line 1327
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(333));
#line 1327
	if (narg > 1) {
#line 1327
		defaults = va_arg(ARGS,cl_object);
#line 1327
	} else {
#line 1327
		defaults = si_default_pathname_defaults();
#line 1327
	}
#line 1327
  defaults = cl_pathname(defaults);
  path = cl_pathname(path);
  pathdir = path->pathname.directory;
  defaultdir = defaults->pathname.directory;
  if (Null(pathdir)) {
    pathdir = ecl_list1(ECL_SYM(":RELATIVE",1326));
  } else if (Null(defaultdir)) {
    /* The defaults pathname does not have a directory. */
  } else if (ECL_CONS_CAR(pathdir) == ECL_SYM(":RELATIVE",1326)) {
    /* The pathname is relative to the default one one, so we just output the
       original one */
  } else {
    /* The new pathname is an absolute one. We compare it with the defaults
       and if they have some common elements, we just output the remaining ones. */
    cl_object dir_begin = funcall(5, ECL_SYM("MISMATCH",561), pathdir, defaultdir,
                                  ECL_SYM(":TEST",1343), ECL_SYM("EQUAL",337));
    if (dir_begin == ECL_NIL) {
      pathdir = ECL_NIL;
    } else if (dir_begin == cl_length(defaultdir)) {
      pathdir = funcall(3, ECL_SYM("SUBSEQ",831), pathdir, dir_begin);
      pathdir = CONS(ECL_SYM(":RELATIVE",1326), pathdir);
    }
  }
  fname = EN_MATCH(path, defaults, name);
  if (fname == ECL_NIL) fname = path->pathname.name;
  /* Create a path with all elements that do not match the default */
  newpath = ecl_make_pathname(EN_MATCH(path, defaults, host),
                              EN_MATCH(path, defaults, device),
                              pathdir, fname,
                              EN_MATCH(path, defaults, type),
                              EN_MATCH(path, defaults, version),
                              ECL_SYM(":LOCAL",1294));
  newpath->pathname.logical = path->pathname.logical;
  {
#line 1360
	#line 1360
	cl_object __value0 = ecl_namestring(newpath, ECL_NAMESTRING_TRUNCATE_IF_ERROR);
#line 1360
	the_env->nvalues = 1;
#line 1360
	the_env->values[0] = __value0;
#line 1360
	va_end(ARGS);
#line 1360
	return __value0;
#line 1360
}
;
}
#undef EN_MATCH

/* --------------- PATHNAME MATCHING ------------------ */

bool
ecl_wild_string_p(cl_object item)
{
  if (ECL_STRINGP(item)) {
    cl_index i, l = ecl_length(item);
    for (i = 0; i < l; i++) {
      ecl_character c = ecl_char(item, i);
      if (c == '\\' || c == '*' || c == '?')
        return 1;
    }
  }
  return 0;
}

/*
 * Take two C strings and check if the first (s) one matches against
 * the pattern given by the second one (p). The pattern is that of a
 * Unix shell except for brackets and curly braces
 */
bool
ecl_string_match(cl_object s, cl_index j, cl_index ls,
                 cl_object p, cl_index i, cl_index lp)
{
  while (i < lp) {
    cl_index cp = ecl_char(p, i);
    switch (cp) {
    case '*': {
      /* An asterisk in the pattern matches any
       * number of characters. We try the shortest
       * sequence that matches. */
      cl_index cn = 0, next;
      for (next = i+1;
           next < lp && ((cn = ecl_char(p, next)) == '*');
           next++)
        ;
      if (next == lp) {
        return TRUE;
      }
      while (j < ls) {
        if (ecl_string_match(s, j, ls, p, next, lp)) {
          return TRUE;
        }
        j++;
      }
      return FALSE;
      break;
    }
    case '?':
      /* Match any character */
      if (j >= ls) return FALSE;
      i++; j++;
      break;
    case '\\':
      /* Interpret a pattern character literally.
         Trailing slash is interpreted as a slash. */
      if (++i >= lp) i--;
    default:
      if ((j >= ls) || (cp != ecl_char(s, j))) {
        /* Either there are no characters left in "s"
         * or the next character does not match. */
        return FALSE;
      }
      i++; j++;
    }
  }
  /* At the end all characters should have been matched */
  return (j >= ls);
}

static bool
path_item_match(cl_object a, cl_object mask) {
  if (mask == ECL_SYM(":WILD",1355))
    return TRUE;
  /* If a component in the tested path is a wildcard field, this
     can only be matched by the same wildcard field in the mask */
  if (!ecl_stringp(a) || mask == ECL_NIL)
    return (a == mask);
  if (!ecl_stringp(mask))
    FEerror("~S is not supported as mask for pathname-match-p", 1, mask);
  return ecl_string_match(a, 0, ecl_length(a),
                          mask, 0, ecl_length(mask));
}

static bool
path_list_match(cl_object a, cl_object mask) {
  cl_object item_mask;
  while (!ecl_endp(mask)) {
    item_mask = CAR(mask);
    mask = CDR(mask);
    if (item_mask == ECL_SYM(":WILD-INFERIORS",1356)) {
      if (ecl_endp(mask))
        return TRUE;
      while (!ecl_endp(a)) {
        if (path_list_match(a, mask))
          return TRUE;
        a = CDR(a);
      }
      return FALSE;
    } else if (ecl_endp(a)) {
      /* A NIL directory should match against :absolute
         or :relative, in order to perform suitable translations. */
      if (item_mask != ECL_SYM(":ABSOLUTE",1218) && item_mask != ECL_SYM(":RELATIVE",1326))
        return FALSE;
    } else if (!path_item_match(CAR(a), item_mask)) {
      return FALSE;
    } else {
      a = CDR(a);
    }
  }
  if (!ecl_endp(a))
    return FALSE;
  return TRUE;
}

cl_object
cl_pathname_match_p(cl_object path, cl_object mask)
{
  cl_object output = ECL_NIL;
  path = cl_pathname(path);
  mask = cl_pathname(mask);
  if (path->pathname.logical != mask->pathname.logical)
    goto OUTPUT;
#if 0
  /* INV: This was checked in the calling routine */
  if (!path_item_match(path->pathname.host, mask->pathname.host))
    goto OUTPUT;
#endif
  /* Missing components default to :WILD */
  if (!Null(mask->pathname.directory) &&
      !path_list_match(path->pathname.directory, mask->pathname.directory))
    goto OUTPUT;
  if (!path_item_match(path->pathname.name, mask->pathname.name))
    goto OUTPUT;
  if (!path_item_match(path->pathname.type, mask->pathname.type))
    goto OUTPUT;
  if (Null(mask->pathname.version) ||
      path_item_match(path->pathname.version, mask->pathname.version))
    output = ECL_T;
 OUTPUT:
  {
#line 1505
	const cl_env_ptr the_env = ecl_process_env();
#line 1505
	#line 1505
	cl_object __value0 = output;
#line 1505
	the_env->nvalues = 1;
#line 1505
	the_env->values[0] = __value0;
#line 1505
	#line 1505
	return __value0;
#line 1505
}
;
}

/* --------------- PATHNAME TRANSLATIONS ------------------ */

static cl_object
coerce_to_from_pathname(cl_object x, cl_object host)
{
  switch (ecl_t_of(x)) {
#ifdef ECL_UNICODE
  case t_string:
#endif
  case t_base_string:
    x = cl_parse_namestring(2, x, host);
  case t_pathname:
    if (x->pathname.logical)
      return x;
  default:
    FEerror("~S is not a valid from-pathname translation", 1, x);
  }
}

#line 1527
cl_object si_pathname_translations(cl_narg narg, cl_object host, ...)
{
#line 1527

  cl_index parsed_len, len;
  cl_object pair, l;
#line 1531
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1531
	cl_object set;
#line 1531
	va_list ARGS;
	va_start(ARGS, host);
#line 1531
	if (ecl_unlikely(narg < 1|| narg > 2)) FEwrong_num_arguments(ecl_make_fixnum(1133));
#line 1531
	if (narg > 1) {
#line 1531
		set = va_arg(ARGS,cl_object);
#line 1531
	} else {
#line 1531
		set = OBJNULL;
#line 1531
	}
#line 1531
  /* Check that host is a valid host name */
  if (ecl_unlikely(!ECL_STRINGP(host)))
  FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::PATHNAME-TRANSLATIONS*/1133), 1, host, ecl_make_fixnum(/*STRING*/807));
  host = cl_string_upcase(1, host);
  len = ecl_length(host);
  parse_word(host, is_null, WORD_LOGICAL, 0, len, &parsed_len);
  if (parsed_len < len) {
    FEerror("Wrong host syntax ~S", 1, host);
  }
  /* Find its translation list */
  pair = cl_assoc(4, host, cl_core.pathname_translations, ECL_SYM(":TEST",1343), ECL_SYM("STRING-EQUAL",810));
  if (set == OBJNULL) {
    {
#line 1543
	#line 1543
	cl_object __value0 = ((pair == ECL_NIL)? ECL_NIL : CADR(pair));
#line 1543
	the_env->nvalues = 1;
#line 1543
	the_env->values[0] = __value0;
#line 1543
	va_end(ARGS);
#line 1543
	return __value0;
#line 1543
}
;
  }
  /* Set the new translation list */
  if (ecl_unlikely(!LISTP(set))) {
    FEwrong_type_nth_arg(ecl_make_fixnum(/*SI::PATHNAME-TRANSLATIONS*/1133), 2, set, ecl_make_fixnum(/*LIST*/483));
  }
  if (pair == ECL_NIL) {
    pair = CONS(host, CONS(ECL_NIL, ECL_NIL));
    cl_core.pathname_translations = CONS(pair, cl_core.pathname_translations);
  }
  for (l = set, set = ECL_NIL; !ecl_endp(l); l = CDR(l)) {
    cl_object item = CAR(l);
    cl_object from = coerce_to_from_pathname(cl_car(item), host);
    cl_object to = cl_pathname(cl_cadr(item));
    set = CONS(CONS(from, CONS(to, ECL_NIL)), set);
  }
  set = cl_nreverse(set);
  ECL_RPLACA(ECL_CONS_CDR(pair), set);
  {
#line 1561
	#line 1561
	cl_object __value0 = set;
#line 1561
	the_env->nvalues = 1;
#line 1561
	the_env->values[0] = __value0;
#line 1561
	va_end(ARGS);
#line 1561
	return __value0;
#line 1561
}
;
}

static cl_object
find_wilds(cl_object l, cl_object source, cl_object match)
{
  cl_index i, j, k, ls, lm;

  if (match == ECL_SYM(":WILD",1355))
    return ecl_list1(source);
  if (!ecl_stringp(match) || !ecl_stringp(source)) {
    if (match != source)
      return ECL_SYM(":ERROR",1251);
    return l;
  }
  ls = ecl_length(source);
  lm = ecl_length(match);
  for(i = j = 0; i < ls && j < lm; ) {
    cl_index pattern_char = ecl_char(match,j);
    if (pattern_char == '*') {
      for (j++, k = i;
           k < ls && ecl_char(source,k) != pattern_char;
           k++)
        ;
      l = CONS(make_one(source, i, k), l);
      i = k;
      continue;
    }
    if (ecl_char(source,i) != pattern_char)
      return ECL_SYM(":ERROR",1251);
    i++, j++;
  }
  if (i < ls || j < lm)
    return ECL_SYM(":ERROR",1251);
  return l;
}

static cl_object
find_list_wilds(cl_object a, cl_object mask)
{
  cl_object l = ECL_NIL, l2;

  while (!ecl_endp(mask)) {
    cl_object item_mask = CAR(mask);
    mask = CDR(mask);
    if (item_mask == ECL_SYM(":WILD-INFERIORS",1356)) {
      l2 = ECL_NIL;
      while (!path_list_match(a, mask)) {
        if (ecl_endp(a))
          return ECL_SYM(":ERROR",1251);
        l2 = CONS(CAR(a),l2);
        a = CDR(a);
      }
      l = CONS(l2, l);
    } else if (ecl_endp(a)) {
      /* A NIL directory should match against :absolute
         or :relative, in order to perform suitable translations. */
      if (item_mask != ECL_SYM(":ABSOLUTE",1218) && item_mask != ECL_SYM(":RELATIVE",1326))
        return ECL_SYM(":ERROR",1251);
    } else {
      l2 = find_wilds(l, CAR(a), item_mask);
      if (l == ECL_SYM(":ERROR",1251))
        return ECL_SYM(":ERROR",1251);
      if (!Null(l2))
        l = CONS(l2, l);
      a = CDR(a);
    }
  }
  return cl_nreverse(l);
}

static cl_object
copy_wildcards(cl_object *wilds_list, cl_object pattern)
{
  cl_index i, l, j;
  bool new_string;
  cl_object wilds = *wilds_list, token;

  if (pattern == ECL_SYM(":WILD",1355)) {
    if (ecl_endp(wilds))
      return ECL_SYM(":ERROR",1251);
    pattern = CAR(wilds);
    *wilds_list = CDR(wilds);
    return pattern;
  }
  if (pattern == ECL_SYM(":WILD-INFERIORS",1356))
    return ECL_SYM(":ERROR",1251);
  if (!ecl_stringp(pattern))
    return pattern;

  new_string = FALSE;
  l = ecl_length(pattern);
  token = si_get_buffer_string();
  for (j = i = 0; i < l; ) {
    cl_index c = ecl_char(pattern, i);
    if (c != '*') {
      i++;
      continue;
    }
    if (i != j) {
      push_substring(token, pattern, j, i);
    }
    new_string = TRUE;
    if (ecl_endp(wilds)) {
      return ECL_SYM(":ERROR",1251);
    }
    push_string(token, CAR(wilds));
    wilds = CDR(wilds);
    j = i++;
  }
  /* Only create a new string when needed */
  if (new_string) {
    pattern = cl_copy_seq(token);
  }
  si_put_buffer_string(token);
  *wilds_list = wilds;
  return pattern;
}

static cl_object
copy_list_wildcards(cl_object *wilds, cl_object to)
{
  cl_object l = ECL_NIL;

  while (!ecl_endp(to)) {
    cl_object d, mask = CAR(to);
    if (mask == ECL_SYM(":WILD-INFERIORS",1356)) {
      cl_object list = *wilds;
      if (ecl_endp(list))
        return ECL_SYM(":ERROR",1251);
      else {
        cl_object dirlist = CAR(list);
        if (CONSP(dirlist))
          l = ecl_append(CAR(list), l);
        else if (!Null(CAR(list)))
          return ECL_SYM(":ERROR",1251);
      }
      *wilds = CDR(list);
    } else {
      d = copy_wildcards(wilds, CAR(to));
      if (d == ECL_SYM(":ERROR",1251))
        return d;
      l = CONS(d, l);
    }
    to = CDR(to);
  }
  if (CONSP(l))
    l = cl_nreverse(l);
  return l;
}

#line 1712
cl_object cl_translate_pathname(cl_narg narg, cl_object source, cl_object from, cl_object to, ...)
{
#line 1712

  cl_object wilds, d;
  cl_object host, device, directory, name, type, version;
  cl_object fromcase, tocase;
#line 1717
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1717
	cl_object *KEYS = NULL;
#line 1717
	cl_object *KEY_VARS = NULL;
#line 1717
	ecl_va_list ARGS;
	ecl_va_start(ARGS, to, narg, 3);
#line 1717
	if (ecl_unlikely(narg < 3)) FEwrong_num_arguments(ecl_make_fixnum(864));
#line 1717
	cl_parse_key(ARGS, 0, KEYS, KEY_VARS, NULL, 0);
#line 1717
  /* The pathname from which we get the data */
  source = cl_pathname(source);
  /* The mask applied to the source pathname */
  from = cl_pathname(from);
  fromcase = normalize_case(from, ECL_SYM(":LOCAL",1294));
  /* The pattern which says what the output should look like */
  to = cl_pathname(to);
  tocase = normalize_case(to, ECL_SYM(":LOCAL",1294));

  if (source->pathname.logical != from->pathname.logical)
    goto error;

  /* Match host names */
  if (cl_string_equal(2, source->pathname.host, from->pathname.host) == ECL_NIL)
    goto error;
  host = to->pathname.host;

  /* Logical pathnames do not have devices. We just overwrite it. */
  device = to->pathname.device;

  /* Match directories */
  wilds = find_list_wilds(source->pathname.directory,
                          from->pathname.directory);
  if (wilds == ECL_SYM(":ERROR",1251)) goto error;
  if (Null(to->pathname.directory)) {
    /* Missing components are replaced */
    d = translate_list_case(source->pathname.directory, fromcase, tocase);
  } else {
    wilds = translate_list_case(wilds, fromcase, tocase);
    d = copy_list_wildcards(&wilds, to->pathname.directory);
    if (d == ECL_SYM(":ERROR",1251)) goto error;
    if (wilds != ECL_NIL) goto error2;
  }
  directory = d;

  /* Match name */
  wilds = find_wilds(ECL_NIL, source->pathname.name, from->pathname.name);
  if (wilds == ECL_SYM(":ERROR",1251)) goto error2;
  if (Null(to->pathname.name)) {
    d = translate_component_case(source->pathname.name, fromcase, tocase);
  } else {
    wilds = translate_list_case(wilds, fromcase, tocase);
    d = copy_wildcards(&wilds, to->pathname.name);
    if (d == ECL_SYM(":ERROR",1251)) goto error;
    if (wilds != ECL_NIL) goto error2;
  }
  name = d;

  /* Match type */
  wilds = find_wilds(ECL_NIL, source->pathname.type, from->pathname.type);
  if (wilds == ECL_SYM(":ERROR",1251)) goto error2;
  if (Null(to->pathname.type)) {
    d = translate_component_case(source->pathname.type, fromcase, tocase);
  } else {
    wilds = translate_list_case(wilds, fromcase, tocase);
    d = copy_wildcards(&wilds, to->pathname.type);
    if (d == ECL_SYM(":ERROR",1251)) goto error;
    if (wilds != ECL_NIL) goto error2;
  }
  type = d;

  /* Match version */
  version = to->pathname.version;
  if (from->pathname.version == ECL_SYM(":WILD",1355)) {
    if (to->pathname.version == ECL_SYM(":WILD",1355)) {
      version = source->pathname.version;
    }
  }
  {
#line 1786
	#line 1786
	cl_object __value0 = ecl_make_pathname(host, device, directory, name, type,
                             version, tocase);
#line 1786
	the_env->nvalues = 1;
#line 1786
	the_env->values[0] = __value0;
#line 1786
	ecl_va_end(ARGS);
#line 1786
	return __value0;
#line 1786
}
;
 error:
  FEerror("~S is not a specialization of path ~S", 2, source, from);
 error2:
  FEerror("Number of wildcards in ~S do not match  ~S", 2, from, to);
}

#line 1793
cl_object cl_translate_logical_pathname(cl_narg narg, cl_object source, ...)
{
#line 1793

  cl_object l, pair;
  cl_object pathname;
#line 1797
#if defined(__clang__) || defined(__GNUC__)
	__attribute__((unused)) const cl_env_ptr the_env = ecl_process_env();
#else
	const cl_env_ptr the_env = ecl_process_env();
#endif
#line 1797
	cl_object *KEYS = NULL;
#line 1797
	cl_object *KEY_VARS = NULL;
#line 1797
	ecl_va_list ARGS;
	ecl_va_start(ARGS, source, narg, 1);
#line 1797
	if (ecl_unlikely(narg < 1)) FEwrong_num_arguments(ecl_make_fixnum(863));
#line 1797
	cl_parse_key(ARGS, 0, KEYS, KEY_VARS, NULL, 0);
#line 1797
  pathname = cl_pathname(source);
 begin:
  if (!pathname->pathname.logical) {
    {
#line 1800
	#line 1800
	cl_object __value0 = pathname;
#line 1800
	the_env->nvalues = 1;
#line 1800
	the_env->values[0] = __value0;
#line 1800
	ecl_va_end(ARGS);
#line 1800
	return __value0;
#line 1800
}
;
  }
  l = si_pathname_translations(1, pathname->pathname.host);
  for(; !ecl_endp(l); l = CDR(l)) {
    pair = CAR(l);
    if (!Null(cl_pathname_match_p(pathname, CAR(pair)))) {
      pathname = cl_translate_pathname(3, pathname, CAR(pair), CADR(pair));
      goto begin;
    }
  }
  FEerror("~S admits no logical pathname translations", 1, pathname);
}

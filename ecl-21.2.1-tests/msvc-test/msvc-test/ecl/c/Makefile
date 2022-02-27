# -*- Mode: Makefile; indent-tabs-mode: nil -*-
# vim: set filetype=makefile tabstop=8 shiftwidth=4 expandtab:

#
#			Makefile for ECL core library
#
top_srcdir= /c/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/src
srcdir	= /c/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/src/c
VPATH	= /c/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/src/c

# Programs used by "make":
#
CC	= gcc
TRUE_CC = $(CC)
CFLAGS = -Wall -Wno-missing-braces -I. -IC:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build -I$(srcdir)    \
-I../ecl/ -DECL_BUILD -DECL_API -DECL_NO_LEGACY     -g -O2  -D_THREAD_SAFE     \
-Dmingw32 -c

# The following flags could be added and used by GCC
#  -Wall -W -Wfloat-equal -Wundef -Wendif-labels -Wpointer-arith -Wcast-align \
#  -Wwrite-strings -Wconversion -Wsign-compare -Wmissing-prototypes \
#  -Wredundant-decls -Wunreachable-code -Winline

SHELL	= /bin/sh
RM	= rm -f
EXE	= .exe
DPP	= ./dpp$(EXE)
RANLIB	= ranlib
AR	= ar

# Data for installation
#
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
prefix=/mingw32
exec_prefix=${prefix}
libdir=${exec_prefix}/lib
includedir=${prefix}/include

# Files

HDIR	= ../ecl
HFILES = $(HDIR)/config.h $(HDIR)/ecl.h $(HDIR)/ecl-cmp.h               \
	$(HDIR)/object.h $(HDIR)/cs.h $(HDIR)/stacks.h                  \
	$(HDIR)/external.h $(HDIR)/cons.h $(HDIR)/legacy.h              \
	$(HDIR)/number.h $(HDIR)/page.h
CLOS_OBJS = clos/cache.o clos/accessor.o clos/instance.o clos/gfun.o
OBJS = main.o symbol.o package.o cons.o list.o apply.o eval.o           \
	interpreter.o compiler.o disassembler.o $(CLOS_OBJS)            \
	reference.o character.o file.o read.o print.o error.o           \
	string.o cfun.o reader/parse_integer.o reader/parse_number.o    \
	printer/float_to_digits.o printer/float_to_string.o             \
	printer/integer_to_string.o printer/write_ugly.o                \
	printer/write_object.o printer/write_symbol.o                   \
	printer/write_array.o printer/write_list.o                      \
	printer/write_code.o printer/write_sse.o                        \
	printer/print_unreadable.o ffi/libraries.o ffi/backtrace.o      \
	ffi/mmap.o ffi/cdata.o numbers/cos.o numbers/sin.o              \
	numbers/tan.o numbers/atan.o numbers/cosh.o numbers/sinh.o      \
	numbers/tanh.o numbers/exp.o numbers/expt.o numbers/log.o       \
	numbers/sqrt.o numbers/abs.o numbers/zerop.o numbers/plusp.o    \
	numbers/minusp.o numbers/negate.o numbers/conjugate.o           \
	numbers/one_plus.o numbers/one_minus.o numbers/plus.o           \
	numbers/minus.o numbers/times.o numbers/divide.o                \
	numbers/number_compare.o numbers/number_equalp.o                \
	numbers/minmax.o numbers/floor.o numbers/ceiling.o              \
	numbers/round.o numbers/truncate.o typespec.o assignment.o      \
	predicate.o number.o num_pred.o num_arith.o num_co.o            \
	num_log.o num_rand.o array.o vector_push.o sequence.o           \
	cmpaux.o macros.o backq.o stacks.o time.o unixint.o mapfun.o    \
	multival.o hash.o format.o pathname.o structure.o load.o        \
	unixfsys.o unixsys.o serialize.o ffi.o sse2.o  big.o threads/process.o threads/queue.o threads/mutex.o threads/condition_variable.o threads/semaphore.o threads/barrier.o threads/mailbox.o threads/rwlock.o alloc_2.o alloc_2.o tcp.o unicode/ucd.o unicode/ucd-0000.o unicode/ucd-0016.o unicode/ucd-0032.o unicode/ucd-0048.o unicode/ucd-0064.o unicode/ucd-0080.o unicode/ucd-0096.o unicode/ucd_names_char.o unicode/ucd_names_codes.o unicode/ucd_names_pair.o unicode/ucd_names_str.o      \
	threads/atomic.o

.SUFFIXES: .c .o .d .s
.PHONY: all

ifndef VERBOSE
.SILENT:
endif

all: $(DPP) ../libeclmin.a ../cinit.o

.d.c: $(DPP)
	if test -f ../CROSS-DPP ; then ../CROSS-DPP $< $@ ; else $(DPP) $< $@ ; fi
.d.o: $(DPP)
	if test -f ../CROSS-DPP ; then ../CROSS-DPP $< $@.c ; else $(DPP) $< $@.c ; fi
	$(CC) -DECLDIR="\"${exec_prefix}/lib/ecl-21.2.1\"" $(CFLAGS) -o $@ $@.c
.c.o: $(HFILES)
	$(CC) -DECLDIR="\"${exec_prefix}/lib/ecl-21.2.1\"" $(CFLAGS) -o $@ $<
# .d.s: $(HFILES)
# 	if test -f ../CROSS-DPP ; then ../CROSS-DPP $< $@.c ; else $(DPP) $< $@.c ; fi
# 	$(CC) -DECLDIR="\"${exec_prefix}/lib/ecl-21.2.1\"" $(CFLAGS) -S -o $@ $@.c

../libeclmin.a: $(OBJS) all_symbols.o all_symbols2.o
	$(RM) $@
	$(AR) cr $@ $(OBJS)
	$(RANLIB) $@

clean:
	$(RM) $(DPP) *.c *.h $(OBJS) all_symbols.o all_symbols2.o ../libecl.a ../cinit.o core a.out tmp.c

# Build rules

$(DPP): $(srcdir)/dpp.c $(srcdir)/symbols_list.h
	if test -f ../CROSS-DPP; then touch dpp; else \
	$(TRUE_CC) -I$(srcdir) -IC:/work/c/memscan-dll/ecl-21.2.1-tests/ecl-rebuild/build -I./ $(srcdir)/dpp.c     -g -O2  -D_THREAD_SAFE -Dmingw32 -o $@ ; \
	fi

$(OBJS): $(DPP)

#
# This reduces the overhead of jumping to other functions
#
# apply.c: $(DPP)
# apply.o: apply.c $(HFILES)
# 	$(CC) $(CFLAGS) apply.c -o $@

#
# These files are interrelated
#
all_symbols.c: $(DPP)
all_symbols.o: all_symbols.c
	$(CC) $(CFLAGS) -I./ all_symbols.c -o $@
all_symbols2.o: all_symbols.c
	$(CC) $(CFLAGS) -DECL_FINAL -I./ all_symbols.c -o $@

#
# This is in another directory
#
cinit.c: $(DPP)
../cinit.o: cinit.c $(HFILES)
	$(CC) $(CFLAGS) -I./ cinit.c -o $@

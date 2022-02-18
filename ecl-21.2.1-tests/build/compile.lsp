;;;; -*- Mode: Lisp; Syntax: Common-Lisp; indent-tabs-mode: nil -*-
;;;; vim: set filetype=lisp tabstop=8 shiftwidth=2 expandtab:

;;; compile.pre.  Generated from compile.lsp.in by configure.
;;;
;;; This is the "makefile" file for building ECL. The purpose of this file is
;;;     - Compile the core of the Common-Lisp library (lsp, clos)
;;;     - Compile the compiler (cmp)
;;;     - Build an executable
;;; This can be done in two ways:
;;;     - Using interpreted code and the ECL_MIN minimal environment.
;;;     - On a second stage, using the final ECL executable, to test it.
;;;

(progn
  (setq *package* (find-package "SYSTEM"))
  (setq *features* (cons :wants-bytecmp (cons :wants-asdf (cons :wants-sockets (cons :wants-cmp (cons :wants-dlopen *features*)))))))

;;;
;;; * Ensure that we have the whole of Common-Lisp to compile
;;;
(load "bare.lsp" :verbose nil)

;;;
;;; * External formats. These come at the very beginning since msvc needs
;;;   them to compile correctly.
;;;
#+UNICODE
(load "ext:encodings;generate.lisp")

;;;
;;; * Find out what features are supported by the C compiler we are using
;;;
(progn
  (c::update-compiler-features
   :executable
   #+(or windows cygwin mingw32) "build:ecl_min.exe"
   #-(or windows cygwin mingw32) "build:ecl_min")
  (format t "~&;;; System features: ~A~%" c::*compiler-features*))

;;;
;;; * Complain about functions which are not in the core
;;;
#+(or)
(let ((wrong-symbols '()))
  (let ((*standard-output* (make-broadcast-stream)))
    (dolist (p '("CL" "SI" "EXT" "CLOS"))
      (do-symbols (s (find-package p))
        (when (and (fboundp s)
                   (not (typep (fdefinition s) '(or list generic-function)))
                   (si::mangle-name s)
                   (si::bc-disassemble (fdefinition s)))
          (pushnew s wrong-symbols)))))
  (format t "~%;;; Functions that can be made into the core:~%")
  (pprint (set-difference wrong-symbols c::*in-all-symbols-functions*)))

;;;
;;; * Force compiler constants only for the core library
;;;
(setf *use-static-constants-p* t)

;;;
;;; * Dump documentation
;;;
#+stage1
(progn
  (load "ext:ecl-cdb;ecl-cdb")
  (load "ext:ecl-cdb;ecl-help")
  (load "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/doc/help.lsp")
  (si::dump-documentation "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/help.doc"))

;;;
;;; * Trick to make names shorter in C files
;;;
(si::package-lock "CL" nil)
(rename-package "CL" "CL" '("COMMON-LISP"))

;;;
;;; * Add include path to not yet installed headers, and remove include flag
;;;   (-I) to installed directory, and Notice that we must explicitely mention
;;;   libecl.so/ecl.dll instead of using -lecl. This is to avoid interference
;;;   with an already installed copy of ECL.
;;;
(setq c::*cc-flags*
      #-msvc "    -g -O2  -D_THREAD_SAFE -Dmingw32 -I\"C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/c\""
      #+msvc "-g -O2  -D_THREAD_SAFE -Dmingw32"
      c::*ecl-include-directory* "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/"
      c::*ecl-library-directory* "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/")
#-:wants-dlopen 
(setf c::*ld-flags*
      "    libecl.a -leclatomic -leclffi -leclgc   -lgmp    -lws2_32")
#+(and :wants-dlopen (not nonstop))
(setf c::*ld-flags*
      "    ecl.dll    -lws2_32"
      c::*ld-shared-flags*
      "-Wl,--stack,1048576     ecl.dll  -lgmp    -lws2_32"
      c::*ld-bundle-flags*
      "-Wl,--stack,1048576     ecl.dll  -lgmp    -lws2_32")
;;; FIXME: The nonstop platform does not support soname
#+(and :wants-dlopen nonstop)
(setf c::*ld-flags*
      "    -Wld=-lecl.dll    -lws2_32"
      c::*ld-shared-flags*
      "-Wl,--stack,1048576     -Wld=-lecl.dll  -lgmp    -lws2_32"
      c::*ld-bundle-flags*
      "-Wl,--stack,1048576     -Wld=-lecl.dll  -lgmp    -lws2_32")

;;;
;;; * Avoid name clashes with user supplied code.
;;;
(setq si::*init-function-prefix* "ECL")

;;;
;;; * Clean up a little bit before moving on
;;;
(mapc #'delete-file (directory "eclinit*.*"))

;;;
;;; * Compile and link Common-Lisp base library
;;;
(setq si::*keep-documentation* nil)
(mapc #'proclaim +ecl-optimization-settings+)
(let* ((c::*cc-flags* (concatenate 'string "-DECL_API -I\"C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/c\" " c::*cc-flags*))
       (lsp-objects (compile-if-old "build:lsp;" +lisp-module-files+
                                    :system-p t :c-file t :data-file t :h-file t
                                    ;;:shared-data-file "build:ecl.sdat"
                                    )))
  #+CLOS
  (let* ((c::*compile-to-linking-call* nil))
    (mapc #'proclaim +ecl-optimization-settings+)
    (setq lsp-objects (append lsp-objects
                              (compile-if-old "build:clos;" +clos-module-files+
                                              :system-p t :c-file t :data-file t
                                              :h-file t
                                              ;;:shared-data-file "build:ecl.sdat"
                                              ))))
  (let ((extra-lisp-files '()))
    (when extra-lisp-files
      (setq lsp-objects (append lsp-objects
                                (compile-if-old "build:ext;" extra-lisp-files
                                                :system-p t :c-file t :data-file t
                                                :h-file t
                                                ;;:shared-data-file "build:ecl.sdat"
                                                )))))
  (c::build-static-library "lsp"
                           :lisp-files lsp-objects
                           :init-name "init_lib_LSP"
                           ;;:shared-data-file "build:ecl.sdat"
                           ))

#-:wants-dlopen
(c::safe-system
	(concatenate 'string
"sh -c 'rm -rf tmp; mkdir tmp;"
"cp libeclmin.a libecl.a;"
"cd tmp; ar -x ../liblsp.a;"
"for i in *.o; do mv $i lsp_`basename $i`; done;"
"ar -r ../libecl.a *.o ../c/all_symbols2.o; rm *.o;"
"ranlib ../libecl.a'"))

#+:wants-dlopen
;;;
;;; We do not need the -rpath flag for the library, nor -lecl.
;;;
(let* ((c::*ld-shared-flags* #-msvc "-Wl,--stack,1048576      -leclatomic -leclffi -leclgc   -lgmp    -lws2_32"
                             #+msvc "-Wl,--stack,1048576     @STATICLIBS@ @CLIBS@")
       (c::*cc-flags* (concatenate 'string "-DECL_API -IC:/work/c/memscan-dll/lisp/ecl-21.2.1/build/c " c::*cc-flags*))
       (extra-args nil))
  #+(or mingw32 cygwin)
  (progn
    ;; We need these two to force dllwrap to export the symbols
    ;; in these libraries. Otherwise it will not be possible to
    ;; call functions from GMP or GC in code that embeds ECL.
    #+thread
    (when (probe-file "libatomic_ops.a")
      (push "libatomic_ops.a" extra-args))
    (when (probe-file "libeclgc.a")
      (push "libeclgc.a" extra-args))
    (when (probe-file "libeclgmp.a")
      (push "libeclgmp.a" extra-args)))
  (print extra-args)
  (c::shared-cc (compile-file-pathname "ecl" :type :dll)
                (list* "c/main.o"
                       "c/all_symbols2.o"
                       "liblsp.a"
                       "libeclmin.a"
                       extra-args)))

;;;
;;; * Compile and link Common-Lisp to C compiler
;;;
(mapc #'proclaim +ecl-optimization-settings+)

#-mingw32
(si::pathname-translations "SYS" '(("**;*.*.*" "/mingw32/lib/ecl-21.2.1/**/*.*")))

#+WANTS-CMP
(build-module "cmp" +cmp-module-files+ 
              :dir "build:cmp;" :prefix "CMP"
              :builtin #+:BUILTIN-CMP t #-:BUILTIN-CMP nil)

(build-module "ecl-cdb" '("ext:ecl-cdb;ecl-cdb.lisp")
              :dir "build:ext;" :prefix "EXT"
              :builtin #+:WANTS-DLOPEN nil #-:WANTS-DLOPEN t)

(build-module "ecl-help" '("ext:ecl-cdb;ecl-cdb.lisp"
                           "ext:ecl-cdb;ecl-help.lisp")
              :dir "build:ext;" :prefix "EXT"
              :builtin #+:WANTS-DLOPEN nil #-:WANTS-DLOPEN t)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; EXTENSIONS
;;;

;;;
;;; * SSE
;;;
#+(and WANTS-CMP SSE2)
(build-module "cl-simd"
              '("ext:cl-simd;sse-package.lisp"
                "ext:cl-simd;ecl-sse-core.lisp"
                "ext:cl-simd;sse-intrinsics.lisp"
                "ext:cl-simd;sse-array-defs.lisp"
                "ext:cl-simd;ecl-sse-utils.lisp"
                "ext:cl-simd;sse-utils.lisp")
              :dir "build:ext;"
              :prefix "EXT"
              :builtin nil)

;;;
;;; * DEFSYSTEM
;;;
#+WANTS-DEFSYSTEM
(build-module "defsystem"
              '("ext:defsystem;defsystem.lisp")
              :dir "build:ext;"
              :prefix "EXT"
              :builtin #+:BUILTIN-DEFSYSTEM t #-:BUILTIN-DEFSYSTEM nil)

;;;
;;; * ASDF
;;;
#+WANTS-ASDF
(build-module "asdf"
              '("ext:asdf;asdf.lisp")
              :dir "build:ext;"
              :prefix "EXT"
              :builtin #+:BUILTIN-ASDF t #-:BUILTIN-ASDF nil)

;;;
;;; * PROFILE
;;;
#+(and WANTS-PROFILE (not (or cygwin mingw32)))
(build-module "profile"
              '("ext:profile;profile.lisp")
              :dir "build:ext;"
              :prefix "EXT"
              :builtin
              #+(or (NOT :WANTS-DLOPEN) :BUILTIN-PROFILE) t
              #-(or (NOT :WANTS-DLOPEN) :BUILTIN-PROFILE) nil)

;;;
;;; * Sockets library.
;;;

#+WANTS-SOCKETS
(build-module "sockets"
              '("ext:sockets;package.lisp"
                "ext:sockets;sockets.lisp")
              :dir "build:ext;"
              :prefix "EXT"
              :builtin
              #+(or (NOT :WANTS-DLOPEN) :BUILTIN-SOCKETS) t
              #-(or (NOT :WANTS-DLOPEN) :BUILTIN-SOCKETS) nil)

#+WANTS-SOCKETS
(build-module "sb-bsd-sockets"
              '("ext:sockets;sb-bsd-sockets.lisp")
              :depends-on '("sockets")
              :dir "build:ext;"
              :prefix "EXT"
              :builtin nil)

#+WANTS-SERVE-EVENT
(build-module "serve-event"
              '("ext:serve-event;serve-event.lisp")
              :dir "build:ext;"
              :prefix "EXT"
              :builtin
              #+(or (NOT :WANTS-DLOPEN) :BUILTIN-SERVE-EVENT) t
              #-(or (NOT :WANTS-DLOPEN) :BUILTIN-SERVE-EVENT) nil)

#+WANTS-SOCKETS
(build-module "ecl-curl"
              '("ext:ecl-curl;ecl-curl.lisp")
              :dir "build:ext;"
              :prefix "EXT"
              :builtin nil)

#+WANTS-SOCKETS
(build-module "ql-minitar"
              '("ext:quicklisp;minitar.lisp")
              :dir "build:ext;"
              :prefix "EXT"
              :builtin nil)

#+WANTS-SOCKETS
(build-module "deflate"
              '("ext:deflate;deflate.lisp")
              :dir "build:ext;"
              :prefix "EXT"
              :builtin nil)

#+WANTS-SOCKETS
(build-module "ecl-quicklisp"
              '("ext:quicklisp;ecl-quicklisp.lisp")
              :dir "build:ext;"
              :prefix "EXT"
              :builtin nil)

;;;
;;; * Test suite
;;;
#+WANTS-RT
(build-module "rt"
              '("ext:rt;rt.lisp")
              :dir "build:ext;"
              :prefix "EXT"
              :builtin #+:BUILTIN-RT t #-:BUILTIN-RT nil)

;;;
;;; * Package locks
;;;
(build-module "package-locks"
              '("ext:package-locks;package-locks.lisp")
              :dir "build:ext;" :prefix "EXT" :builtin nil)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; THE FINAL EXECUTABLE
;;;

(setq si::*init-function-prefix* NIL)

#+windows
(progn
 (with-open-file (s "ecl.rc"
                  :direction :output
                  :if-exists :supersede
                  :if-does-not-exist :create)
  (write-line "id ICON \"ecl.ico\"" s))
 (ext:copy-file #p"src:util;ecl.ico" "ecl.ico")
 #+msvc (ext:system "rc /nologo /r ecl.rc")
 #-msvc (ext:system "windres ecl.rc -O coff ecl.res"))

(si::pathname-translations "SYS" '(("**;*.*.*" "C:/work/c/memscan-dll/lisp/ecl-21.2.1/build/**/*.*")))

(compiler::build-program
 #+:msvc "ecl2"
 #+(and (or cross stage1) (not msvc)) "bin/ecl"
 #-(or cross stage1 msvc) "ecl2"
 :epilogue-code '(SI::TOP-LEVEL T)
 :lisp-files *module-symbols*
 :ld-flags
 (concatenate 'list #-msvc '("-L./") #+windows '("ecl.res" #+msvc "/F 10485760")))

(with-open-file (modules-list #P"build:MODULES" :direction :output
                              :if-exists :supersede
                              :if-does-not-exist :create)
  (print *module-files*)
  (dolist (module-file *module-files*)
    (format modules-list "~A~%" module-file)))

(quit)

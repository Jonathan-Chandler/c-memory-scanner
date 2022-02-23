;;;; -*- Mode: Lisp; Syntax: Common-Lisp; indent-tabs-mode: nil; Package: C -*-
;;;; vim: set filetype=lisp tabstop=8 shiftwidth=2 expandtab:

;;;;
;;;;  Copyright (c) 2010, Juan Jose Garcia-Ripoll
;;;;
;;;;    This program is free software; you can redistribute it and/or
;;;;    modify it under the terms of the GNU Library General Public
;;;;    License as published by the Free Software Foundation; either
;;;;    version 2 of the License, or (at your option) any later version.
;;;;
;;;;    See file '../Copyright' for full details.

;;;; CMPDEF -- Definitions created at compile / configuration time

(in-package "COMPILER")

;;; This is copied into each .h file generated, EXCEPT for system-p calls.
;;; The constant string *include-string* is the content of file "ecl.h".
;;; Here we use just a placeholder: it will be replaced with sed.
(defvar *cmpinclude* "<ecl/ecl-cmp.h>")

(defvar *cc* "gcc"
"This variable controls how the C compiler is invoked by ECL.
The default value is \"cc -I. -I/usr/local/include/\".
The second -I option names the directory where the file ECL.h has been installed.
One can set the variable appropriately adding for instance flags which the 
C compiler may need to exploit special hardware features (e.g. a floating point
coprocessor).")

(defvar *ld* "gcc"
"This variable controls the linker which is used by ECL.")

(defvar *ranlib* "ranlib"
  "Name of the `ranlib' program on the hosting platform.")

(defvar *ar* "ar"
  "Name of the `AR' program on the hosting platform.")

(defvar *cc-flags* "    -g -O2  -D_THREAD_SAFE -Dmingw32")

(defvar *cc-optimize* #-msvc "-O2"
                      #+msvc "@CFLAGS_OPTIMIZE@")

(defvar *ld-format* #-msvc "~A -o ~S -L~S ~{~S ~} ~@[~S~]~{ '~A'~} ~A"
                    #+msvc "~A -Fe~S~* ~{~S ~} ~@[~S~]~{ '~A'~} ~A")

(defvar *cc-format* (cond ((member :msvc *features*)
			   "~A -I. \"-I~A\" ~A ~:[~*~;~A~] -w -c \"~A\" -o \"~A\"~{ '~A'~}")
			  ((member :nacl *features*) ;; pnacl-clang doesn't support -w
			   "~A -I. \"-I~A\" ~A ~:[~*~;~A~] -c \"~A\" -o \"~A\"~{ '~A'~}")
			  (t
			   "~A -I. \"-I~A\" ~A ~:[~*~;~A~] -w -c \"~A\" -o \"~A\"~{ '~A'~}")))

#-dlopen
(defvar *ld-flags* "    -lecl -leclatomic -leclffi -leclgc   -lgmp    -lws2_32")
#+dlopen
(defvar *ld-flags* #-msvc "    -lecl  -lgmp    -lws2_32"
                   #+msvc "    ecl.lib @CLIBS@")
#+dlopen
(defvar *ld-shared-flags* #-msvc "-Wl,--stack,1048576     -lecl  -lgmp    -lws2_32"
                          #+msvc "-Wl,--stack,1048576     ecl.lib @CLIBS@")
#+dlopen
(defvar *ld-bundle-flags* #-msvc "-Wl,--stack,1048576     -lecl  -lgmp    -lws2_32"
                          #+msvc "-Wl,--stack,1048576     ecl.lib @CLIBS@")

(defvar +shared-library-prefix+ "")
(defvar +shared-library-extension+ "dll")
(defvar +shared-library-format+ "~a.dll")
(defvar +static-library-prefix+ "lib")
(defvar +static-library-extension+ "a")
(defvar +static-library-format+ "lib~a.a")
(defvar +object-file-extension+ "o")
(defvar +executable-file-format+ "~a.exe")

(defvar *ecl-include-directory* "/mingw32/include/")
(defvar *ecl-library-directory* "/mingw32/lib/")
(defvar *ecl-data-directory* "/mingw32/lib/ecl-21.2.1/")

(defvar *ld-rpath*
  (let ((x ""))
    (and (plusp (length x))
         (format nil x *ecl-library-directory*))))
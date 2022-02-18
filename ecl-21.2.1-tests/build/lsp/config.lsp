;;;; -*- Mode: Lisp; Syntax: Common-Lisp; indent-tabs-mode: nil -*-
;;;; vim: set filetype=lisp tabstop=8 shiftwidth=2 expandtab:

;; lsp/config.lsp.  Generated from config.lsp.in by configure.
;;
;; Configuration file for ECL
;;
(in-package "COMMON-LISP")

#+(and (not ecl-min) (not nacl) (not windows) (not mingw32) uname)
(ffi:clines "
#include <sys/utsname.h>
")

#+(and (not ecl-min) (not nacl) (not windows) (not mingw32) uname)
(defun uname ()
 (ffi:c-inline () () :object "{
        cl_object output;
        struct utsname aux;
        if (uname(&aux) < 0)
                output = ECL_NIL;
        else
                output = cl_list(5, ecl_make_simple_base_string(aux.sysname,-1),
                            ecl_make_simple_base_string(aux.nodename,-1),
                            ecl_make_simple_base_string(aux.release,-1),
                            ecl_make_simple_base_string(aux.version,-1),
                            ecl_make_simple_base_string(aux.machine,-1));
        @(return) = output;
}" :one-liner nil))

#+(and ecl-min uname)
(defun uname ()
  "A poor man's uname"
  (list "mingw32"
        NIL #| hostname |#
        #.(let ((aux ""))
            (when (plusp (length aux))
              aux))
        NIL #| kernel version |#
        "I686"))

;;
;; * Short and long site names
;;
;; Edit these with the name of your site:
;;
(defun short-site-name ()
  "Args: ()
Returns, as a string, the location of the machine on which ECL runs."
  nil)

(defun long-site-name () 
  "Args: ()
Returns, as a string, the location of the machine on which ECL runs."
  nil)

;;
;; * ECL version, architecture, etc
;;
(defun lisp-implementation-version ()
  "Args:()
Returns the version of your ECL as a string."
  "21.2.1")

(defun ext:lisp-implementation-vcs-id ()
  #.si::+commit-id+)

(defun machine-type ()
  "Args: ()
Returns, as a string, the type of the machine on which ECL runs."
  (or (ext:getenv "HOSTTYPE")
      #+(or :mingw32 :msvc :cygwin)
      (ext:getenv "PROCESSOR_ARCHITECTURE")
      #+uname
      (fifth (uname))
      "I686"))

(defun machine-instance ()
  "Args: ()
Returns, as a string, the identifier of the machine on which ECL runs."
  (or (ext:getenv "HOSTNAME")
      #+(or :mingw32 :msvc :cygwin)
      (ext:getenv "COMPUTERNAME")
      #+uname
      (second (uname))
      ))

(defun machine-version ()
  "Args: ()
Returns, as a string, the version of the machine on which ECL runs. Obtained from
uname(2) where available."
  (or #+(or :mingw32 :msvc :cygwin)
      (ext:getenv "PROCESSOR_LEVEL")))

(pushnew :mingw32 *features*)

(defun software-type ()
  "Args: ()
Returns, as a string, the type of the software under which ECL runs."
  (or #+uname (first (uname))
      "mingw32"))

(defun software-version ()
  "Args: ()
Returns, as a string, the version of the software under which ECL runs."
  (or #+uname (third (uname))
      #.(let ((aux ""))
          (if (plusp (length aux))
              aux
              nil))))

;;
;; * Set up some room
;;
#-boehm-gc
(progn
  (sys::allocate 'CONS 200)
  (sys::allocate 'BASE-STRING 40))

;;
;; * Set configuration pathnames. Notice the trailing slash!
;;   Otherwise it would not be a directory.
;;
#-msvc
(si::pathname-translations "HOME" '(("**;*.*" "~/**/*.*")))
#+msvc
(si::pathname-translations "HOME"
  `(("**;*.*" ,(merge-pathnames "**/*.*" (user-homedir-pathname)))))
(let (x)
  (cond ((and (setf x (ext:getenv "TMPDIR"))
              (probe-file x)))
        ((and (setf x (ext:getenv "TEMP"))
              (probe-file x)))
        ((and (setf x (ext:getenv "TMP"))
              (probe-file x)))
        (t (setf x #+unix "/tmp" #-unix "./")))
  (si::pathname-translations "TMP"
     `(("**;*.*" ,(format nil "~A/**/*.*" x)))))

#-ecl-min
(macrolet ((define-pathname-translations (name base-pathname)
             `(let ((path ,base-pathname))
               (when path
                 (si::pathname-translations
                  ,name `(("**;*.*" ,(merge-pathnames "**/*.*" path))))))))
  (define-pathname-translations "SYS" (si::get-library-pathname))
  (let ((x (ext:getenv "ECLSRCDIR")))
    ;; Notice we use true_srcdir, which in Windows resolves to a
    ;; Windows pathname, not a mingw/cygwin pathname
    (unless (and x (setq x (probe-file x)))
      (setf x #.(truename "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/")))
    (define-pathname-translations "SRC" x)
    (define-pathname-translations "EXT" (merge-pathnames "../contrib/" x))
    ))

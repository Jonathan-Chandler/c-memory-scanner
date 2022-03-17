;;;;;; (load "launch-swank.lisp")
;;;;;(load "asdf")
;;;;;(require "asdf")
;;;;;(ql:quickload :swank)
;;;;;;(push #p"./slime/swank/" asdf:*central-registry*)
;;;;;;(push #p"./slime/contrib/" asdf:*central-registry*)
;;;;;;(require "swank")
;;;;;;;(mp:process-run-function "swank" #'(lambda () (swank:create-server :dont-close t :port 4005)))
;;;;;(swank:create-server :dont-close t :port 4005)
;;;;;(sleep 100)
;;
;;(load "asdf")
;;(require "asdf")
;;
;;(let ((quicklisp-init (merge-pathnames "quicklisp/setup.lisp"
;;                                       (user-homedir-pathname))))
;;  (when (probe-file quicklisp-init)
;;    (load quicklisp-init)))
;;
;;;(when (probe-file  "/tmp/slime.2565")
;;;  (delete-file "/tmp/slime.2565"))
;;;
;;;(load
;;; "~/quicklisp/dists/quicklisp/software/slime-2.14/swank-loader.lisp"
;;; :verbose t)
;;;
;;(load "C:/Users/jonat/_vim/bundle/slimv/slime/swank-loader.lisp" :verbose t)
;;
;;;(funcall (read-from-string "swank-loader:init"))
;;;(funcall (read-from-string "swank:start-server")
;;;         "/tmp/slime.2565"))
;;
;;(swank-loader:init
;; :delete nil         ; delete any existing SWANK packages
;; :reload nil         ; reload SWANK, even if the SWANK package already exists
;; :load-contribs nil  ; load all contribs
;; :from-emacs nil)    ; not started from emacs
;;
;;(defun my-getenv (name &optional default)
;;  #+CMU
;;  (let ((x (assoc name ext:*environment-list*
;;                  :test #'string=)))
;;    (if x (cdr x) default))
;;  #-CMU
;;  (or
;;    #+Allegro (sys:getenv name)
;;    #+CLISP (ext:getenv name)
;;    #+ECL (si:getenv name)
;;    #+SBCL (sb-unix::posix-getenv name)
;;    #+LISPWORKS (lispworks:environment-variable name)
;;    #+CCL (ccl::getenv name)
;;    default))
;;
;;(swank:create-server :port (parse-integer (my-getenv "SWANK_PORT" "4005"))
;;                     ;; if non-nil the connection won't be closed
;;                     ;; after connecting
;;                     :dont-close t)
;;

;(require:asdf)
(print "swank-print-test")
(let ((quicklisp-init (merge-pathnames "quicklisp/setup.lisp" (user-homedir-pathname))))(when (probe-file quicklisp-init)(load quicklisp-init)))

;(when (probe-file  "/tmp/slime.2565")
;  (delete-file "/tmp/slime.2565"))

;C:\Users\jonat\_vim\bundle\slimv\slime
;(load
; "~/quicklisp/dists/quicklisp/software/slime-2.14/swank-loader.lisp"
; :verbose t)
(load
 "~/_vim/bundle/slimv/slime/start-swank.lisp"
 :verbose t)

;(funcall (read-from-string "swank-loader:init"))
;(funcall (read-from-string "swank:start-server")
;         "/tmp/slime.2565"))


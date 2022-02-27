; (load "launch-swank.lisp")
(load "asdf")
(require "asdf")
(push #p"./slime/swank/" asdf:*central-registry*)
(push #p"./slime/contrib/" asdf:*central-registry*)
(require "swank")
;(mp:process-run-function "swank" #'(lambda () (swank:create-server :dont-close t :port 4005)))
(swank:create-server :dont-close t :port 4005)
(sleep 100)


;(let ((quicklisp-init (merge-pathnames "quicklisp/setup.lisp"
;                                       (user-homedir-pathname))))
;  (when (probe-file quicklisp-init)
;    (load quicklisp-init)))
;
;;(when (probe-file  "/tmp/slime.2565")
;;  (delete-file "/tmp/slime.2565"))
;;
;(load
; "~/quicklisp/dists/quicklisp/software/slime-2.14/swank-loader.lisp"
; :verbose t)
;;
;;(funcall (read-from-string "swank-loader:init"))
;;(funcall (read-from-string "swank:start-server")
;;         "/tmp/slime.2565"))
;
;

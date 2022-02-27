;(require:asdf)
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



;;(require:asdf)
;(let ((quicklisp-init (merge-pathnames "quicklisp/setup.lisp" 
;                                       (user-homedir-pathname))))
;  (when (probe-file quicklisp-init)
;    (load quicklisp-init)))
;
;(load
; "~/_vim/bundle/slimv/slime/swank-loader.lisp"
; :verbose t)
;
;(swank-loader:init
; :delete nil         ; delete any existing SWANK packages
; :reload nil         ; reload SWANK, even if the SWANK package already exists
; :load-contribs nil  ; load all contribs
; :from-emacs nil)    ; not started from emacs
;
;(swank:create-server :port (parse-integer (my-getenv "SWANK_PORT" "4005"))
;                     ;; if non-nil the connection won't be closed
;                     ;; after connecting
;                     :dont-close t)

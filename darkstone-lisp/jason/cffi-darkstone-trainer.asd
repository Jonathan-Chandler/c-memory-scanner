;;;; cffi-darkstone-trainer.asd

(asdf:defsystem #:cffi-darkstone-trainer
  :description "DarkStone with Windows API"
  :author "Jason Chandler <jasonchandler@pm.me>"
  :license  "MIT"
  :version "0.0.1"
  :serial t
  :depends-on (#:cffi)
  :components ((:file "win-api")
	       (:file "package")
               (:file "cffi-darkstone-trainer")))

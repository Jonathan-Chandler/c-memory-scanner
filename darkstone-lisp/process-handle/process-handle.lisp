(in-package :lisp-memscan)

(cffi:load-foreign-library "memscan.dll")
(load "process-handle/process-handle-c-structs.lisp")
(load "process-handle/process-handle-c-functions.lisp")

;; open process handle for window with given title
(defun process-handle-open (window-title)
  ; convert to c string
  (defparameter c-window-title (convert-to-foreign window-title :string))
  ; create pointer to pointer for process info
  (defparameter pp-proc-info (foreign-alloc :pointer))
  ; initialize process info and deallocate title c-string 
  (defparameter retval (proc-info-init pp-proc-info c-window-title))
  ; deallocate c string
  (free-converted-object c-window-title :string t)
  ; return value or print error
  (if (= retval 0)
  (return-from process-handle-open pp-proc-info)
  (format t "Failed to get process handle: ~d" retval)))

(defun process-handle-close (pp-proc-info)
  "Close process handle and deallocate foreign pointer"
  (defparameter retval (proc-info-destroy pp-proc-info))
  (if (= retval 0)
    ( (foreign-free pp-proc-info)
      (return-from process-handle-close pp-proc-info))
    (format t "Failed to close process handle: ~d" retval)))

(defun pp-proc-info-get-h-process (pp-proc-info)
  (return-from pp-proc-info-get-h-process (getf (mem-aref (mem-aref pp-proc-info :pointer) '(:struct proc-info-t)) 'H-PROCESS)))

;(defparameter test (pp-proc-info-get-h-process pp-proc-info))

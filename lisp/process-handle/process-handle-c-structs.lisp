(in-package :lisp-memscan)

(cffi:defcstruct proc-info-t
  (h-window :uint32)
  (h-process :uint32)
  (dw-process-id :uint32))

;;(cffi:defcstruct proc-info-t
;;  (h-window :uint32)
;;  (h-process :uint32)
;;  (dw-process-id :uint32))
;(setf converted-proc-info (mem-aref (mem-aref pp-proc-info :pointer) '(:struct proc-info-t)))
;(write converted-proc-info)


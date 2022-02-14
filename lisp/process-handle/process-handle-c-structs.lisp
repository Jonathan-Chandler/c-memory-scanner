(in-package :lisp-memscan)

(cffi:defcstruct proc-info-t
  (h-window :uint32)
  (h-process :uint32)
  (dw-process-id :uint32))


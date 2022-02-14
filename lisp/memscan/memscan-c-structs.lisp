(in-package :lisp-memscan)

(cffi:defcstruct proc-info-t
  (h-window :uint32)
  (h-process :uint32)
  (dw-process-id :uint32))

(cffi:defcstruct mem-page-t
  (lp-base-addr :uint32)
  (n-size :uint32)
  (pc-buffer :pointer))


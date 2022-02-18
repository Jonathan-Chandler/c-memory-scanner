(in-package :lisp-memscan)

(cffi:defcstruct mem-page-t
  (lp-base-addr :uint32)
  (n-size :uint32)
  (pc-buffer :pointer))


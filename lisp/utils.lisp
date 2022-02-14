(in-package :lisp-memscan)

(defun print-as-hex (value-list byte-count)
  (loop for x in value-list
        do (format T "~v,'0x " (* 2 byte-count) x))
)

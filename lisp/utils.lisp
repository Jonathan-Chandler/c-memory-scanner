(in-package :lisp-memscan)

(defmacro create-pointer-to (x y)
  `(defparameter ,x (cffi:foreign-alloc :pointer :initial-element ,y)))


(defun print-as-hex (value-list byte-count)
  (loop for x in value-list
        do (format T "~v,'0x " (* 2 byte-count) x))
)

;(defparameter value-list (list #x1 #x2 #x3 #x4 #x5 #x6 #x7 #x8 #x9 #xA #xB #xC #xD #xE #xF))
;(defparameter value-list (list 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15))
;(print-as-hex value-list 1)



;bool write-process-memory(HANDLE  hProcess, LPVOID  lpBaseAddress, LPCVOID lpBuffer, SIZE_T  nSize, SIZE_T *lpNumberOfBytesWritten)
;   [in]  HANDLE  hProcess,
;   [in]  LPVOID  lpBaseAddress,
;   [in]  LPCVOID lpBuffer,
;   [in]  SIZE_T  nSize,
;   [out] SIZE_T  *lpNumberOfBytesWritten
;
;   @return       0 - Success
;               !=0 - Failed
(cffi:defcfun ("WriteProcessMemory" write-process-memory) :bool
  "Write n-size bytes of lpc-buffer buffer to process memory at lp-base-addr" 
  (h-Process :uint32)
  (lp-base-addr :uint32)
  (lpc-buffer :pointer)
  (n-size :uint32)
  (lp-bytes-written :pointer))



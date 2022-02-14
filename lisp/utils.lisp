(in-package :lisp-memscan)

(defun print-as-hex (value-list byte-count)
  (loop for x in value-list
        do (format T "~v,'0x " (* 2 byte-count) x))
)

;;;int write-process-memory(HANDLE  hProcess, LPVOID  lpBaseAddress, LPCVOID lpBuffer, SIZE_T  nSize, SIZE_T *lpNumberOfBytesWritten)
;;;   [in]  HANDLE  hProcess,
;;;   [in]  LPVOID  lpBaseAddress,
;;;   [in]  LPCVOID lpBuffer,
;;;   [in]  SIZE_T  nSize,
;;;   [out] SIZE_T  *lpNumberOfBytesWritten
;;;
;;;   @return       0 - Success
;;;               !=0 - Failed
;;(cffi:defcfun ("WriteProcessMemory" write-process-memory) :bool
;;  "Close process handle and free memory for process information" 
;;  (h-Process :uint32)
;;  (lp-base-addr :uint32)
;;  (lpc-buffer :pointer)
;;  (n-size :uint32)
;;  (lp-bytes-written :pointer))



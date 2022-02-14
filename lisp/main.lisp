(quicklisp:quickload "cffi")
(ql:quickload "iterate")

;;;;;; set up new package lisp-memscan using cffi lib
(defpackage :lisp-memscan 
  (:use :common-lisp :cffi))
;  (:use :common-lisp :cffi :iterate) 

; export function names in external C library
(in-package :lisp-memscan)

(load "process-handle/process-handle.lisp")
(load "memscan/memscan.lisp")
(load "utils.lisp")

; load user32 dll
(cffi:load-foreign-library "user32.dll")

(defmacro create-pointer-to (x y)
  `(defparameter ,x (cffi:foreign-alloc :pointer :initial-element ,y)))

(defparameter value-list (list #x1 #x2 #x3 #x4 #x5 #x6 #x7 #x8 #x9 #xA #xB #xC #xD #xE #xF))
(defparameter value-list (list 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15))
(print-as-hex value-list 1)


; get handle to process
(defparameter window-title "DarkStone DSI")
(defparameter pp-proc-info (process-handle-open window-title))

;init pointer to hold memary manager and initialize pointer
(defparameter pp-mem-mgr (foreign-alloc :pointer))
(mem-mgr-init pp-mem-mgr)

;; load pages into memory manager
(mem-mgr-load-proc (cffi:mem-aref pp-mem-mgr :pointer) (cffi:mem-aref pp-proc-info :pointer))

(defparameter lisp-search-test (string "OAOUE"))
(defparameter string-search-res (search-for-string pp-mem-mgr lisp-search-test 5))
(print-as-hex string-search-res 4)

;; result should be same as string search
(defparameter byte-array-test (list #x4F #x41 #x4F))
(defparameter byte-array-res (search-for-bytes pp-mem-mgr byte-array-test 4))
(print-as-hex byte-array-res 4)

;(cffi:defcstruct proc-info-t
;  (h-window :uint32)
;  (h-process :uint32)
;  (dw-process-id :uint32))
(setf converted-proc-info (mem-aref (mem-aref pp-proc-info :pointer) '(:struct proc-info-t)))
(write converted-proc-info)


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



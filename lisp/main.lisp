(quicklisp:quickload "cffi")
(ql:quickload "iterate")

; new package lisp-memscan using cffi lib
(defpackage :lisp-memscan 
  (:use :common-lisp :cffi))

(in-package :lisp-memscan)
(load "process-handle/process-handle.lisp")
(load "memscan/memscan.lisp")
(load "utils.lisp")

; user32 dll for read/writeprocessmemory
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
(defparameter byte-array-test (list #x4F #x41 #x4F #x55)) ; OAOU
(defparameter byte-array-res (search-for-bytes pp-mem-mgr byte-array-test 4))
(print-as-hex byte-array-res 4)



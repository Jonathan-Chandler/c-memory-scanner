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

; get handle to process
(defparameter window-title "DarkStone DSI")
(defparameter pp-proc-info (process-handle-open window-title))

;init pointer to hold memary manager and initialize pointer
(defparameter pp-mem-mgr (foreign-alloc :pointer))
(mem-mgr-init pp-mem-mgr)

;; load pages into memory manager
(mem-mgr-load-proc (cffi:mem-aref pp-mem-mgr :pointer) (cffi:mem-aref pp-proc-info :pointer))

(defun write-character-stats (pp-proc-info stats)
  "Write character stats"
  ;char_address = (LPVOID)0x00AF9F4E; ;GOG
  ;char_address = (LPVOID)0x00AFA0FE; ;steam
  ; offsets from beginning of character struct
  (defparameter darkstone-stat-lookup (list 'STRENGTH #x0 'MAGIC #x2 'DEXTERITY #x4 'VITALITY #x6 'LEVEL #x58 'REMAINING #x5E))
  ; get process handle from **c-process-info-t
  (defparameter h-proc (pp-proc-info-get-h-process pp-proc-info))
  ; iterate over stats and write to game if tag was found
  (loop for x in stats do 
        (if (getf darkstone-stat-lookup x)
            (progn 
                (defparameter p-value (foreign-alloc :int16 :initial-element(getf stats x)))
                (defparameter stat-offset (getf darkstone-stat-lookup x))
                (defparameter char-addr #x00AF9F4E)
                ; write 16-bit stat value to character addr
                (defparameter retval (write-process-memory h-proc (+ char-addr stat-offset) p-value 2 (null-pointer)))
                (foreign-free p-value)
                (if (not retval) (progn (print "Failed to write data") return)))
        )
  )
  )
; stats to modify
(defparameter stats (list 'REMAINING 58 'STRENGTH 97))
; set stats
;(defparameter proc-handle (write-character-stats pp-proc-info stats))

  ;(progn (defparameter p-proc-info (getf (mem-aref (mem-aref pp-proc-info :pointer) '(:struct proc-info-t)) 'H-PROCESS))
;  (defparameter proc-handle (getf (mem-aref (mem-aref pp-proc-info :pointer) '(:struct proc-info-t)) 'H-PROCESS)

;(cffi:defcfun ("WriteProcessMemory" write-process-memory) :bool
;  "Write n-size bytes of lpc-buffer buffer to process memory at lp-base-addr" 
;  (h-Process :uint32)
;  (lp-base-addr :uint32)
;  (lpc-buffer :pointer)
;  (n-size :uint32)
;  (lp-bytes-written :pointer))



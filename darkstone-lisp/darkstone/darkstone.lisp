(require :cmp)
(quicklisp:quickload "cffi")
(ql:quickload "iterate")

(in-package :lisp-memscan)
(load "process-handle/process-handle.lisp")
(load "memscan/memscan.lisp")
(load "darkstone/darkstone-functions.lisp")
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
(mem-mgr-load-proc (cffi:mem-aref pp-mem-mgr :pointer) (cffi:mem-aref pp-proc-info :pointer))

(defparameter p-magic-number (cffi:make-pointer #x00dff950))
(print p-magic-number)
(print (cffi:mem-aref p-magic-number :int32))


; change amount of gold held in cursor to max
(defparameter item-stat 'GOLD)
(defparameter item-stat-value -1)
;(write-cursor-item-stat pp-proc-info item-stat item-stat-value)

; add vampire effect to main weapon
(defparameter weapon-slot 'HAND_L)
(defparameter weapon-stat 'SPELL_EFFECT)
(defparameter weapon-stat-value 3)
;(write-equip-stats pp-proc-info weapon-slot weapon-stat weapon-stat-value)

; set stats to modify
(defparameter stats (list 'REMAINING 58 'STRENGTH 97))
;(defparameter proc-handle (write-character-stats pp-proc-info stats))

; read stats on head item
(defparameter slot-req 'HEAD)
(defparameter res-test (read-equip-stats pp-proc-info slot-req))
(print-equip-stats res-test)

(defparameter spell-name 'MAGICDOOR)
(defparameter spell-level 1)
;(write-spell-level pp-proc-info spell-name spell-level)

(defparameter skill-name 'IDENTIFICATION)
(defparameter skill-level 1)
;(write-skill-level pp-proc-info skill-name skill-level)

(defparameter skill-name 'LYCANTHROPY)
(defparameter skill-level 1)
;(write-skill-level pp-proc-info skill-name skill-level)

(print "test")


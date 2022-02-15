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

(defun print-equip-stats (print-list)
  (loop for x from 0 to (- (length print-list) 1) by 2 do 
        (format T "~A - ~D~%" 
               (nth x res-test)
               (nth (+ x 1) res-test))
  )
)

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
                (when (not retval) 
                    (progn 
                      (print "Failed to write data") 
                      return))))))

(defun read-equip-stats (pp-proc-info slot)
  "Read equipment stats"
  ; equip_address = (LPVOID)0x00AFAE54; GOG
  ; equip_address = (LPVOID)0x00AFB004; steam
  ; offsets from beginning of item struct
  (defparameter darkstone-armor-slots (list 'HEAD 0 'RING_L1 1 'RING_L2 2 'RING_R1  3 'RING_R2  4 'HAND_R  5 'HAND_L  6 'CHEST  7 'AMULET_L 8 'AMULET_R 9))
  (defparameter darkstone-item-struct-size #x19C) ; 0x19C=412
  (defparameter darkstone-item-stats-offsets
    (list 'NAME_1 #x0       'NAME_2 #x20        'NAME_3 #x40          'SPRITE #x66        'GOLD #xAC                                       
          'MIN_DMG #xB0     'MAX_DMG #xB2       'SPELL_EFFECT #xB6    'PHYS_EFFECT #xB8   'ARMOUR #xB4                                     
          'PERCENT_DMG #xBC 'PERCENT_HIT #xBE   'PERCENT_ARMOUR #xC0  'X_LOC #x17C        'Y_LOC #x180                                     
          'SPELL_LVL #xC4   'SPELL_ID 196       'STRENGTH 198         'MAGIC 200          'DEXTERITY 202                                   
          'VITALITY 204     'FIRE_RESIST 206    'POISON_RESIST 208    'MAGIC_RESIST 210   'MANA 212                                        
          'HEALTH 214       'LIGHT 216          'MIN_ADD_DMG 218      'MAX_ADD_DMG 220    'REQ_STRENGTH 226
          'REQ_MAGIC 228    'REQ_DEXTERITY 230  'REQ_VITALITY 232     'MAX_DURABILITY 240 'ITEM_ID 266))
  ; get process handle from **c-process-info-t
  (defparameter h-proc (pp-proc-info-get-h-process pp-proc-info))
  (defparameter ret-list nil)
  (defparameter item-slot-index (getf darkstone-armor-slots slot))
  ; iterate over stats and write to game if tag was found
  (loop for x from 0 to (- (length darkstone-item-stats-offsets) 1) by 2 do 
        (progn 
          (defparameter current-offset (getf darkstone-item-stats-offsets (nth x darkstone-item-stats-offsets)))
          (defparameter p-value (foreign-alloc :int16 :initial-element 0))
          (defparameter equip-addr #x00AFAE54)
          (setf equip-addr (+ equip-addr current-offset))
          (setf equip-addr (+ equip-addr (* darkstone-item-struct-size item-slot-index)))

          ; write 16-bit stat value to character addr
          (defparameter retval (read-process-memory h-proc equip-addr p-value 2 (null-pointer)))
          (setf ret-list (append ret-list (list (nth x darkstone-item-stats-offsets) (mem-aref p-value :int16))))
          (foreign-free p-value)
          (when (not retval) 
          (progn 
          (print "Failed to write data") 
          return))))
  (return-from read-equip-stats ret-list))

(defun write-equip-stats (pp-proc-info item-slot item-stat stat-value)
  "Write equipment stat value"
  ; equip_address = (LPVOID)0x00AFAE54; GOG
  ; equip_address = (LPVOID)0x00AFB004; steam
  ; offsets from beginning of item struct
  (defparameter darkstone-armor-slots (list 'HEAD 0 'RING_L1 1 'RING_L2 2 'RING_R1  3 'RING_R2  4 'HAND_R  5 'HAND_L  6 'CHEST  7 'AMULET_L 8 'AMULET_R 9))
  (defparameter darkstone-item-struct-size #x19C) ; 0x19C=412
  (defparameter darkstone-item-stats-offsets
    (list 'NAME_1 #x0       'NAME_2 #x20        'NAME_3 #x40          'SPRITE #x66        'GOLD #xAC                                       
          'MIN_DMG #xB0     'MAX_DMG #xB2       'SPELL_EFFECT #xB6    'PHYS_EFFECT #xB8   'ARMOUR #xB4                                     
          'PERCENT_DMG #xBC 'PERCENT_HIT #xBE   'PERCENT_ARMOUR #xC0  'X_LOC #x17C        'Y_LOC #x180                                     
          'SPELL_LVL #xC4   'SPELL_ID 196       'STRENGTH 198         'MAGIC 200          'DEXTERITY 202                                   
          'VITALITY 204     'FIRE_RESIST 206    'POISON_RESIST 208    'MAGIC_RESIST 210   'MANA 212                                        
          'HEALTH 214       'LIGHT 216          'MIN_ADD_DMG 218      'MAX_ADD_DMG 220    'REQ_STRENGTH 226
          'REQ_MAGIC 228    'REQ_DEXTERITY 230  'REQ_VITALITY 232     'MAX_DURABILITY 240 'ITEM_ID 266))
  ; get process handle from **c-process-info-t
  (defparameter h-proc (pp-proc-info-get-h-process pp-proc-info))
  (defparameter item-slot-index (getf darkstone-armor-slots item-slot))
  (defparameter p-value (foreign-alloc :int16 :initial-element stat-value))

  ; address to write value
  (defparameter equip-addr #x00AFAE54)
  (setf equip-addr (+ equip-addr (getf darkstone-item-stats-offsets item-stat)))
  (setf equip-addr (+ equip-addr (* darkstone-item-struct-size item-slot-index)))
  (print "addr")
  (print-as-hex (list equip-addr) 4)

  ; write 16-bit stat value to character addr
  (defparameter retval (write-process-memory h-proc equip-addr p-value 2 (null-pointer)))

  ; free memory
  (foreign-free p-value)

  ; return error if failed
  (if retval
  (print "Sucessfully wrote item data") 
  (print "Failed to write data")))

(defun write-cursor-item-stat (pp-proc-info item-stat stat-value)
  "Write stat values for item on cursor"
  ; cursor_item_address = 0x009BC2A8; ; GOG
  ; offsets from beginning of item struct
  (defparameter darkstone-item-stats-offsets
    (list 'NAME_1 #x0       'NAME_2 #x20        'NAME_3 #x40          'SPRITE #x66        'GOLD #xAC                                       
          'MIN_DMG #xB0     'MAX_DMG #xB2       'SPELL_EFFECT #xB6    'PHYS_EFFECT #xB8   'ARMOUR #xB4                                     
          'PERCENT_DMG #xBC 'PERCENT_HIT #xBE   'PERCENT_ARMOUR #xC0  'X_LOC #x17C        'Y_LOC #x180                                     
          'SPELL_LVL #xC4   'SPELL_ID 196       'STRENGTH 198         'MAGIC 200          'DEXTERITY 202                                   
          'VITALITY 204     'FIRE_RESIST 206    'POISON_RESIST 208    'MAGIC_RESIST 210   'MANA 212                                        
          'HEALTH 214       'LIGHT 216          'MIN_ADD_DMG 218      'MAX_ADD_DMG 220    'REQ_STRENGTH 226
          'REQ_MAGIC 228    'REQ_DEXTERITY 230  'REQ_VITALITY 232     'MAX_DURABILITY 240 'ITEM_ID 266))
  ; get process handle from **c-process-info-t
  (defparameter h-proc (pp-proc-info-get-h-process pp-proc-info))
  (defparameter p-value (foreign-alloc :int16 :initial-element stat-value))

  ; address to write value
  (defparameter equip-addr #x009BC2A8)
  (setf equip-addr (+ equip-addr (getf darkstone-item-stats-offsets item-stat)))
  (print "addr")
  (print-as-hex (list equip-addr) 4)

  ; write 16-bit stat value to character addr
  (defparameter retval (write-process-memory h-proc equip-addr p-value 2 (null-pointer)))

  ; free memory
  (foreign-free p-value)

  ; return error if failed
  (if retval
  (print "Sucessfully wrote item data") 
  (print "Failed to write data")))

; change amount of gold held in cursor to max
(defparameter item-stat 'GOLD)
; (defparameter item-stat-value #x7FFF)
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

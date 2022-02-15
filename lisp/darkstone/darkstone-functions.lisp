(in-package :lisp-memscan)

(defparameter darkstone-spell-offsets
  (list 
    'CONFUSION #x00
    'HEALING   #x10
    'FEAR      #x20
    'THUNDER   #x30
    'SLOWNESS #x40
    'FIREWALL #x50
    'MUTATION #x60
    'STONE #x70
    'NIGHTVISION #x80
    'HASTE #x90
    'MAGICMISSILE #xA0
    'FIREBALL #xB0
    'ABSORPTION #xC0
    'ANTIDOTE #xD0
    'FLAMETHROWER #xE0
    'STORM #xF0
    'INVIS #x100
    'DEATHDOME #x110
    'INVOCATION #x120
    'SPARK #x130
    'TELEPORT #x140
    'DETECT #x150
    'FOOD #x160
    'BERSERKER #x170
    'FORGETFULNESS #x180
    'REFLECTIONS #x190
    'MAGICBOMB #x1A0
    'MAGICDOOR #x1B0
    'POISONCLOUD #x1C0
    'RESURRECTION #x1D0
    'TELEKINESIS #x1E0
    'LIGHT #x1F0))

(defparameter darkstone-skill-offsets
  (list 
    'IDENTIFICATION #x200
    'TRADE #x210
    'REPAIR #x220
    'PERCEPTION #x230
    'DEFUSING #x240
    'FORESTER #x250
    'LEARNING #x260
    'THEFT #x270
    'SILENCE #x280
    'MEDITATION #x290
    'CONCENTRATION #x2A0
    'ORIENTATION #x2B0
    'MEDICINE #x2C0
    'RECHARGING #x2D0
    'EXORCISM #x2E0
    'PRAYER #x2F0
    'DETECTION #x300
    'MASTEROFARMS #x310
    'COMMUNIONMONK #x320
    'COMMUNIONWIZARD #x330
    'LANGUAGE #x340
    'LYCANTHROPY #x350))

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
  ; cursor_item_address = 0x009BC2A8; GOG
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

  ; write 16-bit stat value to character addr
  (defparameter retval (write-process-memory h-proc equip-addr p-value 2 (null-pointer)))

  ; free memory
  (foreign-free p-value)

  ; return error if failed
  (if retval
    (print "Sucessfully wrote item data") 
    (print "Failed to write data")))

(defun write-spell-level (pp-proc-info spell-name spell-level)
  "Write spell level"
  ; spell_address = (LPVOID)0x00AFA034; GOG
  ; spell_address = (LPVOID)0x00AFA1E4; Steam

  ; get process handle from **c-process-info-t
  (defparameter h-proc (pp-proc-info-get-h-process pp-proc-info))
  (defparameter p-value (foreign-alloc :int16 :initial-element spell-level))
  (defparameter p-zero-value (foreign-alloc :uint32 :initial-element 0))

  ; address of spell level
  (defparameter spell-addr #x00AFA034)
  (setf spell-addr (+ spell-addr (getf darkstone-spell-offsets spell-name)))

  ; address of spell timer
  (defparameter spell-timer-addr (+ spell-addr 12))

  ; write 16-bit spell level
  (defparameter retval (write-process-memory h-proc spell-addr p-value 2 (null-pointer)))
  ; return error if failed
  (if retval
    (print "Sucessfully wrote spell data") 
    (print "Failed to write data"))

  ; write 32-bit spell timer value
  (defparameter retval (write-process-memory h-proc spell-timer-addr p-zero-value 4 (null-pointer)))
  (if retval
    (print "Sucessfully wrote spell data") 
    (print "Failed to write data"))

  ; free memory
  (foreign-free p-value)
  (foreign-free p-zero-value))

(defun write-skill-level (pp-proc-info skill-name skill-level)
  "Write skill level"
  ; skill_address = (LPVOID)0x00AFA034; GOG
  ; skill_address = (LPVOID)0x00AFA1E4; Steam

  ; get process handle from **c-process-info-t
  (defparameter h-proc (pp-proc-info-get-h-process pp-proc-info))
  (defparameter p-value (foreign-alloc :int16 :initial-element skill-level))
  (defparameter p-zero-value (foreign-alloc :uint32 :initial-element 0))

  ; address of skill level
  (defparameter skill-addr #x00AFA034)
  (setf skill-addr (+ skill-addr (getf darkstone-skill-offsets skill-name)))

  ; address of skill timer
  (defparameter skill-timer-addr (+ skill-addr 12))

  ; write 16-bit skill level
  (defparameter retval (write-process-memory h-proc skill-addr p-value 2 (null-pointer)))
  ; return error if failed
  (if retval
    (print "Sucessfully wrote skill data") 
    (print "Failed to write data"))

  ; write 32-bit skill timer value
  (defparameter retval (write-process-memory h-proc skill-timer-addr p-zero-value 4 (null-pointer)))
  (if retval
    (print "Sucessfully wrote skill data") 
    (print "Failed to write data"))

  ; free memory
  (foreign-free p-value)
  (foreign-free p-zero-value))


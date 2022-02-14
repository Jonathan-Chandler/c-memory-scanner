(quicklisp:quickload "cffi")
(ql:quickload "iterate")

;;;;;; set up new package lisp-memscan using cffi lib
(defpackage :lisp-memscan 
  (:use :common-lisp :cffi))
;  (:use :common-lisp :cffi :iterate) 

; export function names in external C library
(in-package :lisp-memscan)

; load memory scan dll
(cffi:load-foreign-library "memscan.dll")

;(cffi:defcstruct (c-proc-info-t :class proc-info-t)
;  (h-window :uint32)
;  (h-process :uint32)
;  (dw-process-id :uint32))

(cffi:defcstruct proc-info-t
  (h-window :uint32)
  (h-process :uint32)
  (dw-process-id :uint32))

(cffi:defcstruct mem-page-t
  (lp-base-addr :uint32)
  (n-size :uint32)
  (pc-buffer :pointer))

; int proc_info_init(proc_info_t **ppProcInfo, const char *pszWindowTitle);
;   @param ppPage[in out]     - Address where the pointer to this struct will be stored
;   @param pszWindowTitle[in] - Name of window to get handle for
;
;   @return       0 - Success
;           -EINVAL - Received bad param
;           -ENXIO  - Fail to get handle process
;           -ENOMEM - Failed to allocate memory
(cffi:defcfun ("proc_info_init" proc-info-init) :int32
  "Initialize process information and get handle from window title" 
  (pp-proc-info     :pointer)
  (psz-window-title :string))

;int proc_info_destroy(proc_info_t **pProcInfo);
;   @param ppPage[out] - Address of pointer to process info struct
;
;   @return       0 - Success
;           -EINVAL - Received bad param
(cffi:defcfun ("proc_info_destroy" proc-info-destroy) :int32
  "Close process handle and free memory for process information" 
  (pp-proc-info     :pointer))

; int mem_page_init(mem_page_t **ppPage, SIZE_T nSize);
;   @param ppPage[in out] - Address where the pointer to this struct will be stored
;   @param nSize[in] - Size in bytes of page to allocate
;
;   @return       0 - Success
;           -EINVAL - Received bad param
;           -ENOMEM - Failed to allocate page container or buffer
(cffi:defcfun ("mem_page_init" mem-page-init) :int32
  "Initialize container to hold a memory page" 
  (pp-mem-page :pointer)
  (n-size :uint32))

; int mem_page_destroy(mem_page_t **ppMemPage)
;   @param ppPage[in out] - Address of the pointer to the mem_page_t that will be destroyed (is set to null)
;
;   @return       0 - Success
;           -EINVAL - Received bad pointer
;           -ENXIO  - Failed to deallocate page container or buffer
(cffi:defcfun ("mem_page_destroy" mem-page-destroy) :int32
  "Deallocate memory used by memory page"
  (pp-mem-page :pointer))

; int mem_mgr_init(mem_mgr_t **ppMgr);
;   @param ppMgr out] - Address where the pointer to this struct will be stored
;
;   @return       0 - Success
;           -EINVAL - Received bad param
;           -ENOMEM - Failed to allocate page container or buffer
(cffi:defcfun ("mem_mgr_init" mem-mgr-init) :int32
  "Initialize container to hold a memory manager" 
  (pp-mem-mgr :pointer))

; int mem_mgr_destroy(mem_mgr_t **ppMgr)
;   @param ppMgr[in out] - Address of the pointer to the mem_mgr_t that will be destroyed (is set to null)
;
;   @return       0 - Success
;           -EINVAL - Received bad pointer
;           -ENXIO  - Failed to deallocate page container or buffer
(cffi:defcfun ("mem_mgr_destroy" mem-mgr-destroy) :int32
  "Deallocate memory used by memory manager"
  (pp-mem-mgr :pointer))

; int mem_mgr_load_proc(mem_mgr_t *pMgr, proc_info_t *pProcInfo)
;   @param pMgr[in out] - Pointer to the mem_mgr_t to add process memory pages
;   @param pProcInfo[in] - Pointer to process to load memory pages from
;
;   @return       0 - Success
;           -EINVAL - Received bad pointer
;           -ENXIO  - Failed to deallocate page container or buffer
(cffi:defcfun ("mem_mgr_load_proc" mem-mgr-load-proc) :int32
  "Load memory pages from process"
  (p-mem-mgr :pointer)
  (p-proc-info :pointer))


; int mem_mgr_page_search(mem_mgr_t *pMgr, const SIZE_T nSearchDataLength, const char *pSearchData, 
;                           LPCVOID nStartAddress, bool *pbFoundPage, LPCVOID *pFoundAddress);
;   @param pMgr[in] - Pointer to the mem_mgr_t
;   @param nSearchDataLength[in] - Length of search data in bytes
;   @param pSearchData[in] - Pointer to search data
;   @param nStartAddress[in] - Address to start the search (0 for first match)
;   @param pbFoundPage[out] - Set to true if found search data
;   @param pFoundAddress[out] - Set to address of found data
;
;   @return       0 - Success
;           -EINVAL - Received bad pointer
;           -ENXIO  - Failed to deallocate page container or buffer
(cffi:defcfun ("mem_mgr_page_search" mem-mgr-page-search) :int32
  "Search pages using memory manager"
  (p-mem-mgr :pointer)
  (nSearchDataLength :uint32)
  (pSearchData :string)
  (nStartAddress :uint32)
  (pbFoundPage :pointer)
  (pFoundAddress :pointer))
  
(defmacro create-pointer-to (x y)
  `(defparameter ,x (cffi:foreign-alloc :pointer :initial-element ,y)))

;; get process handle given window title
(defun process-handle-open (window-title)
  ; convert to c string
  (defparameter c-window-title (convert-to-foreign window-title :string))
  ; create pointer to pointer for process info
  (defparameter pp-proc-info (foreign-alloc :pointer))
  ; initialize process info and deallocate title c-string 
  (defparameter retval (proc-info-init pp-proc-info c-window-title))
  ; deallocate c string
  (free-converted-object c-window-title :string t)
  ; return value or print error
  (if (= retval 0)
  (return-from process-handle-open pp-proc-info)
  (format t "Failed to get process handle: ~d" retval)))

;; destroy process info
(defun process-handle-close (pp-proc-info)
  (defparameter retval (proc-info-destroy pp-proc-info))
  (if (= retval 0)
    ( (foreign-free pp-proc-info)
      (return-from process-handle-close pp-proc-info))
    (format t "Failed to close process handle: ~d" retval)))

(defun print-as-hex (value-list byte-count)
  (loop for x in value-list
        do (format T "~v,'0x " (* 2 byte-count) x))
)

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

;; use memory manager to search for a string
(defun search-for-string (pp-mem-mgr lisp-search string-len)
  (with-foreign-pointer-as-string (p-search (+ 1 string-len))
    (lisp-string-to-foreign lisp-search p-search (+ 1 string-len))
    (defparameter ret-list nil)
    (defparameter pb-found-page (foreign-alloc :bool :initial-element T))
    (defparameter p-found-addr (foreign-alloc :uint32 :initial-element 0))
    (defparameter start-addr (mem-aref p-found-addr :uint32))
    (loop while (mem-aref pb-found-page :bool)
          do (progn (mem-mgr-page-search (mem-aref pp-mem-mgr :pointer) string-len p-search start-addr pb-found-page p-found-addr)
                    ; add to address to list if found match
                    (if (mem-aref pb-found-page :bool) 
                      (defparameter ret-list (append ret-list (list (mem-aref p-found-addr :uint32)))))
                    (defparameter start-addr (+ 1 (mem-aref p-found-addr :uint32)))
                    ))
    (return-from search-for-string ret-list)
    )
  )
(defparameter lisp-search-test (string "OAOUE"))
(defparameter string-search-res (search-for-string pp-mem-mgr lisp-search-test 5))
(print-as-hex string-search-res 4)

;; use memory manager to search for a byte array
(defun search-for-bytes (pp-mem-mgr byte-array byte-count)
  (defparameter ret-list nil)
  (defparameter p-byte-array (foreign-alloc :uint8 :initial-contents byte-array))
  (defparameter pb-found-page (foreign-alloc :bool :initial-element T))
  (defparameter p-found-addr (foreign-alloc :uint32 :initial-element 0))
  (defparameter start-addr (mem-aref p-found-addr :uint32))
  (loop while (mem-aref pb-found-page :bool)
        do (progn (defparameter retval (mem-mgr-page-search (mem-aref pp-mem-mgr :pointer) byte-count p-byte-array start-addr pb-found-page p-found-addr))
                  ; break on failure
                  (if (/= retval 0) ((format T "Search failed with error ~D~%") (return)))

                  ; add to address to list if found match
                  (if (mem-aref pb-found-page :bool) (setf ret-list (append ret-list (list (mem-aref p-found-addr :uint32)))))

                  ; continue the search starting after the last address
                  (setf start-addr (+ 1 (mem-aref p-found-addr :uint32)))
                  ))

  ; deallocate and then return result
  (foreign-free p-byte-array)
  (foreign-free pb-found-page)
  (foreign-free p-found-addr)
  (return-from search-for-bytes ret-list)
  )

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








;(defparameter result (search-for-bytes pp-mem-mgr byte-array-test 3))
;(write result)
;(search-for-bytes pp-mem-mgr string-test 3)
;(search-for-bytes pp-mem-mgr byte-array-test 3)

;      do (format T "~v,'0x " 2 x))


;  (loop for i from 0 below byte-count collect (mem-aref c-byte-array :uint8 i))

;    (lisp-string-to-foreign lisp-search p-search (+ 1 string-len))
;    (defparameter ret-list nil)
;    (defparameter pb-found-page (foreign-alloc :bool :initial-element T))
;    (defparameter p-found-addr (foreign-alloc :uint32 :initial-element 0))
;    (defparameter start-addr (mem-aref p-found-addr :uint32))
;    (loop while (mem-aref pb-found-page :bool)
;          do (progn (mem-mgr-page-search (mem-aref pp-mem-mgr :pointer) string-len p-search start-addr pb-found-page p-found-addr)
;                    ; add to address to list if found match
;                    (if (mem-aref pb-found-page :bool) 
;                      (defparameter ret-list (append ret-list (list (mem-aref p-found-addr :uint32)))))
;                    (defparameter start-addr (+ 1 (mem-aref p-found-addr :uint32)))
;                    ))
;    (return-from search-for-string ret-list)
;    )
;  )

; (defun print-as-hexadecimal (number-to-format number-of-digits)
;(defparameter value-list (list 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15))


;(validate-byte-array value-list)
;(defun validate-byte-array (value-list)
;  (loop for x in value-list
;        do (if (> x 255)
;               (return-from validate-byte-array -1)))
;  (return-from validate-byte-array 0))

;(defparameter ret-list (list nil))
;;;;;;;;(defparameter test (search-for-string pp-mem-mgr lisp-search 5))
           ;(defparameter ret-list (cons ret-list (mem-aref p-found-addr :uint32)))
           ;(collect (ret-list (mem-aref p-found-addr :uint32)))

           ;(collect (ret-list (mem-aref p-found-addr :uint32)))
           ;(defparameter ret-list (collect (ret-list (mem-aref p-found-addr :uint32))))
           ;(defparameter ret-list (cons ret-list (mem-aref p-found-addr :uint32)))

           ;;;(defparameter pb-found-page (foreign-alloc :bool :initial-element nil))

           ;(setq pb-found-page (foreign-alloc :bool :initial-element 0))
            ; start search at the last found addr + 1
            ;(defparameter start-addr )
            ;(defparameter start-addr (+ (mem-aref p-found-addr :uint32) 1))
            ;(defparameter start-addr (mem-aref p-found-addr :pointer))
            ;(setq start-addr (+ 1 (mem-aref p-found-addr :pointer)))
;  (pSearchData :string)
;  (nStartAddress :uint32)
;  (pbFoundPage :pointer)
;  (pFoundAddress :pointer))

           ;(if < retval 0) return;
;;;;;;
;;;;;;     (print (mem-mgr-page-search (mem-aref pp-mem-mgr :pointer) string-len p-search 0 pb-found-page p-found-addr))
;;;;;;     (print "found: ")
;;;;;;     (print (mem-aref pb-found-page :bool))
;;;;;;     (print "pfound: ")
;;;;;;     ;(print (mem-aref (mem-aref pb-found-page :pointer) :pointer))
;;;;;;     (print "addr: ")
;;;;;;     (print (mem-aref p-found-addr :int))
;;;;;;     (print (mem-aref p-found-addr :pointer))
;;;;;;     (defparameter start-addr (+ 1 (mem-aref p-found-addr :int)))
;;;;;;     ;(+ start-addr 1)
;;;;;;     (print "mem-search2")
;;;;;;     (print (mem-mgr-page-search (mem-aref pp-mem-mgr :pointer) string-len p-search start-addr pb-found-page p-found-addr))
;;;;;;     (print "found2: ")
;;;;;;     (print (mem-aref pb-found-page :bool))
;;;;;;     (print "addr2: ")
;;;;;;     (print (mem-aref p-found-addr :pointer))
;;;;;;     ;(print p-found-addr)
;;;;;;;     (print "paddr: ")
;;;;;;;     (print (mem-aref p-found-addr :int))
;;;;;;     ))
;;;;;;;;;;;;;;;;;;;;;;;;(loop while (>= row 0) 
;;;;;;;;;;;;;;;;;;;;;;;;  do (setf row (- row 1))           ; or better: do (decf row)
;;;;;;;;;;;;;;;;;;;;;;;;  collect (findIndex row col))

;   @param pMgr[in] - Pointer to the mem_mgr_t
;   @param nSearchDataLength[in] - Length of search data in bytes
;   @param pSearchData[in] - Pointer to search data
;   @param nStartAddress[in] - Address to start the search (0 for first match)
;   @param pbFoundPage[out] - Set to true if found search data
;   @param pFoundAddress[out] - Set to address of found data






;;;;(defun lisp-to-c-arr (search-buffer buffer-len)
;;;;  (with-foreign-array (ptr search-buffer `(:array :uint8 ,buffer-len))
;;;;    (let ((displaced (foreign-array-to-lisp ptr `(:array :uint8 ,buffer-len)))))))

;(defun search-for-string-test (lisp-search string-len)
;  (with-foreign-pointer-as-string (p-search-val string-len)
;    ((lisp-string-to-foreign lisp-search p-search-val string-len)
;     (print (foreign-funcall "strlen" :string str :int))
;     ;(mem-mgr-page-search p-mem-mgr string-len p-search-val 0 pb-found-page p-found-addr)
;     )))
;;;;;;;;;;(defun search-for-string-test (lisp-search string-len)
;;;;;;;;;;  (with-foreign-pointer-as-string (p-search string-len)
;;;;;;;;;;    (lisp-string-to-foreign lisp-search p-search string-len)
;;;;;;;;;;    (print (foreign-funcall "strlen" :string p-search :int))
;;;;;;;;;;     ;(mem-mgr-page-search p-mem-mgr string-len p-search-val 0 pb-found-page p-found-addr)
;;;;;;;;;;     ))
;;;;;;;;;;(search-for-string-test lisp-search 6)
;;;;;;;;;;
;;;;;;;;;;(defparameter lisp-search (string "OAOUE"))
;;;;;;;;;;(with-foreign-pointer-as-string (p-string 6)
;;;;;;;;;;    (lisp-string-to-foreign lisp-search p-string 6)
;;;;;;;;;;     (print (foreign-funcall "strlen" :string p-string :int))
;;;;;;;;;;     )
;;;;;;;;;;     ;(mem-mgr-page-search p-mem-mgr string-len p-search-val 0 pb-found-page p-found-addr)
;;;;;;;;;;(defparameter p-int (foreign-alloc :uint32))
;;;;;;;;;;;;     (defparameter retval (mem-mgr-page-search p-mem-mgr string-len p-search-val 0 pb-found-page p-found-addr))
;;;;;;;;;;;;     (print retval))))
;;;;;;;;;;
;;;;;;;;;;;;;;;;(cffi:defcfun ("mem_mgr_page_search" mem-mgr-page-search) :int32
;;;;;;;;;;;;;;;;  "Search pages using memory manager"
;;;;;;;;;;;;;;;;  (p-mem-mgr :pointer)
;;;;;;;;;;;;;;;;  (nSearchDataLength :uint32)
;;;;;;;;;;;;;;;;  (pSearchData :string)
;;;;;;;;;;;;;;;;  (nStartAddress :uint32)
;;;;;;;;;;;;;;;;  (pbFoundPage :pointer)
;;;;;;;;;;;;;;;;  (pFoundAddress :pointer))
;;;;;;;;;;
;;;;;;;;;;
;;;;;;;;;;; initialize mem manager
;;;;;;;;;;(defparameter pp-mem-mgr (foreign-alloc :pointer))
;;;;;;;;;;(mem-mgr-init pp-mem-mgr)
;;;;;;;;;;
;;;;;;;;;;(defparameter p-mem-mgr (cffi:mem-aref pp-mem-mgr :pointer))
;;;;;;;;;;(defparameter p-proc-info (cffi:mem-aref pp-proc-info :pointer))
;;;;;;;;;;
;;;;;;;;;;; p-search-val
;;;;;;;;;;(cffi:mem-aref pp-search-val :pointer) (cffi:mem-aref pp-proc-info :pointer)
;;;;;;;;;;;(mem-mgr-load-proc p-mem-mgr p-proc-info)
;;;;;;;;;;(mem-mgr-load-proc (cffi:mem-aref pp-mem-mgr :pointer) (cffi:mem-aref pp-proc-info :pointer))
;;;;;;;;;;;(mem-mgr-load-proc (cffi:mem-aref pp-search-val :pointer) (cffi:mem-aref pp-proc-info :pointer))
;;;;;;;;;;
;;;;;;;;;;;;(let ((array (make-array 10 :initial-contents '(1 2 3 4 5 6 7 8 9 0))))
;;;;;;;;;;;;  (with-foreign-array (ptr #(10 20 30 40 50) '(:array :uint8 5))))
;;;;;;;;;;
;;;;;;;;;;;;(defparameter lisp-arr (make-array 10 :initial-contents '(1 2 3 4 5 6 7 8 9 0)))
;;;;;;;;;;
;;;;;;;;;;;(search-for-string lisp-search 6)
;;;;;;;;;;
;;;;;;;;;;;;;(mem-mgr-page-search )
;;;;;;;;;;
;;;;;;;;;;;  (pp-mem-mgr :pointer)
;;;;;;;;;;;  (nSearchDataLength :uint32)
;;;;;;;;;;;  (pSearchData :string)
;;;;;;;;;;;  (nStartAddress :uint32)
;;;;;;;;;;;  (pbFoundPage :pointer)
;;;;;;;;;;;  (pFoundAddress :pointer))
;;;;;;;;;;
;;;;;;;;;;;;;(defun lisp-to-c-arr (search-buffer buffer-len)
;;;;;;;;;;;;;  (with-foreign-array (ptr search-buffer `(:array :uint8 ,buffer-len))
;;;;;;;;;;;;;    (let ((displaced (foreign-array-to-lisp ptr '(:array :int32 5)
;;;;;;;;;;;;;                                                :displaced-to array
;;;;;;;;;;;;;                                                :displaced-index-offset 5))))))
;;;;;;;;;;
;;;;;;;;;;;  (with-foreign-array (ptr #(10 20 30 40 50) '(:array :uint8 5))))
;;;;;;;;;;
;;;;;;;;;;;ptr
;;;;;;;;;;
;;;;;;;;;;;  (let ((displaced (foreign-array-to-lisp ptr '(:array :int32 5)
;;;;;;;;;;;                                                :displaced-to array
;;;;;;;;;;;                                                :displaced-index-offset 5)))
;;;;;;;;;;
;;;;;;;;;;;(defparameter lisp-search (list 'O' 'A' 'O' 'U' 'E'))
;;;;;;;;;;;(defparameter lisp-search (string "OAOUE"))
;;;;;;;;;;;(char lisp-search 1)
;;;;;;;;;;;(defparameter p-search-val (cffi:foreign-alloc :unsigned-char :count 10))
;;;;;;;;;;;;;;;;;(setf (cffi:mem-aref p-search-val :unsigned-char 0) 10)
;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;(setf (cffi:mem-aref p-search-val :unsigned-char 0) 10)
;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;(loop for n from 0 below 5 by 1 
;;;;;;;;;;;;      collect n)
;;;;;;;;;;;;(loop for n from 0 below 5 by 1 
;;;;;;;;;;;;      print n)
;;;;;;;;;;
;;;;;;;;;;;;(defparameter lisp-search2 '(a b c d))
;;;;;;;;;;;;(nth 1 'lisp-search2)
;;;;;;;;;;;;
;;;;;;;;;;;;(dotimes (n 10)
;;;;;;;;;;;;  (print n))
;;;;;;;;;;;;
;;;;;;;;;;;;(lisp-search 2)
;;;;;;;;;;
;;;;;;;;;;
















;;;;;;;(dotimes (n 5)
;;;;;;;      (setf (cffi:mem-aref p-search-val :unsigned-char n) (code-char (lisp-search n))))
;;;;;;;
;;;;;;;(dotimes (n 5)
;;;;;;;      (setf (cffi:mem-aref p-search-val :unsigned-char n) (code-char (lisp-search2 n))))







; p-search-val5


;(dotimes (n 5)
;      (setf (cffi:mem-aref p-search-val :unsigned-char n) (char lisp-search n)))

;;(loop for n from 0 below 5 by 1 
;(dotimes (n 5)
;      (setf (cffi:mem-aref p-search-val :unsigned-char n) (char lisp-search n)))
;;;;;;;
;;;;;;;(loop for n from 0 below 5 by 1
;;;;;;;    collect n)
;; access *p* as an array of bytes and set its 0th element to 10

;(mem-aref (mem-ref process-handle :pointer) :pointer 2) ; read process id


;;;(defun test-loop2 (somelist)
;;;    (loop for i in somelist
;;;          do (format t "0x~X~%" i)))

;(setf params (with-foreign-object (pp-proc-info `(:struct c-proc-info-t))
;  (with-foreign-slots ((h-window h-process dw-process-id) pp-proc-info (:struct c-proc-info-t)) 
;    (list h-window h-process dw-process-id))))

;;;;(setf p-test-proc-info pp-proc-info)
;;;;(setf p-test-proc-info (mem-aref pp-proc-info :pointer))
;;;;(setf p-test-proc-info (mem-aref (mem-ref pp-proc-info :pointer) :pointer 1))
;;;;(setf p-test-proc-info (mem-aref (mem-ref (mem-ref pp-proc-info :pointer) :pointer) :pointer))
;;;;
;;;;(cffi:defcstruct proc-info-t
;;;;  (h-window :uint32)
;;;;  (h-process :uint32)
;;;;  (dw-process-id :uint32))
;;;;
;;;;(with-foreign-object (p-test-proc-info `(:struct proc-info-t))
;;;;  (with-foreign-slots ((h-window h-process dw-process-id) p-test-proc-info (:struct proc-info-t)) 
;;;;    (list h-window h-process dw-process-id)))

;(defun test-translations (pp-proc-info)
;  (with-foreign-object (pp-proc-info `(:struct c-proc-info-t))
;    (with-foreign-slots ((h-window h-process dw-process-id) pp-proc-info (:struct c-proc-info-t)) 
;      (list h-window h-process dw-process-id))))

;;;;(defun test-translations (pp-proc-info)
;;;;  (with-foreign-object (pp-proc-info `(:struct proc-info-t))
;;;;    (with-foreign-slots ((h-window h-process dw-process-id) pp-proc-info (:struct proc-info-t)) 
;;;;      (list h-window h-process dw-process-id))))
;;;;
;;;;
;;;;(test-translations pp-proc-info)
;;;;(test-translations (mem-ref pp-proc-info :pointer))
;;;;(setf test-val-list (test-translations (mem-ref pp-proc-info :pointer)))
;;;;
;;;;(test-loop2 test-val-list)

;;;;;(defmethod translate-from-foreign (pointer (type c-proc-info-t))
;;;;;  (foreign-int-to-lisp pointer :encoding (string-type-encoding type)))
;;;;;  (foreign-string-to-lisp pointer :encoding (string-type-encoding type)))

;(defmethod translate-from-foreign (pointer (type proc-info-t))
;  (with-foreign-slots ((h-window h-process dw-process-id) pointer (:struct c-proc-info-t))
;    ;; You can change this and get return value in other format
;    ;; for example: (values width height)
;    (list h-window h-process dw-process-id)))
;
;(defparameter lisp-proc `(1 2))
;(translate-from-foreign pp-proc-info)

; read elements
;(cffi:defcstruct proc-info-t
;  (h-window :uint32)
;  (h-process :uint32)
;  (dw-process-id :uint32))
;;(with-foreign-slots ((h-window) (inc-pointer ptr 0) (:struct person))
;;  (setf number (lisp-person-number #:store887)
;;        reason (lisp-person-reason #:store887))) #:store887)
;;(convert-from-foreign)
;;(mem-ref pp-proc-info :pointer))
;;;;(translate-from-foreign ((pp-proc-info)

;(foreign-funcall "strlen" :pointer c-window-title :int)

;     with-foreign-object (page-ptr 'mem-page-t)
;(defun print-mem-page (page-ptr)
;    (with-foreign-object (page-ptr '(:pointer (:struct mem-page-t)))
;    (format t "page-vt ~d~%" (foreign-slot-value page-ptr 'mem-page-t 'lp-base-addr))
;  ))
;(print-mem-page (mem-ref pp-mem-page :pointer))

;(foreign-free)
;(defun store (par)
;  (format t "I'm comparing ~a~%" par))
;
;(defun print-int (val)
;  (format t "print integer - ~D~%" val))
;
;(store "abc")
;
;(print-int 5)
;
;(defparameter thislist `(1 2 3 4 6))
;(setf thislist `(1 2 3 4 6))
;(setf thislist2 `(5 6))
;(setq thislist (append thislist (append thislist2 `(1 2 3)) ))

;(test-loop2 thislist)


;(defun get-mem-pages (process-info)
;  (setf (mem-aref ptr '(:struct person)) x)
;  )


;  (loop for x in '(1 2 3)
;  do (print x))
;)

;(defun store (par)
;  (format t "I'm comparing ~a~%" par))

;(defun print-mem-page 
;    ((with-foreign-object (page-ptr '(:pointer (:struct mem-page-t)))))
;    (format t "page-vt ~d~%" (foreign-slot-value page-ptr 'mem-page-t 'lp-base-addr)))
;      lp-base-addr

;  (page-ptr (:pointer (:struct mem-page-t)))
;(defun print-mem-page (page-ptr)
;    (format t "result addr: ~d~%" (mem-aref page-ptr :pointer))
;  )


;(with-foreign-object (ptr 'mem-page-t)
;  ;; Initialize the slots
;  (setf test (foreign-slot-value ptr 'mem-page-t 'lp-base-addr))
;  )
;
;(with-foreign-object (ptr 'mem-page-t)
;  ;; Initialize the slots
;  (setf (foreign-slot-value ptr 'mem-page-t 'lp-base-addr) 32)
;  )

;    (foreign-funcall "prefix_name"
;                     :pointer rich
;                     :pointer (callback print-prefixed-person)
;                     :void))
;;; define the implementation of the callback
;  (lp-base-addr :uint32)
;  (n-size :uint32)
;  (pc-buffer :pointer))

;(defcallback print-mem-page :void
;    ((ptr (:pointer (:struct mem-page-t))))
;    (with-foreign-slots ((lp-base-addr n-size pc-buffer) ptr (:struct person))
;    (format t "Name: ~d, Gender: ~d, Age: ~d~%" lp-base-addr n-size pc-buffer)))


;  CFFI> (with-foreign-object (ptr 'point)
;          ;; Initialize the slots
;          (setf (foreign-slot-value ptr 'point 'x) 42
;                (foreign-slot-value ptr 'point 'y) 42)
;          ;; Return a list with the coordinates
;          (with-foreign-slots ((x y) ptr point)
;            (list x y)))
;  ⇒ (42 42)

; deallocate **mem_page
;(setf retval (mem-page-destroy pp-mem-page))



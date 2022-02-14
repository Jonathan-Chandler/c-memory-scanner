(quicklisp:quickload "cffi")
(ql:quickload "iterate")

;;;;;; set up new package lisp-memscan using cffi lib
(defpackage :lisp-memscan 
  (:use :common-lisp :cffi))
;  (:use :common-lisp :cffi :iterate) 

; export function names in external C library
(in-package :lisp-memscan)

; load memoryscan/user32 dll
(cffi:load-foreign-library "memscan.dll")
(cffi:load-foreign-library "user32.dll")

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

(load "lisp/test.lisp")
(test-load-lisp "abc")


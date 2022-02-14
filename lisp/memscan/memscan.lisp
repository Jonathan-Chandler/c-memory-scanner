(in-package :lisp-memscan)

(cffi:load-foreign-library "memscan.dll")
(load "memscan/memscan-c-structs.lisp")
(load "memscan/memscan-c-functions.lisp")

(defun search-for-bytes (pp-mem-mgr byte-array byte-count)
  "Use memory manager to search for an array of bytes, returns list of addresses where matching bytes are found"
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

(defun search-for-string (pp-mem-mgr lisp-search string-len)
  "Use memory manager to search for string, returns a list of addresses where string was found"
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


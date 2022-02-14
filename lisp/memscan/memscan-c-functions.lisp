(in-package :lisp-memscan)

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


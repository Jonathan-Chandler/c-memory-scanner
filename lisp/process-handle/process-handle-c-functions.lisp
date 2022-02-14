(in-package :lisp-memscan)

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


(defpackage :win-api
  (:use :cl :cffi)
  (:export read-address
	   write-address
	   release-process
	   set-process
	   release-process))

(in-package :win-api)

(load-foreign-library "user32.dll")

(defctype HWND :uint32)

(defcfun ("FindWindowA" find-window) HWND (num :int) (name :string))

(defcfun ("GetWindowThreadProcessId" get-thread-pid) :uint32
  (hand HWND)
  (thread_pid :pointer))

(defcfun ("OpenProcess" open-process) :uint32
  (access-flag :uint32)
  (bool :bool)
  (pid :uint32))

(defcfun ("CloseHandle" close-handle) :bool
  (handle HWND))

(defun get-process-handle (process-name)
  (let* ((hand (find-window 0 process-name))
	 (thread-pid-ptr (foreign-alloc :int :initial-contents '(0)))
	 (temp (get-thread-pid hand thread-pid-ptr))
	 (process-id (open-process #x001F0FFF
				   nil
				   (mem-ref thread-pid-ptr :uint32))))
    (foreign-free thread-pid-ptr)
    process-id))

(defparameter *p-hndl* (get-process-handle "DarkStone DSI"))

(defun release-process ()
  (when (not (eql *p-hndl* 0))
    (close-handle *p-hndl*)
    (setf *p-hndl* 0)))

(defun set-process (process-name)
  (release-process)
  (setf *p-hndl* (get-process-handle process-name)))

(defcfun ("ReadProcessMemory" read-process-mem-impl) :bool
  (handle :uint32)
  (base-addr :uint32)
  (buffer :string)
  (size :uint32)
  (_ :uint32))

(defun read-address (address num-bytes)
  (with-foreign-string (buf "")
    (read-process-mem *p-hndl* address buf num-bytes)))

(defcfun ("WriteProcessMemory" write-process-mem-impl) :bool
  (handle :uint32)
  (base-addr :uint32)
  (buffer :string)
  (size :uint32)
  (_ :uint32))

(defcfun ("WriteProcessMemory" write-process-mem-impl2) :bool
  (handle :uint32)
  (base-addr :uint32)
  (buffer :pointer)
  (size :uint32)
  (_ :uint32))

(defun write-process-mem (handle base-addr buffer)
  (if (stringp buffer)
      (with-foreign-string (buf buffer)
	(write-process-mem-impl handle base-addr buffer (length buffer) 0))
      (with-foreign-object (array :uint32 1)
	(setf (mem-aref array :uint32 0) buffer)
	(write-process-mem-impl2 handle base-addr array 4 0))))

(defun write-address (address entry)
  (write-process-mem *p-hndl* address entry))

(defvar proc-handle (get-process-handle "Darkstone DSI"))

(defun read-process-mem (handle base-addr buf size)
  (if (read-process-mem-impl handle base-addr buf size 0)
      buf
      "Unsuccessful read"))


(defun read-address (address num-bytes)
  (with-foreign-object (buf :uint8 num-bytes)
    (read-process-mem *p-hndl* address buf num-bytes)
    (loop for i from 0 below num-bytes
	  :collect (mem-aref buf :uint8 i))))

(setf mem-res (read-address #x00AF9F4E 2))

(loop for x in mem-res do
      (format T "0x~V,'0x " 1 x))


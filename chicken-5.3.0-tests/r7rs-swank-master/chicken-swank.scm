(import (chicken file)
        (chicken format)
        (chicken pretty-print)
        (chicken random)
        (chicken syntax)
        (chicken tcp)
        (chicken random)
        (srfi-1)
        (srfi-13)
        (srfi-69))
(begin
  (load "specific/chicken.scm")
  (load "common/base.scm")
  (load "common/handlers.scm"))
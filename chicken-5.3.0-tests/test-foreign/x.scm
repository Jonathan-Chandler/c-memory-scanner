;;; x.scm

(define (bar x) (gc) (* x x))

(define-external (baz (int i)) double
  (sqrt i))
(return-to-host)

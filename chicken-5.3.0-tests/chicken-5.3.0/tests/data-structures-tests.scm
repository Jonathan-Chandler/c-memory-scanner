;;;; data-structures-tests.scm

(import (chicken sort)
	(chicken string))

(define-syntax assert-error
  (syntax-rules ()
    ((_ expr)
     (assert (handle-exceptions _ #t expr #f)))))

(assert (equal? 'bar (alist-ref 'foo '((foo . bar)))))
(assert (not (alist-ref 'foo '())))
(assert (not (alist-ref 'foo '((bar . foo)))))
(assert-error (alist-ref 'foo 'bar))
(assert-error (alist-ref 'foo '(bar)))

(let ((cmp (lambda (x y) (eqv? x y))))
  (assert (equal? 'bar (alist-ref 'foo '((foo . bar)) cmp)))
  (assert (not (alist-ref 'foo '() cmp)))
  (assert (not (alist-ref 'foo '((bar . foo)) cmp)))
  (assert-error (alist-ref 'foo 'bar cmp))
  (assert-error (alist-ref 'foo '(bar) cmp)))


(let ((alist '((foo . 123) ("bar" . "baz"))))
  (alist-update! 'foo 999 alist)
  (assert (= (alist-ref 'foo alist) 999))
  (alist-update! 'qux 'nope alist)
  (assert (not (alist-ref 'qux alist)))
  (assert (eq? 'yep (alist-ref 'qux (alist-update! 'qux 'yep alist))))
  (assert (eq? 'ok (alist-ref "bar" (alist-update! "bar" 'ok alist equal?) equal?))))

(let ((alist '((foo . 123) ("bar" . "baz"))))
  (alist-update 'foo 999 alist)
  (assert (= (alist-ref 'foo alist) 123))
  (assert (eq? 'yep (alist-ref 'qux (alist-update 'qux 'yep alist))))
  (assert (eq? 'ok (alist-ref "bar" (alist-update "bar" 'ok alist equal?) equal?))))

;; #808: strings with embedded nul bytes should not be compared
;; with ASCIIZ string comparison functions
(assert (substring=? "foo\x00a" "foo\x00a" 1 1))
(assert (substring-ci=? "foo\x00a" "foo\x00a" 1 1))
(assert (substring-ci=? "foo\x00a" "foo\x00A" 1 1))
(assert (= 2 (substring-index "o\x00bar" "foo\x00bar")))
(assert (= 2 (substring-index-ci "o\x00bar" "foo\x00bar")))
(assert (= 2 (substring-index-ci "o\x00bar" "foo\x00BAR")))
(assert (not (substring=? "foo\x00a" "foo\x00b" 1 1)))
(assert (not (substring-ci=? "foo\x00a" "foo\x00b" 1 1)))
(assert (not (substring-index "o\x00bar" "foo\x00baz")))
(assert (not (substring-index-ci "o\x00bar" "foo\x00baz")))
(assert (= 0 (substring-index "" "")))
(assert (= 1 (substring-index "" "a" 1)))
(assert-error (substring-index "" "a" 2))
(assert-error (substring-index "a" "b" 2))
(assert (not (substring-index "a" "b" 1)))
(assert (not (substring-index "ab" "")))
(assert (= 0 (string-compare3 "foo\x00a" "foo\x00a")))
(assert (> 0 (string-compare3 "foo\x00a" "foo\x00b")))
(assert (< 0 (string-compare3 "foo\x00b" "foo\x00a")))
(assert (= 0 (string-compare3-ci "foo\x00a" "foo\x00a")))
(assert (= 0 (string-compare3-ci "foo\x00a" "foo\x00A")))
(assert (> 0 (string-compare3-ci "foo\x00a" "foo\x00b")))
(assert (> 0 (string-compare3-ci "foo\x00A" "foo\x00b")))
(assert (< 0 (string-compare3-ci "foo\x00b" "foo\x00a")))
(assert (< 0 (string-compare3-ci "foo\x00b" "foo\x00A")))

(assert (string=? "bde" (string-translate* "abcd"
					   '(("a" . "b")
					     ("b" . "")
					     ("c" . "d")
					     ("d" . "e")))))
(assert (string=? "bc" (string-translate* "abc"
					  '(("ab" . "b")
					    ("bc" . "WRONG")))))
(assert (string=? "x" (string-translate* "ab" '(("ab" . "x")))))
(assert (string=? "xy" (string-translate* "xyz" '(("z" . "")))))

;; topological-sort

(assert (equal? '() (topological-sort '() eq?)))
(assert (equal? '(a b c d) (topological-sort '((a b) (b c) (c d)) eq?)))
(assert (equal? '(a b c d) (topological-sort '((a b) (c d)) eq?)))
(assert-error (topological-sort '((a b) (b a)) eq?))
(assert 
  (equal? 
    (topological-sort
     '((i am)
       (not trying)
       (confuse the)
       (am trying)
       (trying to)
       (am not)
       (trying the)
       (to confuse)
       (the issue))
      eq?)
    '(i am not trying to confuse the issue)))

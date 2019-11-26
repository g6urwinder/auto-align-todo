(asdf:load-system :cffi)
(defpackage :cffi-user
  (:use :common-lisp :cffi))
(in-package :cffi-user)

(define-foreign-library curl
  (t (:default "/home/gurwinder/ideas/auto-align-todo/cffi")))
(load-foreign-library 'curl)
;; #<FOREIGN-LIBRARY CURL "cffi.so">

;; cpp -fPIC -shared -o cffi.so cffi.cpp

(defcfun "get_ncpu" :int)
(defun print-system-info ()
  (let ((ncpu (get-ncpu)))
    (format t "CPUs: = ~d" ncpu)))
(print-system-info)
;; CPUs: = 8


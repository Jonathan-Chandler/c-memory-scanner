(require 'asdf)
(require 'cmp)
(push "./" asdf:*central-registry*)

(asdf:make-build :swank
                 :type :fasl
                 :monolithic t
                 :move-here "./")

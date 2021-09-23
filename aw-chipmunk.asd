(asdf:defsystem :aw-chipmunk
  :description "Common Lisp bindings to Chipmunk 2D physics library for alien-works"
  :version "1.0.0"
  :author "Pavel Korolev"
  :mailto "dev@borodust.org"
  :license "MIT"
  :depends-on (:aw-chipmunk-bindings))


(asdf:defsystem :aw-chipmunk/wrapper
  :description "Wrapper generator for Chipmunk 2D physics library"
  :version "1.0.0"
  :author "Pavel Korolev"
  :mailto "dev@borodust.org"
  :license "MIT"
  :depends-on (:alexandria :claw :claw-utils)
  :serial t
  :components ((:file "src/claw")
               (:module :chipmunk-includes :pathname "src/lib/chipmunk/include/")))

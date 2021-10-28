(claw:defwrapper (:aw-chipmunk
                  (:system :aw-chipmunk/wrapper)
                  (:defines "CP_USE_DOUBLES" 0
                    "CP_USE_CGTYPES" 0)
                  (:headers "chipmunk/chipmunk.h")
                  (:includes :chipmunk-includes)
                  (:include-definitions "^(cp|CP_)\\w*")
                  (:exclude-sources "chipmunk_private\\.h$")
                  (:targets ((:and :x86-64 :linux) "x86_64-pc-linux-gnu")
                            ((:and :x86-64 :windows) "x86_64-w64-mingw32")
                            ((:and :x86-64 :darwin) "x86_64-apple-darwin-gnu")
                            ((:and :aarch64 :android) "aarch64-linux-android"))
                  (:persistent t :depends-on (:claw-utils)))
  :in-package :%chipmunk
  :trim-enum-prefix t
  :recognize-bitfields t
  :recognize-strings t
  :with-adapter (:static
                 :path "src/lib/adapter/adapter.c")
  :override-types ((:string claw-utils:claw-string)
                   (:pointer claw-utils:claw-pointer))
  :symbolicate-names (:by-removing-prefixes "cp" "CP_"))

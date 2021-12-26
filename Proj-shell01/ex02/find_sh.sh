find . -type f -regex '.*\.sh$' -exec basename {} \; | sed 's/\.sh//'

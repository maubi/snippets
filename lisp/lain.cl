   (next-cycle world)
    (incf cycles)
    (print-world world cycles)))



(defun life (source)
  (let* ((size (length (car source)))
         (life (make-world
                :size size
                :current (make-array (list size size) :element-type 'bit
                                     :initial-contents source)
                :next (make-array (list size size) :element-type 'bit
                                  :initial-element 0)

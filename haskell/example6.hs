func  :: (Bool, Bool) -> (Bool, Bool) -> (Bool, Bool, Bool, Bool)
func' :: Bool -> Bool -> Bool -> Bool -> (Bool, Bool, Bool, Bool)

func (x, y) (w, z) = (x, y, w, z)

func' x y w z = (x y w z)

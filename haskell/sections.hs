myadd :: Num a => a -> a -> a
successor :: Num a => a -> a
double :: Num a => a -> a

myadd = \x -> (\y -> ((+) x y))
successor x = (1+) x
double x = (2*) x

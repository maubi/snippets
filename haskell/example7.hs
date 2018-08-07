myabs  :: (Ord a, Num a, Num t) => a -> t
double :: Num a => a -> a
half   :: (Fractional a) => a -> a

myabs n | n > 0  = 1
        | n == 0 = 0
        | n < 0  = -1

double x = x + x

half n = n * 0.5

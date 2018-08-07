myadd    :: (Num a) => a -> a -> a
myconst  :: a -> b -> a
myconst2 :: a -> b -> a
double   :: (Num a) => a -> a
palindrome :: Eq a => [a] -> Bool

myadd = \x -> (\y -> (x + y))
myconst x = \_ -> x
myconst2 x _ = x
double = \x -> (x * 2)
palindrome = \x -> reverse x == x

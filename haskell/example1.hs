double      :: Num a => a -> a
quadruple   :: Num a => a -> a
triplen     :: Num a => [a] -> [a]
triples     :: [Char] -> [Char]
quintuple   :: Integer -> Integer

double x    = x + x
quadruple x = double (double x)
factorial n = product [1..n]
triplen ns   = ns ++ ns ++ ns
triples xs = xs ++ xs ++ xs
quintuple x = x * 5

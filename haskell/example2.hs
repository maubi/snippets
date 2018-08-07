add    :: (Int, Int) -> Int
zeroto :: Int -> [Int]

add (x,y)   = x + y
zeroto n    = [0..n]

curried' :: Int -> Int -> Int
curried' x y = x + y

myenum  :: Int -> [Int]
myenum2 :: Int -> Int -> [(Int,Int)]
myvector :: Int -> [Int]
mytest :: [Int]
mymatrix :: Int -> Int -> [[Int]]

myenum n = [x | x <- [0..n]]
myenum2 a b = [ (x,y) | x <- [0..a], y <- [0..b] ]
myvector n = if n == 0 then [0] else 0:myvector (n-1)
mytest =  [0 | x <- [0..10]]
mymatrix a b = [myvector a | y <- [0..b] ]

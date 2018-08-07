myhead :: [a] -> a
mytail :: [a] -> [a]
palindrome :: Eq a => [a] -> Bool

myhead (x:xs) = x
mytail (x:xs) = xs

palindrome xs = reverse xs == xs

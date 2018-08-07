safetail  :: [a] -> [a]
safetail2 :: [a] -> [a]
safetail3 :: [a] -> [a]

safetail x | null x == True = []
           | otherwise = tail x
safetail2 x = if null x == True then [] else x
safetail3 [] = []
safetail3 (x:xs) = xs

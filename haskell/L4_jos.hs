ver = [[4,2,4,3,4,4,4,5,4,6], [1,2,3,4,5], [2]]

-- separarRepeticao :: [Int] -> 

-- recebeValores :: [[Int]] -> [Int]
-- recebeValores [] = []
-- recebeValores [[]] = []
-- recebeValores x
--     | x /= [] = concat x

-- deletarRepetidos :: [Int] -> [Int]
-- deletarRepetidos x
--     | 

-- contarRepetidos :: [Int] -> [(Int, Int)]
-- contarRepetidos (x:xs)
--     | contarRepetidos = [val| val <- xs, x /= xs]


-- printaGroup :: [Int] -> [Int]
-- printaGroup x
--     | True = " "

-- group :: [[Int]] -> [Int]
-- group [] = []
-- group [[]] = []
-- group x
--     | True = recebeValores x



-- -- 1 QUESTÃO
-- recebeValores :: [[Int]] -> [Int]
-- recebeValores [] = []
-- recebeValores [[]] = []
-- recebeValores x
--     | x /= [] = (concat x)

-- deletarRepetido :: [Int] -> [Int]
-- deletarRepetido [] = []
-- deletarRepetido (x : xs) = x : (deletarRepetido (remove x xs))
--   where
--     remove :: Int -> [Int] -> [Int]
--     remove x [] = []
--     remove x (y : ys)
--       | x == y = remove x ys
--       | otherwise = y : (remove x ys)

-- contarRepetido::


-- --zip [deletarRetido] [contarRepetido]
-- --[(deletarRetido,contarRepetido)]
-- group :: [[Int]] -> [Int]
-- group [] = []
-- group [[]] = []
-- group x
--     | True = (concat x)

myHead :: [Int] -> Int
myHead [] = 0
myHead (head':tail') = head'

myTail :: [Int] -> [Int]
myTail [] = []
myTail (head':tail') = tail'

myLength1 :: [a] -> Integer
myLength1 []     = 0
myLength1 (x:xs) = (+1) (myLength1 xs)

count:: Int -> [Int] -> Int
count n [] = 0
count n (h:t) | n == h = 1 + count n t
              | otherwise = count n t

removeIntList :: (Int,Int)->[(Int, Int)]->[(Int, Int)]
removeIntList (s,v) [] = []
removeIntList (s,v) (head':tail') = [(x)| x <- (head':tail'), x /= (s,v)]

uniqueRecursive :: [(Int, Int)] -> [(Int, Int)]
uniqueRecursive [] = []
uniqueRecursive lista = uniqueRecursive (removeIntList (head lista) (tail lista)) ++ [(head lista)]

myConcat :: [[a]] -> [a]
myConcat [] = []
myConcat ([]:tail'') = myConcat tail''
myConcat ((head':tail'):tail'') = head':myConcat (tail':tail'')

makeTuple :: [Int] -> [(Int, Int)]
makeTuple [] = []
makeTuple lista = [(x, (count x lista))| x <- lista]

group :: [[Int]]->[(Int, Int)]
group [[]] = []
group lista = uniqueRecursive (makeTuple (myConcat lista))



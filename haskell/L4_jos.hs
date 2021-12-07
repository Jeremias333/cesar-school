ver = [[4,2,4,3,4,4,4,5,4,6], [1,2,3,4,5], [2]]

-- 1 Questão 

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

-- 2 Questão 
type Aluno = (String, String, Int, Char, Float)

myLength :: [a] -> Float
myLength []     = 0.0
myLength (x:xs) = (+1.0) (myLength xs)

mySum :: [Float] -> Float
mySum [] = 0
mySum (x:xs) = x + mySum xs

-- a)
calcMedia :: [Float] -> Float
calcMedia lista = (mySum lista)/((myLength lista) :: Float)

mediaEnem :: [Aluno] -> Float
mediaEnem [] = 0.0
mediaEnem lista = calcMedia [e | (a,b,c,d,e) <- lista] 

-- b)

minMaxIdade :: [Aluno]->(String, Int, String, Int)
minMaxIdade lista = 


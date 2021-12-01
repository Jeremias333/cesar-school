cont_elements = 0

myHead :: [Int] -> Int
myHead [] = 0
myHead (head':tail') = head'

myTail :: [Int] -> [Int]
myTail [] = []
myTail (head':tail') = tail'

elemNum :: Int -> [Int] -> Int
elemNum a b
    |b == [] = 0
    |a == myHead b = 1 + elemNum a (myTail b)
    |otherwise = 0 + elemNum a (myTail b)

elemNum2 :: Int -> [Int] -> Int
elemNum2 a b = length [1 | x <- b, x == a]

-- Não consegui fazer o 'unique' só com recursividade ou só com list comprehension, tive que usar os dois...
unique :: [Int] -> [Int]
unique [] = []
unique (a:b)
    |elem a ( unique b ) = [x | x <- ( unique b ), x /= a ]
    |otherwise = a : ( unique b )

removeIntList :: Int->[Int]->[Int]
removeIntList a [] = []
removeIntList a lista = [x | x <- lista, a /= x]

uniqueRecursive :: [Int] -> [Int]
uniqueRecursive [] = []
uniqueRecursive (head':tail') = uniqueRecursive (removeIntList head' tail') ++ [head']

orderTriple :: (Int, Int, Int) -> (Int, Int, Int)
orderTriple (a,b,c)
    | a == b && b == c = (a,b,c)
    | a >= b && b >= c = (c,b,a)
    | a <= b && b <= c = (a,b,c)
    | a >= b && a <= c = (b,a,c)
    | a <= b && a >= c = (c,a,b)
    | a <= b && b >= c = (a,b,c)
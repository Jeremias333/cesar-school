cont_elements = 0

elemNum :: Int -> [Int] -> Int
elemNum a b
    |b == [] = 0
    |a == head b = 1 + elemNum a (tail b)
    |otherwise = 0 + elemNum a (tail b)

elemNum2 :: Int -> [Int] -> Int
elemNum2 a b = length [1 | x <- b, x == a]

-- Não consegui fazer o 'unique' só com recursividade ou só com list comprehension, tive que usar os dois...
unique :: [Int] -> [Int]
unique [] = []
unique (a:b)
    |elem a ( unique b ) = [x | x <- ( unique b ), x /= a ]
    |otherwise = a : ( unique b )

-- unique_2 :: [Int] -> [Int]
-- unique_2 a = [x | x <- a, (x in a) == False]

orderTriple :: (Int, Int, Int) -> (Int, Int, Int)
orderTriple (a,b,c)
    | a == b && b == c = (a,b,c)
    | a >= b && b >= c = (c,b,a)
    | a <= b && b <= c = (a,b,c)
    | a >= b && a <= c = (b,a,c)
    | a <= b && a >= c = (c,a,b)
    | a <= b && b >= c = (a,b,c)
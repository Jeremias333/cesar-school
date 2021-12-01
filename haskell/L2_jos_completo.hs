main :: IO ()
main = return ()

-- Converte letras minusculas para maiusculas.
convertABC :: Char -> Char
convertABC a
    | a == 'a' = 'A'
    | a == 'b' = 'B'
    | a == 'c' = 'C'
    | a == 'd' = 'D'
    | a == 'e' = 'E'
    | a == 'f' = 'F'
    | a == 'g' = 'G'
    | a == 'h' = 'H'
    | a == 'i' = 'I'
    | a == 'j' = 'J'
    | a == 'k' = 'K'
    | a == 'l' = 'L'
    | a == 'm' = 'M'
    | a == 'n' = 'N'
    | a == 'o' = 'O'
    | a == 'p' = 'P'
    | a == 'q' = 'Q'
    | a == 'r' = 'R'
    | a == 's' = 'S'
    | a == 't' = 'T'
    | a == 'u' = 'U'
    | a == 'v' = 'V'
    | a == 'w' = 'W'
    | a == 'x' = 'X'
    | a == 'y' = 'Y'
    | a == 'z' = 'Z'
    | otherwise = a

-- Quando carregado em dentro do prelude, consegue retornar um número de 1 a 10 em romano.
romanDigit :: (Integral a) => a -> String
romanDigit a
    | a == 1 = "I"
    | a == 2 = "II"
    | a == 3 = "III"
    | a == 4 = "IV"
    | a == 5 = "V"
    | a == 6 = "VI"
    | a == 7 = "VII"
    | a == 8 = "VIII"
    | a == 9 = "IX"
    | a == 10 = "X"

convertCharToInt :: Char -> Int
convertCharToInt x
    | x == '0' = 0
    | x == '1' = 1
    | x == '2' = 2
    | x == '3' = 3
    | x == '4' = 4
    | x == '5' = 5
    | x == '6' = 6
    | x == '7' = 7
    | x == '8' = 8
    | x == '9' = 9

digits :: String -> String
digits lista = [x | x <- lista, x == '0' || x == '1' ||
                x == '2' ||  x == '3' || x == '4' || x == '5' ||
                x == '6' || x == '7' || x == '8' || x == '9']

newReverse :: [Int] -> [Int]
newReverse [] = [] -- foi necessário por este caso para evitar exception
newReverse (head':tail') = newReverse tail' ++ [head']





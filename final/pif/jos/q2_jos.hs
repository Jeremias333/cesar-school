-- função para extrair o primeiro valor de uma lista
myHead :: [Int]->Int
myHead (head':tail') = head'

-- função que verifica se o próximo valor é menor ou igual ao próximo, retornando True ou False caso esteja ordenado.
isSorted :: [Int]->Bool
isSorted [] = False
isSorted [a] = True
isSorted (head':tail')
    | head' <= (myHead tail') = isSorted tail'
    | head' > (myHead tail') = False
    | otherwise = True

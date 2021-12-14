
-- função que retorna a quantia de valores de uma lista
qtdInList :: (Eq a) => a->[a]->Int
qtdInList val [] = 0
qtdInList val (head':tail')
  | head' == val = (qtdInList val tail') + 1
  | head' /= val = (qtdInList val tail') + 0
  | otherwise = qtdInList val tail'

-- função que limpa todos valores que forem iguais ao valor passado para a lista
clearList :: (Eq a) => a->[a]->[a]
clearList val [] = []
clearList val (head':tail')
  | val == head' = clearList val tail'
  | otherwise = head':(clearList val tail')

-- função que irá retornar uma lista de valores que são repetidos igual a quantia passada
repetidos :: (Eq a) => Int->[a]->[a]
repetidos val [] = []
repetidos val (head':tail')
 | qtdInList head' (head':tail') == val = [head'] ++ repetidos val (clearList head' tail')
 | otherwise = repetidos val (clearList head' tail')
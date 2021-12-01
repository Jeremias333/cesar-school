-- type Aluno = [(Numero, Nome, ParteI, ParteII)]
-- type Numero = Int
-- type Nome = String
-- type ParteI = Float
-- type ParteII = Float
-- type Turma = [Aluno]

-- -- notasFinais :: Turma -> [Float]
-- -- notasFinais t = notasF (passaram t)

-- notasF :: Aluno -> [Float]
-- notasF [] = []
-- notasF ((_,_,np1,np2):t) = (np1+np2) : (notasF t)

-- --d)

-- mediaNotas :: [Float] -> Float
-- mediaNotas [] = 0.0
-- mediaNotas (x:xs) = sum (x:xs) / length (x:xs)

-- mediaNotas :: [Float] -> Float
-- mediaNotas [] = 0.0
-- mediaNotas l = (sum l) / (fromIntegral $ length l)

type Numero = Int
type Nome = String
type ParteI = Float
type ParteII = Float

data Aluno = Alunos Numero Nome ParteI ParteII
    deriving(Eq, Show)

prof :: Aluno
prof = Alunos 1405 "jeremias" 9.5 8.5


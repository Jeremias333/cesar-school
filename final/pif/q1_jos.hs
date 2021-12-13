--main = do
  --putStrLn "Hello"
  --putStrLn "World"

repetidos :: Int->[a]->[a]
repetidos val (a:b)
  | repetidos val b = 
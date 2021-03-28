programa{
	real val = 0.0, result = 0.0
	inteiro not200 = 0, not100 = 0, not50 = 0, not20 = 0, not10 = 0, not5 = 0, not2 = 0, not1 = 0
	logico repeat = verdadeiro

	funcao inicio(){
		escreva("Digite a ser decomposto: \n")
		leia(val)

		result = val

		enquanto (repeat){
			se(result >= 200.0){
				result -= 200
				not200++ 	
			}
			se(result >= 100.0){
				result -= 100
				not100++
			}
			se(result >= 50.0){
				result -= 50
				not50++
			}
			se(result >= 20.0){
				result -= 20
				not20++
			}
			se(result >= 10.0){
				result -= 10
				not10++
			}
			se(result >= 5.0){
				result -= 5
				not5++
			}
			se(result >= 2.0){
				result -= 2
				not2++
			}
			se(result >= 1.0){
				result -= 1
				not1++
			}

			se(result <= 0){
				repeat = falso
			}
		}


		

		escreva("\nValor: ", val," \n\n")
		escreva("Quantidade de notas: \n200 R$ - ", not200, "\n100 R$ - ", not100, "\n50 R$ - ", not50, "\n20 R$ - ", not20, "\n10 R$ - ", not10, "\n5 R$ - ", not5, "\n2 R$ - ", not2, "\n1 R$ - ", not1)
	}
}
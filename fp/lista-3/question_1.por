programa{
	inteiro valX = 0, valY = 0, valZ = 0 

	funcao inicio(){
		escreva("Digite um valor para X\n")
		leia(valX)
		escreva("Digite um valor para Y\n")
		leia(valY)

		escreva("Digite um valor para a variável Z\n")
		leia(valZ)

		se(valZ >= valX e valZ <= valY){
			escreva("O valor de Z (", valZ,") está no intervalo de X e Y (", valX," - ", valY,")")
		}senao{
			escreva("O valor de Z (", valZ,") está FORA do intervalo de X e Y (", valX," - ", valY,")")
		}
	}
}
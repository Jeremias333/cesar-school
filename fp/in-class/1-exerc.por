programa{
	funcao inicio(){
		real val1, val2, val3, sum, mean, prod
		const real MEDIA = 3.0

		escreva("Digite o primeiro número: ")
		leia(val1)

		escreva("Digite o segundo número: ")
		leia(val2)

		escreva("Digite o terceiro número: ")
		leia(val3)

		sum = val1+val2+val3
		prod = val1*val2*val3
		mean = (val1+val2+val3)/MEDIA
		limpa()
		escreva("Valores: ",val1, ", ", val2, ", ", val3, "\n \n")

		escreva("A soma: ", sum ,"\n")

		escreva("O produto: ", prod, "\n")

		escreva("A média: ", mean)

	}
}
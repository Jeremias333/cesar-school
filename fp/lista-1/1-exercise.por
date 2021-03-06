programa{
	funcao inicio(){
		real val1, val2, result

		escreva("Olá usuário, bem vindo ao programa de médias")
		escreva("Pressione enter para continuar")
		leia()
		limpa()

		escreva("Digite o primeiro número: ")
		leia(val1)
		escreva("Digite o segundo número: ")
		leia(val2)

		result = (val1+val2)/2

		escreva("A média entre: ", val1, " e ", val2, " é: ", result)
	}
}
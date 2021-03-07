programa{
	funcao inicio(){

		const real PERCENT = 0.15
		real value, result
		caracter confirm

		escreva("Olá usuário, bem vindo ao programa para impressão de um saldo com acressimo de ", PERCENT*100 ,"% \n")
		escreva("DIGITE algo e pressione ENTER para continuar \n")
		leia(confirm)
		limpa()

		escreva("Digite o saldo a ser impresso com acessimo: ")
		leia(value)
		limpa()

		result = (value*PERCENT)+value

		escreva("Seu valor final é: ", result)


	}
}
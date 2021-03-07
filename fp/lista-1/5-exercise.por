programa{
	funcao inicio(){

		real value, result, percent
		caracter confirm

		escreva("Olá usuário, bem vindo ao programa para impressão de um reajuste de saldo baseado na entrada do usuário. \n")
		escreva("DIGITE algo e pressione ENTER para continuar \n")
		leia(confirm)
		limpa()

		escreva("Digite o saldo a ser ajustado: ")
		leia(value)
		escreva("\n")

		escreva("Digite o valor de reajuste para esse saldo: ")
		leia(percent)
		escreva("\n")

		//o usuario irá digitar um valor absoluto ex: 21, 23, 50, 95 que seria porcentagem
		percent = (percent/100)

		//multiplicar ele com o valor passado configura o ajuste
		result = (value*percent)

		escreva("O valor de reajuste é: ", result)

	}
}
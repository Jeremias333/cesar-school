programa{
	funcao inicio(){
		real val1, val2, result
		caracter confirm
        
		escreva("Olá usuário, bem vindo ao programa de médias \n")
		escreva("DIGITE algo e pressione ENTER para continuar \n")
		leia(confirm)
		limpa()

		escreva("Digite o primeiro número: ")
		leia(val1)
		limpa()
		
		escreva("Digite o segundo número: ")
		leia(val2)
		limpa()
		
		result = (val1+val2)/2

		escreva("A média entre: ", val1, " e ", val2, " é: ", result, "\n")
	}
}
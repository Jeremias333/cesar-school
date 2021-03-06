programa{
	funcao inicio(){

		real centimeters, meters
		caracter confirm

		escreva("Olá usuário, bem vindo ao programa de conversão metros(m) para centimetros(cm) \n")
		escreva("Sendo a fórmula: m*100 = cm \n")
		escreva("DIGITE algo e pressione ENTER para continuar \n")
		leia(confirm)
		limpa()

		escreva("Digite o valor em metros a ser convertido: \n")
		leia(meters)
		limpa()

		centimeters = meters * 100

		escreva(meters, " m é igual a: ", centimeters, " cm")

	}
}
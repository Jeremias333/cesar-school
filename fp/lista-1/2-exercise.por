programa{
	funcao inicio(){

		real area, base, height
		caracter confirm

		escreva("Olá usuário, bem vindo ao programa de calculo da área de um triangulo △ \n")
		escreva("Sendo a fórmula: A = (b*h)/2 \n")
		escreva("DIGITE algo e pressione ENTER para continuar \n")
		leia(confirm)
		limpa()
		
		escreva("Digite a base do triangulo: ")
		leia(base)
		limpa()

		escreva("Digite a altura do triangulo: ")
		leia(height)
		limpa()

		area = (base*height)/2

		escreva("A área do seu triangulo é: ", area)


	}
}
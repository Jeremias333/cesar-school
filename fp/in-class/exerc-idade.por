programa{
	funcao inicio(){
		inteiro age
		caracter confirm

		escreva("Olá usuário, bem vindo ao programa para impressão de um reajuste de saldo baseado na entrada do usuário. \n")
		escreva("DIGITE algo e pressione ENTER para continuar \n")
		leia(confirm)
		limpa()

		escreva("Digite sua idade \n")
		leia(age)
		limpa()

		se(age < 0){
			escreva("Não é aceito imagens negativas")
		}

		se(age <= 0 e age <= 12){
			escreva("Criança")
		}

		se(age < 12 e age <= 20){
			escreva("Adolescente")
		}

		se(age < 20 e age < 65){
			escreva("Adulto")
		}

		se(idade > 65){
			escreva("Idoso")
		}
	}
}
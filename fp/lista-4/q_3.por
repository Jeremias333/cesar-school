programa{
	inteiro val = 0
	cadeia season = "VALOR INVÁLIDO"
	funcao inicio(){
		
		escreva("Digite um mês do ano para saber a estação: (ex: 1)\n")
		leia(val)

		escolha (val){

			caso 1:
				season = "VERÃO"
			pare
			caso 2:
				season = "VERÃO"
			pare
			caso 3:
				season = "VERÃO-OUTONO"
			pare
			caso 4:
				season = "OUTONO"
			pare
			caso 5:
				season = "OUTONO"
			pare
			caso 6:
				season = "OUTONO-INVERNO"
			pare
			caso 7:
				season = "OUTONO"
			pare
			caso 8:
				season = "OUTONO"
			pare
			caso 9:
				season = "OUTONO-PRIMAVERA"
			pare
			caso 10:
				season = "PRIMAVERA"
			pare
			caso 11:
				season = "PRIMAVERA"
			pare
			caso 12:
				season = "PRIMAVERA-VERÃO"
			pare
			caso contrario:

		}

		se("VALOR INVÁLIDO" == season){
			escreva("Valor inválido digitado.")
		}senao{
			escreva("\n A Estação para o mês ",val," é: ", season)		
		}

		

	}
}
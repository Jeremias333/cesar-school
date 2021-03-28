programa{
	real sal = 0.0, result = 0.0, increaseCalc = 0.0
	inteiro codOffice = 0, increase = 0
	funcao inicio(){
		escreva("Digite o código de função: \n")
		leia(codOffice)
		
		escreva("Digite seu salário atual: \n")
		leia(sal)

		escolha(codOffice){
		//Utilizando a lógica do salário atual ser somado ao valor da porcentagem no valor antigo dá o novo saldo
			caso 1:
				increase = 45
				increaseCalc = increase
				result = sal+(sal*(increaseCalc/100))
				//result += sal
			pare
			caso 2:
				increase = 35
				increaseCalc = increase
				result = sal+(sal*(increaseCalc/100))
			pare
			caso 3:
				increase = 25
				increaseCalc = increase
				result = sal+(sal*(increaseCalc/100))
			pare
			caso 4:
				increase = 15
				increaseCalc = increase
				result = sal+(sal*(increaseCalc/100))
			pare
			caso 5:
				result = sal
			pare
			caso contrario:
				codOffice = 0
		}

		se (codOffice == 0){
			escreva("Valor inválido digitado")
		}senao se(codOffice == 5){
			escreva("Como cargo de diretor (",codOffice,") não receberá aumento. Valor atual: ", result)
		}senao{
			escreva("Foi feito um acréssimo de ",increase,"% no seu salário. Valor atual: ", result)
		}
	}
}
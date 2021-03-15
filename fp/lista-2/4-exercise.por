programa{
	funcao inicio(){

		real final_price, percent_gain, percent_tax, manufact_price
		caracter confirm
        
		escreva("Olá usuário, bem vindo ao programa calculo de preço de carro\n")
		escreva("DIGITE algo e pressione ENTER para continuar \n")
		leia(confirm)
		limpa()

		escreva("Digite o preço de fábrica do veículo (ex: 5, 10, 11) \n")
		leia(manufact_price)
		limpa()

		escreva("Digite o percentual de lucro do distribuidor (ex: 5, 10, 11) \n")
		leia(percent_gain)
		limpa()

		escreva("Digite o percentual de imposto \n")
		leia(percent_tax)
		limpa()

		//calculos

		//Transformando para 1.0 a porcentagem passada
		percent_gain = (percent_gain/100)
		percent_tax = (percent_tax/100)

		//valores a serem impressos
		percent_gain = manufact_price*percent_gain
		percent_tax = manufact_price*percent_tax

		final_price = (manufact_price+percent_gain+percent_tax)

		escreva("O valor correspondente ao lucro do distribuidor: "+ percent_gain +" R$\n")
		escreva("O valor correspondente ao lucro do distribuidor: "+ percent_tax +" R$\n")
		escreva("O preço final do veículo é: "+ final_price +" R$")

	}
}
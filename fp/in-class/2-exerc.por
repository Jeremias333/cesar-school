programa{
	funcao inicio(){

		inteiro year, month, days, days_result

		escreva("Digite sua idade em anos: \n")
		leia(year)

		escreva("Digite quantos meses se passaram do seu aniversário: \n")
		leia(month)

		escreve("Digite os dias após seu aniversário: \n")
		leia(days)

		days_result = days_result + days

		days_result = days_result + (month*31)

		days_result = days_result + (year*365)

		escreva("Sua idade em dias é: ", days_result)
	}
}
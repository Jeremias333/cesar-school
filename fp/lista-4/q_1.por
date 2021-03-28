programa{
	real valSal = 0.0, result = 0.0

	funcao inicio(){
		escreva("Digite seu salário para calcularmos qual valor do seu imposto de renda: \n")
		leia(valSal)

		se(valSal <= 1500){
			escreva("Você está isento de pagar imposto de renda.")
		}senao se(valSal > 1500 e valSal <= 2500){
			result = valSal*0.15
			escreva("Seu valor de imposto de renda é: ", result, " R$ (15% do salário)")

		}senao se(valSal > 2500 e valSal <= 4000){
			result = valSal*0.275
			escreva("Seu valor de imposto de renda é: ", result, " R$ (27,5% do salário)")

		}senao se(valSal > 4000){
			result = valSal*0.35
			escreva("Seu valor de imposto de renda é: ", result, " R$ (35% do salário)")
		}
	}
}
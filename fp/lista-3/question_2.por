programa{
	inteiro age = 0
	cadeia class = ""

	funcao inicio(){
		escreva("Digite a idade do atleta a ser classificado \n")
		leia(age)

		se(age >= 5 e age <= 7){
			class = "Infantil"
		}senao se(age >= 8 e age <= 10){
			class = "Juvenil"
		}senao se(age >= 11 e age <= 15){
			class = "Adolescente"
		}senao se(age >= 16 e age <= 30){
			class = "Adulto"
		}senao se(age >= 30){
			class = "Sênior"
		}

		escreva("O atleta de idade: ", age, " se classifica como: ", class)
	}
}
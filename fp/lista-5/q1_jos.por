programa{
	inteiro age = 0, age_otimo = 0, age_regular = 0, age_bom = 0, people_otimo = 0, people_bom = 0, people_regular = 0, choice = 0, peoples = 0, control = 0

	real mean_movie = 0.0

	funcao inicio(){
		
		escreva("Digite a quantidade de pessoas que participará da coleta de opiniões sobre o filme: ")
		leia(control)

		se(control <= 0){
			control = 1
		}

		enquanto(peoples != control){
			escreva("Digite sua idade: ")
			leia(age)
			
			escreva("Opinião em relação ao filme:\n3 - ÓTIMO\n2 - BOM\n1 - REGULAR\n")
			escreva("Avalie o filme com uma das opções acima: ")
			leia(choice)

			limpa()

			escolha(choice){
				caso 1:
					age_regular += age
					people_regular++
					peoples++
				pare
				caso 2:
					age_bom += age
					people_bom++
					peoples++
				pare
				caso 3:
					age_otimo += age
					people_otimo++
					peoples++
				pare
			}
		}

		escreva("[RELAÇÃO REGULAR]:\nQuantidade de pessoas que votaram: ", people_regular)

		se(people_regular == 0.0){
			escreva("\nMédia de idade de quem votou: ", 0)
			escreva("\nPorcentagem das pessoas que votaram: ", 0, "%")
		}senao{
			escreva("\nMédia de idade de quem votou: ", age_regular/people_regular)
			escreva("\nPorcentagem de pessoas que votaram: ", 100.0 * people_regular/peoples, "%\n")
		}


		escreva("\n[RELAÇÃO BOM]:\nQuantidade de pessoas que votaram: ", people_bom)

		se(people_bom == 0.0){
			escreva("\nMédia de idade de quem votou: ", 0)
			escreva("\nPorcentagem das pessoas que votaram: ", 0, "%")
		}senao{
			escreva("\nMédia de idade de quem votou: ", age_bom/people_bom)
			escreva("\nPorcentagem de pessoas que votaram: ", 100.0 * people_bom/peoples, "%\n")
		}
		

		escreva("\n[RELAÇÃO ÓTIMO]:\nQuantidade de pessoas que votaram: ", people_otimo)

		se(people_otimo == 0.0){
					escreva("\nMédia de idade de quem votou: ", 0)
			escreva("\nPorcentagem das pessoas que votaram: ", 0, "%")
		}senao{
			escreva("\nMédia de idade de quem votou: ", age_otimo/people_otimo)
			escreva("\nPorcentagem de pessoas que votaram: ", 100.0 * people_otimo/peoples, "%")
		}

		//Não consegui interpretar muito bem uma resolução para este quesito, se puder dar um esclarecimento.
		mean_movie = ((people_bom+people_otimo+people_regular)/3)

		escreva("\n\n[AVALIAÇÃO FINAL DO FILME]\nNota: ", mean_movie)

		se(2.5 <= mean_movie e mean_movie <= 3){
			escreva("\nClassificação: [ÓTIMO]")
		}

		se(1.5 < mean_movie e mean_movie < 2.5){
			escreva("\nClassificação: [BOM]")
		}

		se(1 <= mean_movie e mean_movie <= 1.5){
			escreva("\nClassificação [REGULAR]")
		}
	}
}
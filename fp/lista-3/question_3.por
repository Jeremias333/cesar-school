programa{
	funcao inicio(){
		real alt1 = 0.0, alt2 = 0.0, alt3 = 0.0, alt4 = 0.0, alt5 = 0.0, bigger = 0.0, less = 0.0, meanWomen = 0.0, meanMen = 0.0

		caracter gen1 = ' ', gen2 = ' ', gen3 = ' ', gen4 = ' ', gen5 = ' '

		inteiro totMen = 0, totWomen = 0

		escreva("Digite a altura da ",1,"º pessoa\n")
		leia(alt1)
		escreva("Digite o sexo da ",1,"º pessoa\n")
		leia(gen1)

		escreva("\n")

		escreva("Digite a altura da ",2,"º pessoa\n")
		leia(alt2)
		escreva("Digite o sexo da ",2,"º pessoa\n")
		leia(gen2)

		escreva("\n")

		escreva("Digite a altura da ",3,"º pessoa\n")
		leia(alt3)
		escreva("Digite o sexo da ",3,"º pessoa\n")
		leia(gen3)

		escreva("\n")

		escreva("Digite a altura da ",4,"º pessoa\n")
		leia(alt4)
		escreva("Digite o sexo da ",4,"º pessoa\n")
		leia(gen4)

		escreva("\n")

		escreva("Digite a altura da ",5,"º pessoa\n")
		leia(alt5)
		escreva("Digite o sexo da ",5,"º pessoa\n")
		leia(gen5)

		escreva("\n")

		//calculando A

		se(alt1 >= alt2){
			bigger = alt1
			less = alt2
			se(alt1 >= alt3){
				bigger = alt1
				se(alt1 >= alt4){
					bigger = alt1
				}senao se(alt4 >= alt5){
					bigger = alt4
				}senao{
					bigger = alt5
				}
			}senao se(alt3 >= alt4){
				bigger = alt3
				se(alt3 >= alt5){
					bigger = alt3				
				}senao{
					bigger = alt5
				}
			}
		}senao{
			bigger = alt2
			less = alt1
			se(alt2 >= alt3){
				bigger = alt2
				se(alt2 >= alt4){
					bigger = alt2
				}senao se(alt4 >= alt5){
					bigger = alt4
				}senao{
					bigger = alt5
				}
			}senao se(alt3 >= alt4){
				bigger = alt3
			}senao se(alt4 >= alt5){
				bigger = alt4
			}senao{
				bigger = alt5
			}
		}


		//calculando B
		se(gen1 == 'M' ou gen1 == 'm'){
			totMen++
			meanMen += alt1
		}senao se(gen1 == 'F' ou gen1 == 'f'){
			totWomen++
			meanWomen += alt1
		}

		se(gen2 == 'M' ou gen2 == 'm'){
			totMen++
			meanMen += alt2
		}senao se(gen2 == 'F' ou gen2 == 'f'){
			totWomen++
			meanWomen += alt2
		}

		se(gen3 == 'M' ou gen3 == 'm'){
			totMen++
			meanMen += alt3
		}senao se(gen3 == 'F' ou gen3 == 'f'){
			totWomen++
			meanWomen += alt3
		}

		se(gen4 == 'M' ou gen4 == 'm'){
			totMen++
			meanMen += alt4
		}senao se(gen4 == 'F' ou gen4 == 'f'){
			totWomen++
			meanWomen += alt4
		}

		se(gen5 == 'M' ou gen5 == 'm'){
			totMen++
			meanMen += alt5
		}senao se(gen5 == 'F' ou gen5 == 'f'){
			totWomen++
			meanWomen += alt5
		}

		//Calculando C
		meanWomen = meanWomen/totWomen
		meanMen = meanMen/totMen

		escreva("Média de altura de mulheres: ", meanWomen, "\n")
		escreva("Média de altura de homens: ", meanMen, "\n")
        
		escreva("Mais alto: ", bigger,  "\n")
		escreva("Mais baixo: ", less,  "\n")

		escreva("Total de homens ", totMen)
		escreva("Total de mulheres ", totWomen)


	}
}
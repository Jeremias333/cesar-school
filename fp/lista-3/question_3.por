programa{

	real height[6] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, bigger = 0.0, less = 0.0, meanHeightWomen = 0.0, meanHeightMen = 0.0
	caracter gender[6] = {'m', 'm', 'm', 'm', 'm', 'm'1}
	inteiro totWomen = 0, totMen = 0
	

	funcao inicio(){
		escreva(height[4])
		
		//leitura de dados
		para (inteiro i = 1; i <= 5; i++){
			escreva("Digite a altura da: ", i,"ª pessoa \n")
			leia(height[i])
			escreva("Digite o sexo da: ", i,"ª pessoa \nm")
			leia(gender[i])
		}


		para (inteiro i = 1; i <= 5; i++){
			se (gender[i] == 'm' ou gender[i] == 'M'){
				meanHeightMen += height[i]
				totMen++
			}

			se (gender[i] == 'f' ou gender[i] == 'F'){
				meanHeightWomen += height[i]
				totWomen++
			}
		}

		meanHeightMen = meanHeightMen/totMen
		meanHeightWomen = meanHeightWomen/totWomen

		escreva("\n\nMédia de altura de homens: ", meanHeightMen, "\n")
		escreva("Média de altura de mulheres: ", meanHeightWomen, "\n")

		para (inteiro i = 1; i <= 5; i++){
			se(height[i] >= bigger){
				bigger = height[i]
				se(bigger == less){
					less = bigger
				}
			}

			se(height[i] <= less ou less == 0.0){
				less = height[i]
			}
		}

		escreva("Menor altura: ", less,"\n")
		escreva("Maior altura: ", bigger)

	}
}
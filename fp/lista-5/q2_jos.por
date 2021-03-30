programa{
	const inteiro QTD_STUDENTS = 9999
	cadeia names[QTD_STUDENTS]
	real ages[QTD_STUDENTS]
	real grades[QTD_STUDENTS]

	inteiro aux = 0, age_actually = 0, control = 0

	funcao inicio(){

		faca {
			
			escreva("Digite o nome do ",control+1,"º aluno: ")
			leia(names[control])
			escreva("Digite a idade do ",control+1,"º aluno: ")
			leia(ages[control])

			//variavel que decidirá se o loop se encerra ou não
			age_actually = ages[control]

			escreva("Digite a nota do ",control+1,"º aluno: ")
			leia(grades[control])

			escreva("\n\n")

			//incrementando variável de controle.
			control++

			//control é a quantidade de alunos.

		}enquanto (-1 != age_actually)

		control--

		//LETRA A
		escreva("Quantidade de alunos: ",control,"\n")

		//LETRA B
		escreva("Exibindo a média de idades: ", mean_age(),"\n")

		escreva("Exibindo a menor idade: ", min_age(),"\n")

		escreva("Exibindo a maior idade: ", max_age(),"\n")

		//LETRA C
		escreva("Exibindo média das notas ", mean_grade(),"\n")

		//LETRA D
		aux = max_grade()
		escreva("\n[MAIOR NOTA]\nAluno: ",names[aux],"\nNota: ", grades[aux])

		escreva("\n")

		//LETRA E
		aux = min_grade()
		escreva("\n[MENOR NOTA]\nAluno: ",names[aux],"\nNota: ", grades[aux])


	}

	funcao real max_age(){
		real max_actually = ages[0]
		
		para(inteiro i = 0; i < control; i++){

			se(ages[i] >=  max_actually){
				max_actually = ages[i]
			}

		}

		retorne max_actually
	}

	funcao real min_age(){
		real min_actually = ages[0]
		para(inteiro i = 0; i < control; i++){

			se(ages[i] <=  min_actually){
				min_actually = ages[i]
			}

		}

		retorne min_actually
	}

	funcao real mean_age(){
		real age_sum = 0.0
		
		para(inteiro i = 0; i < control; i++){
			age_sum += ages[i]
		}

		retorne (age_sum/(control))
	}

	funcao real mean_grade(){
		real grades_sum = 0.0
		
		para(inteiro i = 0; i < control; i++){
			grades_sum += grades[i]
		}

		retorne (grades_sum/(control))
	}

	funcao real min_grade(){
		real min_actually = grades[0]
		inteiro code = 0

		para(inteiro i = 0; i < control; i++){

			se(grades[i] <=  min_actually){
				min_actually = grades[i]
				code = i
			}

		}

		retorne code
	}

	funcao real max_grade(){
		real max_actually = grades[0]
		inteiro code = 0

		para(inteiro i = 0; i < control; i++){

			se(grades[i] >=  max_actually){
				max_actually = grades[i]
				code = i
			}

		}

		retorne code
	}


}
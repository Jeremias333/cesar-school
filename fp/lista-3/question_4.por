programa{
	inteiro red = 0, green = 0, blue = 0
	logico continue = falso
	cadeia result = ""
	
	funcao inicio(){
		enquanto(continue != verdadeiro){
			escreva("Digite um valor para Red \n")
			leia(red)
			escreva("Digite um valor para Green \n")
			leia(green)
			escreva("Digite um valor para Blue \n")
			leia(blue)

			se((red >= 0 e red <= 255) e (green >= 0 e green <= 255) e (blue >= 0 e blue <= 255)){
				continue = verdadeiro
			}senao{
				limpa()
				escreva("Todos valores devem estar entre 0 e 255\n\n\n")
			}
		}

		se(red == 0 e green == 0 e blue == 0){
			result = "preto"
		}senao se(red == 255 e green == 255 e blue == 255){
			result = "branco"
		}senao se((red == green e green == blue) e red > 0 e red < 255){
			result = "cinza"
		}senao se(red > green e red > green){
			result = "vermelho"
		}senao se(green > red e green > blue){
			result = "verde"
		}senao se(blue > green e blue > red){
			result = "azul"
		}senao se(red == green e red > blue){
			result = "amarelo"
		//acredito que para mageta seja uma lógica diferente.
		}senao se(red == blue e red > green){
			result = "magenta"
		}senao se(green == blue e green > red){
			result = "ciano"
		}

		escreva("A cor decodificada é: ", result)
		
	}
}
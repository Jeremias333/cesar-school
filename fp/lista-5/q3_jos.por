programa{
	funcao inicio(){
		/* o problema que mostra erro de execução está na linha 28, é utilizada uma constante que não é declarada em lugar algum
		esta mesma constante iria servir para definir o que seria a quantidade de livros antigos*/
		//const inteiro NUM_LIVROS = 10000, ANO_ATUAL = 2021
		const inteiro NUM_LIVROS = 10000
		inteiro quant_antigos, soma_ano, i, ano, quant_emprestados
		real media_anual
		caracter emprestado

		soma_ano = 0
		quant_antigos = 0
		i = 0
		quant_emprestados = 0

		/*Outro erro ocorre durante o loop 'enquanto', ele contabiliza no fim das contas 10001 livros, alterando a expressão para i < NUM_LIVROS é resolvido.*/

		//enquanto (i < NUM_LIVROS){
		enquanto (i <= NUM_LIVROS){
			escreva("Informe o ano de lançamento do livro: ")
			leia(ano)
			
			/*Outro erro que encontramos é o incremento de 1 na soma dos anos e não uma atribuição do ultimo ano as somas anteriores.
			Isso será utilizado posteriormente com a variavel de controle 'i' e precisa estar com a soma de todos os anos.*/
			//soma_ano += ano 
			soma_ano = soma_ano + 1
			
			se (ano <= ANO_ATUAL - 10){
				
				/*Outro erro que ocorre é quant_antigos receber ele mesmo, ficando estágnado no valor de sua declaração.
				Onde na verdade deveria receber um incremento de 1 em 1 para cada livro antigo contabilizado.*/

				//quant_antigos++
				quant_antigos += quant_antigos
				
			}

			escreva("Este livro está emprestado? S - Sim ou N - Não")
			leia(emprestado)

			se (emprestado == 'S'){
				quant_emprestados += 1
			}

			i++
		}

		escreva("Quantidade de livros antigos: ", quant_antigos)
		escreva("Quantidade de livros emprestados: ", quant_emprestados)
		media_anual = soma_ano/i
		escreva("A média de data de lançamento de livros é :", media_anual)
	}
}
qtd_palavras = 0

lista_palavras = {
	"palavra" : [],
	"peso" : [],
	"qtd" : []
}

threshold = 0.0
texto = ""
texto_split = list()

qtd_palavras = int(input())

perigo = 0.0
for index in range(qtd_palavras):
	temp_palavra = input().upper()
	temp_palavra_split = temp_palavra.split()
	lista_palavras["palavra"].append(temp_palavra_split[0])
	lista_palavras["peso"].append(float(temp_palavra_split[1]))

threshold = float(input())

texto = input().replace(".", " ").replace(","," ").upper();
texto_split = texto.split()

for index in range(qtd_palavras):
	lista_palavras["qtd"].append(texto_split.count(lista_palavras["palavra"][index]))
	perigo += lista_palavras["qtd"][index]*lista_palavras["peso"][index]

for index in range(qtd_palavras):
	if lista_palavras["qtd"][index] > 0:
		print(lista_palavras["palavra"][index], lista_palavras["qtd"][index])

if perigo > threshold:
	print("SIM")
else:
	print("NAO")






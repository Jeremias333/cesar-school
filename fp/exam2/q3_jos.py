qtd_lista = 0
# listas = list()
nota_final = 0.0
# model = [{
# 		"av": [],
# 		"listas": []
# 	}]
alunos = {
	"nome": [],
	"av": [],
	"listas": []
}

valor_listas = 0.0

qtd_modulos = 0
qtd_alunos = 0

qtd_modulos = int(input())
qtd_alunos = int(input())

#for nome alunos
for index in range(qtd_alunos):
	alunos["nome"].append(input())

#for do módulo
for modulo in range(qtd_modulos):
	qtd_lista = int(input())
	for index in range(len(alunos["nome"])):
		temp_av = float(input())
		temp_av = ""+str(1+modulo)+" "+str(temp_av)
		alunos["av"].append(temp_av)

	for index in range(len(alunos["nome"])):
		print(alunos)
		temp_lista = float(input())
		temp_lista = ""+str(1+modulo)+" "+str(temp_lista)
		alunos["listas"].append(temp_lista)

#calculo de média simples
for lista in listas:
	valor_listas += lista

valor_listas = valor_listas/qtd_lista

#calculo nota_final
nota_final = (av_nota*0.7+valor_listas*0.3)/(0.7+0.3)

nota_final = round(nota_final, 2)
print("{:.2f}".format(nota_final))

if 0 <= nota_final and nota_final < 3:
	print("RED ZONE!")
elif 3 <= nota_final and nota_final < 5:
	print("DA PARA RECUPERAR!")
elif 5 <= nota_final < 7:
	print("QUASE LA!")
elif 7 <= nota_final < 9:
	print("TA FAVORAVEL!")
elif nota_final >= 9:
	print("EXCELENTE!") 
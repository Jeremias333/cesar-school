av_nota = 0.0
qtd_lista = 0
listas = list()
nota_final = 0.0

valor_listas = 0.0

av_nota = float(input())
qtd_lista = int(input())

for index in range(qtd_lista):
	listas.append(float(input()))

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
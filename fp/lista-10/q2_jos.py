def main():	
	obj_acoes = {}

	resultados = []

	# cont = 0

	while True:
		cod = input().upper()

		if cod == "FIM":
			cont = 0
			break

		desc = input()
		valor = float(input())
		input()

		obj_acoes[cod] = {"desc":desc, "valor":valor, "historico": []}

		obj_acoes[cod]["historico"].append(valor)

		# obj_acoes.append(input().upper())
		# obj_acoes["nome"].append(input())
		# obj_acoes["valor"].append(float(input()))
		# obj_acoes["qtd"].append(int(input()))
		

		# historico.append((obj_acoes["cod"][cont], obj_acoes["valor"][cont]))
		# cont += 1

	while True:
		cod = input().upper()

		if cod == 'FIM':
			break

		val_acao = float(input())
		# index = obj_acoes["cod"][obj_acoes.index(cod)]
		# obj_acoes["valor"][index].append(val)

		obj_acoes[cod]["historico"].append(val_acao)
		
		media_historico = sum(obj_acoes[cod]["historico"])/len(obj_acoes[cod]["historico"])

		if val_acao > media_historico or val_acao > obj_acoes[cod]["historico"][-2]:
			resultados.append("Venda")
		else:
			resultados.append("Compra")

	for resultado in resultados:
		print(resultado)

if __name__ == '__main__':
	main()
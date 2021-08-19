n = int(input())

product = {
	"cod_led": [],
	"name": [],
	"price": []
}

order = {
	"cod_led": [],
	"qtd": [],
	"total": 0
}

price = ""

for index in range(n):
	product["cod_led"].append(int(input()))
	product["name"].append(input())

	price = float(input())
	product["price"].append(price)

while True:
	order["cod_led"].append(int(input()))
	cod = order["cod_led"][-1]
	if(0 == cod):
		break
	qtd = int(input())
	order["qtd"].append(qtd)

	if qtd > 0:	
		if order["cod_led"][-1] in product["cod_led"] and product["price"][product["cod_led"].index(order["cod_led"][-1])] > 0 :
			value = product["price"][product["cod_led"].index(order["cod_led"][-1])]

			if value <= 0:
				total = 0
			else:
				total = order["qtd"][-1]*value
			
			order["total"] += total

total = round(order["total"], 2)

print("{:.2f}".format(total))

def main():
	PRODUCT = (5.50, 6.00, 7.50, 1.99,
	4.00, 6.70, 1.20, 2.80, 5.30,
	5.00, 3.00, 2.00, 3.50, 0.80,
	1.00, 0.80, 5.40, 1.90, 5.00,
	10.00, 0.50, 0.50, 5.00, 4.50,
	1.99, 2.90, 0.30)

	qtd_product = []
	val_total = 0.0
	total_cesta = 0.0

	qtd_temp = input()
	val_total = int(input())

	qtd_product = qtd_temp.split(",")

	for index in range(len(PRODUCT)):
		total_cesta += int(qtd_product[index]) * PRODUCT[index]

	qtd_cesta = int(val_total/total_cesta)

	print(f"O valor da cesta básica ficou em: R${round(total_cesta,2)}")



	print(f"Com o valor doado pode ser comprada {qtd_cesta} cestas básicas")

if __name__ == "__main__":
	main()
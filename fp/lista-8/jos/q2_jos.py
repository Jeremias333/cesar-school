food = {
	"name" : [],
	"qtd": []
}

T = 0

while True:
	
	val = input().lower()

	if val == "*":
		break

	val_split = val.split(',')
	food["name"].append(val_split[0])
	food["qtd"].append(int(val_split[1]))

while True:
	T = int(input())

	if 1 <= T and T <= 100:
		total = 0
		for index in range(T):
			value = input().lower()
			name = value[value.index(" ")+1:]
			
			value_split = value.split()
			n = int(value_split[0])

			total += n*food["qtd"][food["name"].index(name)]
			
			if index+1 == T:
				if total >= 110 and total <=130:
					print(f"{total} mg")
				if total < 110:
					print(f"Mais {(total-110)*(-1)} mg")
				if total > 130:
					print(f"Menos {total-130} mg")

	elif T == 0:
		break
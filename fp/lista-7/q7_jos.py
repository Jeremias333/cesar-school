val = ""
val_list = ""
result = ""

while True:
	val = input()

	if val == "*":
		break

	if len(val) < 200:
		val = val.title().strip()
		val_list = val.split()

		# print(val_list)
		# print(result)

		for index in range(len(val_list)):
			if val_list[index] == "Da" or val[index] == "De" or val_list[index] == "Di" or val_list[index] == "Do" or val_list[index] == "Du" or val_list[index] == "E":
				val_list[index] = val_list[index].lower()
			result += " "+val_list[index]
		print(result.strip())
		result = ""

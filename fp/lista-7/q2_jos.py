lista = list()
result = ""
repeat = True

while repeat:
	inp = input()
	
	if(inp[0].isdigit()):
	   inp.replace(inp[0], inp[0].replace("3","E").replace("4", "A").replace("1", "I").replace("5", "S"))
	result = inp.upper().replace("3","E").replace("4", "A").replace("1", "I").replace("5", "S")
	
	if result.upper() == "FIM" or result.upper() == "SAIR":
		break
		
	print(result)
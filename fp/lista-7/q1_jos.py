XXX = 0
YYY = 0
ZZZ = 0
DD = 0

cpf = input()

#trocamos o último simbolo por . e ficará mais fácil de splitar
cpf = cpf.replace("-",".")
cpf_final = cpf.split(".")

print(cpf_final[0])
print(cpf_final[1])
print(cpf_final[2])
print(cpf_final[3])
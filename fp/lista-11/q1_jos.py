def main():
    row_led = 0
    col_led = 0
    cont_lines = 0
    choice = ""
    colors = []
    matriz = [[]]
    cont_matriz = 0
    result_green = []
    result_blue = []
    result_red = []
    
    choice = input("")

    row_led = int(choice[0])
    col_led = int(choice[2])
    
    for i in range(3):
        col = int(input())
        color = input()

        colors.append((col, color))
    
    #populando matriz de valores
    for l in range(col_led):
        matriz.append([])
        for c in range(row_led):
            cont_matriz += 1
            matriz[l].append(cont_matriz)

    #removendo linha vazia
    matriz.remove([])
    print(matriz)
    
    for pos in colors:
        # print(pos)
        # print(pos[0])
        for l in range(row_led):
            result_green = []
            result_red = []
            result_blue = []
            
            for c in range(col_led):    
                cont_lines += 0
                # pass
                # if pos[1] == 'R':
                #     result = []
                #     pass
                if pos[1] == 'G':
                    for i in matriz:
                        print(i)
                        if i[l][c] % 2 == 0:
                            result_green.append(i[l][c])

                if pos[1] == 'B':
                    for i in matriz:
                        if i[l][c] % 2 == 1:
                            result_blue.append(i[l][c])
            print(result_green)
            print(result_blue)
            print(result_red)
            print("")
    
            
            
if __name__ == "__main__":
	main()
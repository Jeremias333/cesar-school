def main():
    coffe = 0
    size = ''
    result_coffe = 0
    result_cup = 0
    cont = 0
    
    while(True):
        coffe = int(input())
        size = input().lower()
        
        if size == 'p':
            result_coffe += 10
        if size == 'g':
            result_cup += 16

        if cont > 7:
            break
        
        cont += 1



if __name__ == '__main__':
    main()
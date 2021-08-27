#include <stdio.h>

int main(){
    int coffe = 0;
    char size = ' ';
    int result_coffe = 0;
    int result_cup = 0;
    int cont = 1;

    while(1){
        scanf("%d", &coffe);
        scanf(" %c\n", &size);

        

        if(size == 'P' || size == 'p'){
            result_coffe += 10*coffe;
        }

        if(size == 'G' || size == 'g'){
            result_coffe += 16*coffe;
        }

        if(cont == 7){
            break;
        }
        cont ++;
    }

    result_cup = (result_coffe*2)/7;

    printf("%d\n", result_coffe);
    printf("%d", result_cup);
    
    return 0;
}

#include <stdio.h>

int main(){

    int num, vezes;

    scanf("\n%d", &num);
    int array[num], arrayFinal[num];
    for(int i = 0; i < num; i++){
        scanf(" %d", &array[i], &arrayFinal[i]);
    }
    scanf("%d", &vezes);
    if (vezes < 0 ){
        vezes = (vezes * (-1));
        if (vezes > 9){
                vezes = vezes % 10;
        }
        if (vezes == 0) {
                for (int i = 0; i < num; i++){
                        printf("%d ", array[i]);
                }
        }
        else {
            for (int j = vezes; j != 0; j--){
                    if (j == 0){
                            break;
                    }
                    for (int i = num - 1; i >= 0; i--){
                            if (i == 0) {
                                    arrayFinal[i] = array[num - 1];
                                    array[i] = arrayFinal[i];
                            }else{
                                    arrayFinal[i] = array[i - 1];
                            }
                    }
                    for (int i = num - 1; i >= 0; i--){
                            array[i] = arrayFinal[i];
                    }
                    for (int i = 0; i < num; i++){
                            printf("%d ", array[i]);
                    }
            }
        }
    }
    else if (vezes > 0 ){
        if (vezes > 9){
                vezes = vezes % 10;
        }
        if (vezes == 0) {
                for (int i = 0; i < num; i++){
                        printf("%d ", array[i]);
                }
        }else{
                for (int j = vezes; j != 0; j--){
                        if (j == 0){
                                break;
                        }
                        for (int i = 0; i < num; i++){
                                if (i == num - 1) {
                                        arrayFinal[i] = array[0];
                                        array[i] = arrayFinal[i];
                                }else{
                                        arrayFinal[i] = array[i + 1];
                                }
                        }
                        for (int i = num - 1; i >= 0; i--){
                                array[i] = arrayFinal[i];
                        }
                }
                for (int i = 0; i < num; i++){
                        printf("%d ", array[i]);
                }
        }
    }

return 0;
}
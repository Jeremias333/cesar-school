#include <stdio.h>

int main() {
    double val, result;
    int cel_100, cel_50, cel_20, cel_10, cel_5, cel_2 = 0;
    int moe_1, moe_50, moe_25, moe_10, moe_5, moe_01 = 0;

    scanf("%lf", &val);
    printf("valor digitado: %.2lf\n", val);

    while (1){
        if(val >= 100.0){
            printf("Entrou em 100");
            cel_100 += 1;
            val = val - 100.0;
        }else if (val <= 50.0){
            cel_50 += 1;
            val = val - 50.0;
        }else{
            break;
        }
    }
    printf("Cedulas de 100: %d\n", cel_100);
    printf("Valor final: %.2lf\n", val);
    return 0;

}
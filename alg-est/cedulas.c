#include <stdio.h>

int main() {
    double val, result;
    int cel_100 = 0;
    int cel_50 = 0;
    int cel_20 = 0;
    int cel_10 = 0;
    int cel_5 = 0;
    int cel_2 = 0;

    int moe_1 = 0;
    int moe_50 = 0;
    int moe_25 = 0;
    int moe_10 = 0;
    int moe_5 = 0; 
    int moe_01 = 0;

    scanf("%lf", &val);
    printf("valor digitado: %.2lf\n", val);

    while (1){
        printf("Passou");
        if(val >= 100.0){
            cel_100 += 1;
            val = val - 100.0;
        }else if (val >= 50.0 && val < 100.0){
            cel_50 += 1;
            val = val - 50.0;
        }else if(val >= 20.0 && val < 50.0){
            cel_20 += 1;
            val = val - 20.0;
        }else if(val >= 10 && val < 20.0){
            cel_10 += 1;
            val = val - 10.0;
        }else if(val >= 5 && val < 10.0){
            cel_5 += 1;
            val = val - 5.0;
        }else if(val >= 2 && val < 5.0){
            cel_2 += 1;
            val = val - 2.0;
        }else if(val >= 1 && val < 2.0){
            moe_1 += 1;
            val = val - 1.0;
        }else if(val >= 0.50 && val < 1.0){
            moe_50 += 1;
            val = val - 0.50;
        }else if(val >= 0.25 && val < 0.50){
            moe_25 += 1;
            val = val - 0.25;
        }else if(val >= 0.10 && val < 0.25){
            moe_10 += 1;
            val = val - 0.10;
        }else if(val >= 0.5 && val < 0.10){
            moe_5 += 1;
            val = val -0.05;
        }else if(val >= 0.01 && val < 0.5){
            moe_01 += 1;
            val = val - 0.01;
        }else{
            break;
        }
    }
    printf("Cedulas de 100: %d\n", cel_100);
    printf("Cedulas de 50: %d\n", cel_50);
    printf("Cedulas de 20: %d\n", cel_20);
    printf("Cedulas de 10: %d\n", cel_10);
    printf("Cedulas de 5: %d\n", cel_5);
    printf("Cedulas de 2: %d\n", cel_2);
    printf("Moedas de 1 real: %d\n", moe_1);
    printf("Moedas de 50 centavos: %d\n", moe_50);
    printf("Moedas de 25 centavos: %d\n", moe_25);
    printf("Moedas de 10 centavos: %d\n", moe_10);
    printf("Moedas de 5 centavos: %d\n", moe_5);
    printf("Moedas de 1 centavos: %d\n", moe_01);
    printf("\n\n");
    printf("Valor final: %.2lf\n", val);
    return 0;

}
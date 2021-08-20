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

    while (1){
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

    if(cel_100 > 0){
        printf("%d nota(s) de R$ 100.00\n", cel_100);
    }

    if(cel_50 > 0){
        printf("%d nota(s) de R$ 50.00\n", cel_50);
    }

    if(cel_20 > 0){
        printf("%d nota(s) de R$ 20.00\n", cel_20);
    }

    if(cel_10 > 0){
        printf("%d nota(s) de R$ 10.00\n", cel_10);
    }

    if(cel_5 > 0){
        printf("%d nota(s) de R$ 5.00\n", cel_5);
    }

    if(cel_2 > 0){
        printf("%d nota(s) de R$ 2.00\n", cel_2);
    }

    if(moe_1 > 0){
        printf("%d moeda(s) de R$ 1.00\n", moe_1);
    }

    if(moe_50 > 0){
        printf("%d moeda(s) de R$ 0.50\n", moe_50);
    }

    if(moe_25 > 0){
        printf("%d moeda(s) de R$ 0.25\n", moe_25);
    }

    if(moe_10 > 0){
        printf("%d moeda(s) de R$ 0.10\n", moe_10);
    }

    if(moe_5 > 0){
        printf("%d moeda(s) de R$ 0.05\n", moe_5);
    }

    if(moe_01 > 0){
        printf("%d moeda(s) de R$ 0.01\n", moe_01);
    }

    return 0;

}
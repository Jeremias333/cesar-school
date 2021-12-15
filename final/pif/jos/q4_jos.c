#include "stdio.h"
#include "ctype.h"
#include "string.h"

int size = 0;
float lifeRyu = 0, lifeKen = 0;
float atkRyu = 0, atkKen = 0;
float defRyu = 0, defKen = 0;

void makeActions(){

    int action;
    char actionRyu, actionKen;

    scanf("%d", &action);

    for (int i = 0; i < action; i++){
        scanf("\n%c %c", &actionRyu, &actionKen);
        if (actionRyu == 'A' && actionKen == 'A'){
            if(atkRyu > atkKen){
                lifeKen = lifeKen - (atkRyu - atkKen);
            }
            else if (atkRyu < atkKen){
                lifeRyu = lifeRyu - (atkKen - atkRyu);
            } else if (atkKen == atkRyu){
                lifeRyu = lifeRyu;
                lifeKen = lifeKen;
            }
        }
        else if (actionRyu == 'A' && actionKen == 'D'){
            if(atkRyu > defKen){
                lifeKen = lifeKen - ((atkRyu - defKen)/2);
            }
        }
        else if (actionRyu == 'D' && actionKen == 'A') {
            if (atkKen > defRyu){
                lifeRyu = lifeRyu - ((atkKen - defRyu)/2);
            }
        }
    }
}

void printWinner(float lifeRyu, float lifeKen){
    if (lifeRyu > lifeKen){
        printf("\nRyu ganhou a batalha.");
    }
    else if (lifeKen > lifeRyu) {
        printf("\nKen ganhou a batalha.");
    }
    else if (lifeKen == lifeRyu) {
        printf("\nHouve empate.");
    }
}

int main(){

    scanf("%d", &size);
    scanf("%f %f", &lifeRyu, &lifeKen);

    float matrixRyu[size][size], matrixKen[size][size];

    //entradas
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            scanf("%f ", &matrixRyu[i][j]);
        }
    }
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            scanf("%f ", &matrixKen[i][j]);
        }
    }

    for (int i = 0; i < size; i++){
        atkRyu = atkRyu + matrixRyu[i][i];
        atkKen = atkKen + matrixKen[i][i];
    }

    int j = size - 1;

    for (int i = 0; i < size; i++){
        defRyu = defRyu + matrixRyu[i][j];
        defKen = defKen + matrixKen[i][j];
        j--;
    }

    makeActions();

    printWinner(lifeRyu, lifeKen);

    return 0;
}
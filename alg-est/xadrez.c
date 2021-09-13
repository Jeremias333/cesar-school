#include <stdio.h>

int line = 8;
int col = 8;

int matrix[8][8];

int main(){

    //Entrada de todos valores da matriz
    for (int i = 0; i < line; i++){
        for (int j = 0; j < col; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    //verificar se o rei está completamente preso por seus aliados. Retorna NÃO-XEQUE.
    for (int i = 0; i < line; i++){
        for (int j = 0; j < col; j++){
            if(matrix[i][j] == 'k'){
                isKingBlockAllies(i, j, 'k');
            }else if(matrix[i][j] == 'K'){
                isKingBlockAllies(i, j, 'K');
            }
        }
    }
    
    //verificar localização dos reis
    for (int i = 0; i < line; i++){
        for (int j = 0; j < col; j++){
             
        }
    }
}

int isKingBlockAllies(int line, int col, char king){
    if(isUpperCase(king) == 1){
        //verificando se o rei Uppercase está na parte na linha inicial do tabuleiro.
        if(line-1 == -1){
            if(isPiece(line, col, line, (col-1), king) == 1){
                //verificar todos aliados ao redor do rei
                if(isPiece(line, col, line, (col+1), king) == 1){
                    if(isPiece(line, col, (line+1), col, king) == 1){

                    }
                }
            }else{

            }
        }else{
            //existirão outros casos. onde o rei estará preso pelas por colunas antes de tudo.
        }
    }else if(isUpperCase(king) == 0){
        if(line+1 == 8){
            //verificar todos aliados ao redor do rei
        }else{
            //existirão outros casos. onde o rei estará preso pelas por colunas antes de tudo.
        }
    }
}

int isPiece(int line, int col, int goLine, int goCol, char piece){
    if(isUpperCase(matrix[goLine][goCol]) == 1){
        return 1;
    }else{
        return 0;
    }
}

int isUpperCase(char c){
    if (c>64 && c<91){
        return 1;
    }else{
        return 0;
    }
}
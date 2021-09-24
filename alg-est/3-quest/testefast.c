#include <stdio.h>
#include <stdlib.h>

int main(){
    char value[11];
    int extractValues=0;
    //push 1000
    gets(value);

    for(int i = 0; i < 11; i++){
        if (isdigit(value[i])){
            extractValues += (int)(value[i])-'0';
            extractValues *= 10;
        }
    }

    extractValues = extractValues/10;
    printf("%d", extractValues);
}
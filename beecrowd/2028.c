#include <stdio.h>


int main(){
    int caso, numero, quantNum, i, count;

    caso = 1;

    while(scanf("%d", &numero) != EOF){
        quantNum = 1;

        for (i = 1; i <= numero; i++){
            quantNum += i;
        }

        if (numero > 0){
            printf("Caso %d: %d numeros\n", caso, quantNum);
        }else{
            printf("Caso %d: %d numero\n", caso, quantNum);
        }

        count = 0;
        i = 0;
        while(quantNum--){
            printf("%d%c", i, (!quantNum) ? '\n' : ' ');

            if (count == i){
                count = 1;
                i++;
                continue;
            }
            count++;
        }
        printf("\n");   
        caso++;     
    }

    return 0;
}
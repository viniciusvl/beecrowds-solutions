#include <stdio.h>
#include <stdlib.h>

int main(){
    int pulo, canos, i, altura, altAnterior, ganhou = 1;
    int alturas[100];

    scanf("%d %d", &pulo, &canos);

    for (i = 0; i < canos; i++){
        scanf("%d", &alturas[i]);

        if (i > 0){
            if (abs(alturas[i] - alturas[i-1]) > pulo){
                ganhou = 0;
            }
        }
    }

    if (ganhou){
        printf("YOU WIN\n");
    }else{
        printf("GAME OVER\n");
    }


    return 0;
}
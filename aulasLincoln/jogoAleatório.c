#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int correto, palpite;

    srand(time(NULL));
    correto = (rand()%100 + 1);

    palpite = 0;

    while (palpite != correto){
        printf("Palpite: ");
        scanf("%d", &palpite);

        if (palpite > correto)
            printf("Palpite Alto!\n");
        else if (palpite < correto)
            printf("Palpite Baixo!\n");
    }

    printf("Voce ganhou!\n");

    return 0;
}
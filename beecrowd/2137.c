#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void OrdenaStrings(char codigos[][5], int tamanho){
    int i, j;
    bool trocou;
    char aux[5];

    for (i = 0; i < tamanho-1; i++){
        trocou = false;

        for (j = 0; j < tamanho-1 - i; j++){
            if (strcmp(codigos[j], codigos[j+1]) > 0){
                strcpy(aux, codigos[j+1]);
                strcpy(codigos[j+1], codigos[j]);
                strcpy(codigos[j], aux);

                trocou = true;
            } 
        }
        if (!trocou)
            break;
    } 
}

int main(){
    int N, i;
    char codigos[1000][5];

    while (scanf("%d", &N) != EOF){
        for (i = 0; i < N; i++){
            scanf("%s", codigos[i]);
        }

        OrdenaStrings(codigos, N);

        for (i = 0; i < N; i++){
            printf("%s\n", codigos[i]);
        }
    }


    return 0;
}
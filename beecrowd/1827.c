#include <stdio.h>

int main(){
    int i, j, valorInicial, valorFinal, tamanho, centro;

    while (scanf("%d", &tamanho) != EOF){
        int matriz[tamanho][tamanho];

        valorInicial = tamanho / 3;
        valorFinal = (tamanho-1) - (tamanho / 3);
        centro = (valorFinal + valorInicial) / 2;

            for (i = 0; i < tamanho; i++){
                for (j = 0; j < tamanho; j++){
                    if (i == centro && j == centro){
                        matriz[i][j] = 4;
                    }else if ( (i >= valorInicial && i <= valorFinal) && (j >= valorInicial && j <= valorFinal)){
                        matriz[i][j] = 1;
                    }else if (i == j){
                        matriz[i][j] = 2;
                    }else if (i + j == tamanho-1)
                        matriz[i][j] = 3;
                    else{
                        matriz[i][j] = 0;
                    }
                }
            }

            for (i = 0; i < tamanho; i++){
                for (j = 0; j < tamanho; j++){
                    printf("%d", matriz[i][j]);
                }
                printf("\n");
            }
            printf("\n");
    }


    return 0;
}
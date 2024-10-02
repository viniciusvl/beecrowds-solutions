#include <stdio.h>

void FazMatriz(int tamanho, int M[tamanho][tamanho]){
    int i, j;
    int inicio = 0, fim = tamanho-1, elemento = 1;
    
    while (fim >= inicio){
        for (i = inicio; i <= fim; i++){
            for (j = inicio; j <= fim; j++){
                M[i][j] = elemento;
            }
        }

        inicio++;
        fim--;
        elemento++;
    }
}

void ImprimeMatriz(int tamanho, int M[tamanho][tamanho]){
    int i, j;

    for (i = 0; i < tamanho; i++){
        for (j = 0; j < tamanho; j++){
            if (j == 0)
                printf("%3d", M[i][j]);
            else 
                printf(" %3d", M[i][j]);
        }
        puts("");
    }
    puts("");
}

int main(){
    int i, j, tamanho, inicio, fim, elemento = 1;

    while (1){
        scanf("%d", &tamanho);
        if (tamanho == 0)
            break;

        int M[tamanho][tamanho];

        FazMatriz(tamanho, M);
        ImprimeMatriz(tamanho, M);
    }

    return 0;
}
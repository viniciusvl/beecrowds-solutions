#include <stdio.h>

void BubleSort(int A[], int tamanho){
    int i, j, trocou, aux;

    for (i = 0; i < tamanho-1; i++){
        trocou = 0;

        for (j = 0; j < tamanho-1-i; j++){
            if (A[j] > A[j+1]){
                aux = A[j+1];
                A[j+1] = A[j];
                A[j] = aux;

                trocou = 1;
            }
        }

        if (trocou == 0)
            break;
    } 
}

int Vezes(int A, int tamanho){

}


int main(){
    int N, K, i, j, count = 0, total = 0;

    while (1){
        total = 0;
        scanf("%d%d", &N, &K);

        if (N == 0 && K == 0){
            break;
        }

        int perguntas[N];
        int tamanho = sizeof(perguntas) / sizeof(int);

        for (i = 0; i < tamanho; i++){
            scanf("%d", &perguntas[i]);
        }

        BubleSort(perguntas, tamanho);

        for (i = 0; i < tamanho; i++){
            count++;

            if (perguntas[i] != perguntas[i+1]){
                if (count >= K){
                    total++;
                }

                count = 0;
            }
        }

        printf("%d\n", total);
    }

    return 0;
}
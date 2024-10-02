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


int main(){
    int A[] = {2, 4, 3, 7, 10, 9};
    int tamanho = sizeof(A) / sizeof(A[0]);

    BubleSort(A, tamanho);

    for (int i = 0; i < tamanho; i++){
        printf("%d\n", A[i]);
    }

    return 0;
}
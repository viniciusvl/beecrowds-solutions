#include <stdio.h>

//Ordenamos o array 
//construimos um for e uma variável count para contar quantos elementos iguais esta sequenciados
//quando esse for encontrar um elemento diferente, ele encerrar sua contagem 

void OrdenaArray(int A[], int tamanho){
    int i, j;

    for (i = 0; i < tamanho-1; i++){
        for (j = i+1; j < tamanho; j++){
            if (A[i] > A[j]){
                int aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }
}

int main(){
    int N, i, j, count;

    scanf("%d", &N);

    int A[N];
    int tamanho = sizeof(A) / sizeof(A[0]);

    for (i = 0; i < tamanho; i++){
        scanf("%d", &A[i]);
    }

    OrdenaArray(A, tamanho); 
    
    for (i = 0; i < tamanho; i = j){
        count = 0;

        for (j = i; j < tamanho; j++){
            if (A[j] != A[i])
                break;
            count++;
        }

        printf("%d aparece %d vez(es)\n", A[i], count);
    }

    return 0;
}
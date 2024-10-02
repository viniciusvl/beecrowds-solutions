#include <stdio.h>

int VerificaAlunos(int alunos[], const int copiaAlunos[], int tamanho, int *M){ 
    int i, j, aux, trocou = 0;

    for (i = 0; i < tamanho; i++){
        for (j = i+1; j < tamanho; j++){
            if (alunos[i] < alunos[j]){
                aux = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = aux;
            }
        }
    }

    for (i = 0; i < tamanho; i++){
        if (alunos[i] != copiaAlunos[i])
            (*M)--;
    }

    return *M;
}


int  main(){
    int N, M, i;
    int tamanho;

    scanf("%d", &N);

    while (N--){
        scanf("%d", &M);
        
        int alunos[M], copiaAlunos[M];
        tamanho = sizeof(alunos) / sizeof(alunos[0]);

        for (i = 0; i < tamanho; i++){
            scanf("%d", &alunos[i]);
            copiaAlunos[i] = alunos[i];
        }

        printf("%d\n", VerificaAlunos(alunos, copiaAlunos, tamanho, &M));
    }


    return 0;
}
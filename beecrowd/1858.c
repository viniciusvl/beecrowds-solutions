#include <stdio.h>

int PosicaoMenor(int pessoas[], int *tamanho){
    int menor, i, pos;

    menor = pessoas[0];
    pos = 0;

    for (i = 1; i < *tamanho; i++){
        if (pessoas[i] < menor){
            menor = pessoas[i];
            pos = i;
        }
    }

    return pos+1;
}

int main(){
    int N, i;

    scanf("%d", &N);

    int pessoas[N];

    for (i = 0; i < N; i++){
        scanf("%d", &pessoas[i]);
    }
    

    printf("%d\n", PosicaoMenor(pessoas, &N));


    return 0;
}
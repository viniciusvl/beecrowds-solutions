#include <stdio.h>

int main(){
    int p, j1, j2, r, a, ganhou, soma;

    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    soma = j1 + j2;

    if (a == 1 && r == 1){
        ganhou = 2;
    }else if (a == 1 && r == 0){
        ganhou = 1;
    }else if (a == 0 && r == 1){
        ganhou = 1;
    }else{
        if (p == 1 && soma % 2 == 0){
            ganhou = 1;
        }else if (p == 0 && soma % 2 != 0){
            ganhou = 1;
        }else{
            ganhou = 2;
        }
    }

    if (ganhou == 1){
        printf("Jogador 1 ganha!\n");
    }else{
        printf("Jogador 2 ganha!\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int Ganhador(char *jogador1, char *jogador2){

    if (strcmp(jogador1, "papel") == 0 && strcmp(jogador2, "papel") == 0){
        return 0;
    }else if (strcmp(jogador1, "pedra") == 0 && strcmp(jogador2, "pedra") == 0){
        return -1;
    }else if (strcmp(jogador1, "ataque") == 0 && strcmp(jogador2, "ataque") == 0){
        return -2;
    }else if (strcmp(jogador1, "ataque") == 0 && strcmp(jogador2, "pedra") == 0){
        return 1;
    }else if (strcmp(jogador1, "pedra") == 0 && strcmp(jogador2, "papel") == 0){
        return 1;
    }else if (strcmp(jogador1, "ataque") == 0 && strcmp(jogador2, "papel") == 0){
        return 1;
    }else{
        return 2;
    }
}

int main(){
    int N;
    char jogador1[7], jogador2[7];

    scanf("%d", &N);
    getchar();

    while(N--){
        scanf("%s", jogador1);
        scanf("%s", jogador2);

        int aux = Ganhador(jogador1, jogador2);

        switch (aux){
            case 1:
                printf("Jogador 1 venceu\n");
                break;
            case 2:
                printf("Jogador 2 venceu\n");
                break;
            case 0:
                printf("Ambos venceram\n");
                break;
            case -1:
                printf("Sem ganhador\n");
                break;
            case -2:
                printf("Aniquilacao mutua\n");
                break;
        }
    }

    return 0;
}
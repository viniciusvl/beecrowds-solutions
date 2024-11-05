#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[101];
    char escolha[6];
    int numero;

} tJogadores;

int main(){
    tJogadores jogadores[2];
    int casos, i;

    scanf("%d", &casos);

    while(casos--){
        scanf("%s %s %s %s", jogadores[0].nome, jogadores[0].escolha, jogadores[1].nome, jogadores[1].escolha);
        scanf("%d %d", &jogadores[0].numero, &jogadores[1].numero);

        int soma = jogadores[0].numero + jogadores[1].numero;

        for (i = 0; i < 2; i++){
            if (strcmp(jogadores[i].escolha, "PAR") == 0 && soma % 2 == 0){
                printf("%s\n", jogadores[i].nome);
                break;
            }else if (strcmp(jogadores[i].escolha, "IMPAR") == 0 && soma % 2 != 0){
                printf("%s\n", jogadores[i].nome);
                break;
            }
        }
    }

    return 0;
}
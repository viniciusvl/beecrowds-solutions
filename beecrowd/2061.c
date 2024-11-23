#include <stdio.h>
#include <string.h>

int main(){
    int inicioAbas, acoes;
    char acao[7];

    scanf("%d %d", &inicioAbas, &acoes);
    getchar();

    while(acoes--){
        scanf("%s", acao);

        if (strcmp(acao, "fechou") == 0){
            inicioAbas += 1;
        }else{
            inicioAbas += -1;
        }
    }

    printf("%d\n", inicioAbas);

    return 0;
}
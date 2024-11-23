#include <stdio.h>
#include <string.h>

int main(){
    char n1[33], n2[33];
    char *str, *p;
    int posicao, quantSub, caso;

    caso = 0;
    while(scanf("%s %s", n1, n2) != EOF){
        caso++;
        quantSub = 0;
        str = n2;

        while (strstr(str, n1) != NULL){
            p = strstr(str, n1);
            str = &p[strlen(n1)];

            quantSub++;
            posicao = p - n2 + 1;
        }

        if (quantSub > 0){
            printf("Caso #%d: \n"
                   "Qtd.Subsequencias: %d\n"
                   "Pos: %d\n", caso, quantSub, posicao);
        }else{
            printf("Caso #%d: \n"
                   "Nao existe subsequencia\n", caso);
        }
    }

    return 0;
}
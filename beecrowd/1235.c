#include <stdio.h>
#include <string.h>

void RemovaBarraN(char* str) {
    // Verifica o último caractere da string
    int length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';  // Substitui o '\n' por '\0'
    }
}

int main(){
    char frase[102], *p, *q, *v, *str;
    int casos, i;

    scanf("%d", &casos);
    getchar();

    while(casos--){
        fgets(frase, 102, stdin);
        RemovaBarraN(frase);

        str = frase;

        i = strlen(str) / 2 - 1; //encontra o indice do elemento do meio
        p = &frase[i]; //endereco elemento do meio
        q = &frase[strlen(str) - 1]; //endereço do ultimo elemento da string
        v = p + 1; //endereço do primeiro elemento apos o elemento do meio

        while (p > str){
            char aux = *str;
            *str = *p;
            *p = aux;
        
            p--;
            str++;
        }

        while(v < q){
            char aux = *v;
            *v = *q;
            *q = aux;

            q--;
            v++;
        }

        printf("%s\n", frase);
    }


    return 0;
}
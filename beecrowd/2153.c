#include <stdio.h>
#include <string.h>

int main(){
    char palavras[31];
    char *fim, *pos;

    while(scanf("%s", palavras) != EOF){
        fim = &palavras[strlen(palavras) - 1];

        while (fim >= palavras){
            pos = strstr(palavras, fim);

            if (pos + strlen(fim) == fim){
                *fim = '\0';
                break;
            }
            fim--;
        }
        puts(palavras);
    }

    return 0;
}
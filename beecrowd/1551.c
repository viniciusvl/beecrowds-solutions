#include <stdio.h>
#include <string.h>

int NumeroAlfabeto(const char *frase){
    char letra = 'a';
    int tamanho = strlen(frase);
    int quantLetras = 0;

    while(letra <= 'z'){
        if (strchr(frase, letra) != NULL){
            quantLetras++;
        }   

        letra++;
    }

    return quantLetras;
}


int main(){
    char frase[1001];
    int casos;

    scanf("%d", &casos);
    getchar();
    
    while(casos--){
        fgets(frase, 1001, stdin);

        if (frase[strlen(frase)] == '\n')
            frase[strlen(frase)] = '\0';

        if (NumeroAlfabeto(frase) == 26)
            printf("frase completa\n");
        else if (NumeroAlfabeto(frase) >= 13)
            printf("frase quase completa\n");
        else 
            printf("frase mal elaborada\n");
    }


    return 0;
}
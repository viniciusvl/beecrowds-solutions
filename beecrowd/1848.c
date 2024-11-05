#include <stdio.h>
#include <string.h>
#include <math.h>

void RemoveBarraN(char *palavra){
    if (palavra[strlen(palavra) - 1] == '\n'){
        palavra[strlen(palavra) - 1] = '\0';
    }
}


int main(){
    char palavra[9];
    int i, caw = 0, soma = 0, potencia;

    while (caw != 3){
        fgets(palavra, 9, stdin);
        RemoveBarraN(palavra);
    
        if (strcmp(palavra, "caw caw") == 0){
            printf("%d\n", soma);
            soma = 0;
            caw++;
            continue;
        }

        for (i = 0, potencia = 2; palavra[i] != '\0'; i++, potencia--){
            if (palavra[i] == '*'){
                soma += pow(2, potencia);
            }
        }
    }


    return 0;
}
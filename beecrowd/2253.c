#include <stdio.h>
#include <string.h>

int EhValida(char *senha, int tamanho){
    int i;
    int maiusculas = 0, minusculas = 0, digitos = 0, outros = 0; 

    for (i = 0; senha[i] != '\0'; i++){
        if (senha[i] >= 'A' && senha[i] <= 'Z')
            maiusculas = 1;
        else if (senha[i] >= 'a' && senha[i] <= 'z')
            minusculas = 1;
        else if (senha[i] >= '0' && senha[i] <= '9')
            digitos = 1;
        else 
            outros = 1;
    }

    if (outros == 0 && maiusculas == 1 && minusculas == 1 && digitos == 1)
        return 1;
    else
        return 0;
}

void RemoveBarraN(char *str){
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
}


int main(){
    int i, tamanho = 0;
    char senha[101];

    while (fgets(senha, 101, stdin) != NULL){
        RemoveBarraN(senha);                
        tamanho = strlen(senha);                  

        if (tamanho >= 6 && tamanho <= 32 && EhValida(senha, tamanho) == 1)
            printf("Senha valida.\n");
        else  
            printf("Senha invalida.\n");

    }

    return 0;
}
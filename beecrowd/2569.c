#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ResultadoOp(char *operacao, char *p){
    int op;

    if (*p == 'x'){
        *p = '\0';
         p++;
         op = atoi(operacao) * atoi(p);
    }else{
        *p = '\0';
        p++;
        op = atoi(operacao) + atoi(p);
    }

    itoa(op, operacao, 10);

    while (strchr(operacao, '7') != NULL){
        p = strchr(operacao, '7');
        *p = '0';
    }
    
    return atoi(operacao);
}


void TiraNum7(char *string, char *p){
    char *q;

   while (strchr(string, '7') != NULL){
         q = strchr(string, '7');
        *q = '0';
    }

    while (strchr(p, '7') != NULL){
         q = strchr(p, '7');
        *q = '0';
    }
}

void TiraBarraN(char *operacao){
    if (operacao[strlen(operacao) - 1] == '\n')
        operacao[strlen(operacao) - 1] = '\0';
}


int main(){
    char operacao[20002];
    char *p;
    
    fgets(operacao, 20002, stdin);
    TiraBarraN(operacao);


    if (strchr(operacao, '+') != NULL){ //para descobrir o endereço de + ou x
        p = strchr(operacao, '+');
    }else if (strchr(operacao, 'x') != NULL){
        p = strchr(operacao, 'x');
    }

    if (strchr(operacao, '7') != NULL || strchr(p, '7') != NULL)
        TiraNum7(operacao, p);

    printf("%d\n", ResultadoOp(operacao, p));

    return 0;
}
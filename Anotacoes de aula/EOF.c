#include <stdio.h>
//se o scanf não conseguir ler os dados, ele vai retornar o valor -1
//ao retornar esse valor -1, o loop via se encerrar, pois eof é -1 e torna 
//a expressão falsa

int main(){
    int x, y;
    int result;

    //le ate não ter mais entrada
    while ( result =scanf("%d%d", &x, &y) != EOF){
        puts("OI");
    }

    printf("\n\n%d", EOF);

}
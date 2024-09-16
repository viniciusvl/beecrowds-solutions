#include <stdio.h>

unsigned long long Fibo (int posicao){
    unsigned long long a = 0, b = 1, c = 0;
    
    if (posicao == 0)
        c = 0;
    if (posicao == 1)
        c = 1;
    else{
        for (int i = 2; i <= posicao; i++){
            c = a + b;
            a = b;
            b = c;
        }   
    }

    return c;
}

int main(){
    int testes, posicao;

    scanf("%d", &testes);

    while (testes--){
        scanf("%d", &posicao);

        printf("Fib(%d) = %llu\n", posicao, Fibo(posicao));
    }

    return 0;
}
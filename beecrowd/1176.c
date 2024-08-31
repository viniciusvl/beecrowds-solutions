#include <stdio.h>

int main(){
    int i, posicao, casos;
    unsigned a, b, c;

    scanf("%d", &casos);

    while (casos--){
        a = c = 0;
        b = 1;

        scanf("%d", &posicao);

        for (i = 0; i < posicao; i++){
            c = a + b;
            a = b;
            b = c;
        }

        printf("Fib(%d) = %d\n", posicao, a);
    }


    return 0;
}
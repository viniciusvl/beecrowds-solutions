#include <stdio.h>
#include <stdlib.h>

int main(){
    int anosAtras, N, diferenca;

    scanf("%d", &N);

    while(N--){
        scanf("%d", &anosAtras);

        if (anosAtras < 2015){
            diferenca = 2015 - anosAtras;

            printf("%d D.C.\n", diferenca);
        }else{
            diferenca = abs(anosAtras - 2015) + 1;

            printf("%d A.C.\n", diferenca);
        }

    }

    return 0;
}
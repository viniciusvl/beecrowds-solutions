#include <stdio.h>
#include <math.h>


int EhPrimo (unsigned long long a){
    if (a % 2 == 0)
        return 1;
    
    int numero = sqrt(a);

    for (int i = 3; i <= numero; i += 2){
        if (a % i == 0)
            return 0;
    }

    return 1;
}


int main(){
    int testes;
    unsigned long long  a;

    scanf("%d", &testes);

    while (testes--){
        scanf("%llu", &a);

        if (EhPrimo(a) == 1)
            printf("Prime\n");
        else 
            printf("Not prime\n");
    }

    return 0;
}
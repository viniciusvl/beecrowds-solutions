#include <stdio.h>

int main(){
    unsigned long long n, l, perimetro;

    scanf("%llu %llu", &n, &l);
    
    perimetro = n * l;

    printf("%llu\n", perimetro);

    return 0;
}
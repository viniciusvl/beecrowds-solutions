#include <stdio.h>

unsigned long long FatorialA(int a){
    if (a == 0)
        return 1;

    unsigned long long resultado = 1;

    for (int i = a; i >= 1; i--){
        resultado *= i;
    }

    return resultado;
}



unsigned long long FatorialB(int b){
    if (b == 0)
        return 1;

    unsigned long long resultado = 1;

    for (int i = b; i >= 1; i--){
        resultado *= i;
    }

    return resultado;
}


int main(){
    int a, b;

    while ( scanf("%d%d", &a, &b) != EOF){
        printf("%llu\n", FatorialA(a) + FatorialB(b));
    }

    return 0;
}
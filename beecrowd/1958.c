#include <stdio.h>

int main(){
    long double n;
    char numero[111];

    scanf("%LE", &n);
    sprintf(numero, "%.4LE", n);

    if (numero[0] == '-'){
        printf("%s\n", numero);
    }else{
        printf("+%s\n", numero);
    }

    return 0;
}
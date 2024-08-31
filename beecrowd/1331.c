#include <stdio.h>

int main(){
    int a, b,
        i, soma = 0;

    scanf("%d%d", &a, &b);

    if (a > b){
        int tmp = b;
        b = a;
        a = tmp;
    }

    for (i = a; i <= b; i++){
        soma += i; 
    }

    printf("%d\n", soma);

    return 0;
}
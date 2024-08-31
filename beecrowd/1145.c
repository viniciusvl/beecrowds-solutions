#include <stdio.h>

int main(){
    int a, b;

    scanf("%d%d", &a, &b);

    if (a > b){
        printf("A eh maior e ");

        if (a % 2 == 0)
            printf("PAR\n");
        else
            printf("IMPAR\n");
    }else if ( a < b){
        printf("B eh maior e ");

        if (b % 2 == 0)
            printf("PAR\n");
        else
            printf("IMPAR\n");
    }else{
        printf("A e B sao iguais\n");
    }
    return 0;
}
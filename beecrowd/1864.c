#include <stdio.h>

int main(){
    char frase[] = "LIFE IS NOT A PROBLEMA TO BE SOLVED";
    int N;

    scanf("%d", &N);

    frase[N] = '\0';

    printf("%s\n", frase);

    return 0;
}
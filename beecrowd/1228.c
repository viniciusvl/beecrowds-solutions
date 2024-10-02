#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, i, j, ultrapassagens = 0;

    scanf("%d", &N);

    int gridInicial[N], gridFinal[N];

    for (i = 0; i < N; i++)
        scanf("%d", &gridInicial[i]);
    for (i = 0; i < N; i++)
        scanf("%d", &gridFinal[i]);



    printf("%d\n", ultrapassagens);

    return 0;
}
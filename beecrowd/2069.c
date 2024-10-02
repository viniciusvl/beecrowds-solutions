#include <stdio.h>

int main(){
    int multiplos[4] = {0}, N, X;

    scanf("%d", &N);

    while(N--){
        scanf("%d", &X);

        if (X % 2 == 0)
            multiplos[0]++;
        if (X % 3 == 0)
            multiplos[1]++;
        if (X % 4 == 0)
            multiplos[2]++;
        if (X % 5 == 0)
            multiplos[3]++;        
    }

    for (int i = 2, j = 0; i <= 5; i++, j++){
        printf("%d multiplo(s) de %d\n", multiplos[j], i);
    }

    return 0;
}
#include <stdio.h>

int main(){
    int A[100],
        i = 0;

    for (i = 0; i <= 99; i++){
        scanf("%d", &A[i]);

        if (A[i] <= 10)
            printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}
#include <stdio.h>

int main(){
    int A[10];
    int i;

    for (i = 0; i < 10; i++){
        scanf("%d", &A[i]);

        if (A[i] <= 0)
            A[i] = 1;

        printf("X[%d] = %d\n", i, A[i]);
    }


    return 0;
}
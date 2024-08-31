#include <stdio.h>

int main(){
    int i, j, tmp,
        A[20];

    for (i = 0; i <= 19; i++){
        scanf("%d", &A[i]);
    }

    for (i = 0, j = 19; i <= 9; i++, j--){
        tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
    }

    for (i = 0; i <= 19; i++){
        printf("N[%d] = %d\n", i, A[i]);
    }

    return 0;
}
#include <stdio.h>

int main(){
    int par[5], impar[5],
        i = 0, j = 0, tmp, n = 15, contPar = 0, contImpar = 0;

    while (n--){
        if (i == 5){
            for (i = 0; i < 5; i++){
                printf("par[%d] = %d\n", i, par[i]);
            }
            i = 0;
        }

        if (j == 5){
            for (j = 0; j < 5; j++){
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            j = 0;
        }

        scanf("%d", &tmp);

        if (tmp % 2 != 0){
            impar[j] = tmp;
            j++;
        }else{
            par[i] = tmp;
            i++;
        }    
    }

    if (j != 0){
        for (n = 0; n < j; n++){
            printf("impar[%d] = %d\n", n, impar[n]);
        }
    }

    if (i != 0){
        for (n = 0; n < i; n++){
            printf("par[%d] = %d\n", n, par[n]);
        }
    }

    return 0;
}
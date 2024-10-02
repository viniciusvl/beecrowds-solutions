#include <stdio.h>

int main(){
    int N, i, j, k, count = 0;

    while (scanf("%d", &N) != EOF){
        count = 0;
        int largada[N], chegada[N];

        for (i = 0; i < N; i++)
            scanf("%d", &largada[i]);

        for (i = 0; i < N; i++)
            scanf("%d", &chegada[i]);


        for (i = 0; i < N; i++){
            if (chegada[i] != largada[i]){
                for (j = i+1; j < N; j++){
                    if (chegada[i] == largada[j]){
                        for (k = j; k > i; k--){    
                            count++;

                            int aux = largada[k-1];
                            largada[k-1] = largada[k];
                            largada[k] = aux;
                        }
                        break;
                    }
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
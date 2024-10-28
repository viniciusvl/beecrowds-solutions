#include <stdio.h>


int main(){
    int i, j, N, cont;

    while(1){
        scanf("%d", &N);
        if (N == 0){
            break;
        }

        int matriz[N][N];

        for (i = 0; i < N; i++){
            cont = i+1; //variavel a ser usada para printar na matriz
            
            for (j = 0; j < N; j++){
                if (j == i){
                    matriz[i][j] = 1;
                }else if (j < i){
                    matriz[i][j] = cont--;
                }else if(j > i){
                    matriz[i][j] = ++cont;
                }
            }
        }

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (j == 0){
                printf("%3d", matriz[i][j]);
            }else 
                printf(" %3d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


    return 0;
}
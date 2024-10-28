#include <stdio.h>
#include <math.h>

int QuantDigito(int *num){
    int cont = 0;

    while (*num > 0){
        *num /= 10;
        cont++;
    }

    return cont;
}


int main(){
    int i, j, N, potencia, maiorElemento;
    int quantEspaco;

    while(1){
        scanf("%d", &N);
        if (N == 0){
            break;
        }

        int matriz[N][N];

        for (i = 0; i < N; i++){
            for (j = 0, potencia = i; j < N; j++){
                matriz[i][j] = pow(2, potencia++);
            }
        }

        potencia = (N-1) * 2;
        maiorElemento = pow(2, potencia);
        quantEspaco = QuantDigito(&maiorElemento); 

        for (i = 0; i < N; i++){
            for (j = 0; j < N; j++){
                if (j == 0){
                    printf("%*d", quantEspaco, matriz[i][j]);
                }else 
                    printf(" %*d", quantEspaco, matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }


    return 0;
}
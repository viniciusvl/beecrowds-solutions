#include <stdio.h>
#include <math.h>

float CalculaDistancia(int *x, int *y, int *x1, int *y1){
    return sqrt(pow(*x1 - *x, 2) + pow(*y - *y1, 2));
}

int main(){
    int x, y, i, bolas, casos;
    int x1, x2, posicao;
    float menorDistancia = 10000000000.0, distancia;

    scanf("%d", &casos);

    while (casos--){
        scanf("%d", &bolas);
        scanf("%d %d", &x, &y);

        for (i = 1; i <= bolas; i++){
            scanf("%d %d", &x1, &x2);
            distancia = CalculaDistancia(&x, &y, &x1, &x2);

            if (distancia < menorDistancia){
                menorDistancia = distancia;
                posicao = i;
            }
        }
    
        printf("%d\n", posicao);
    }
        

     

    return 0;
}
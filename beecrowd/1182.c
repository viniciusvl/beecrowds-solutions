#include <stdio.h>

int main(){
    int i, j, coluna;
    float M[12][12], soma = 0, media;
    char op;

    scanf("%d%*c%c", &coluna, &op);

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%f", &M[i][j]);
        }
    }

    for (i = 0; i < 12; i++){
        soma += M[i][coluna];
    }

    if (op == 'S'){ 
        printf("%.1f\n", soma);
    }else{
        media = soma/12;
        printf("%.1f\n", media);
    }

    return 0;
}
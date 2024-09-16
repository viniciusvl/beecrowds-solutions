#include <stdio.h>

int main(){
    float M[12][12];
    int linha;
    char op;
    float soma = 0, media;

    scanf("%d%*c", &linha);
    scanf("%c", &op);

    for (int i = 0; i <= 11; i++){
        for (int j = 0; j <= 11; j++){
            scanf("%f", &M[i][j]);
        }
    }


    for (int j = 0; j <= 11; j++){
        scanf("%f", M[linha][j]);
        soma += M[linha][j];
    }

    if (op == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma / 12);

    return 0;
}
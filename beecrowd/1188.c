#include <stdio.h>

int main(){
    double M[12][12], soma = 0, media;
    int i, j, quantidade = 0;
    char op;

    scanf("%c", &op);

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    for (i = 7; i < 12; i++){
        for (j = i-1; j+i > 11; j--){
            soma += M[i][j];
            quantidade++;
        }
    }

    if (op == 'S'){
        printf("%.1lf\n", soma);
    }else{
        media = soma / quantidade;

        printf("%.1lf\n", media);
    }



    return 0;
}
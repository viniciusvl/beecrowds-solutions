#include <stdio.h>

int main(){
    float M[12][12], soma = 0, media;
    int i, j, quantidade = 0;
    char op;

    scanf("%c", &op);

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%f", &M[i][j]);
        }
    }

    for (i = 11; i >= 0; i--){
        for (j = i-1; j >= 0; j--){
            soma += M[i][j];
            quantidade++;
        }
    }

    if (op == 'S'){
        printf("%.1f\n", soma);
    }else{
        media = soma / quantidade;
        printf("%.1f\n", media);
    }


    return 0;
}
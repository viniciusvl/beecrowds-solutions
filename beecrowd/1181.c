#include <stdio.h>

int main(){
    int i, L, M[12], soma = 0;
    float media;
    char op;

    scanf("%d%*c", &L);
    scanf("%c", &op);

    if (op == 'S'){
        for (i = 0; i < 12; i++){
            scanf("%d", &M[i]);
            soma += M[i];
        }

        printf("%d\n", soma);
    }else{
        for (i = 0; i < 12; i++){
            scanf("%d", &M[i]);
            media += (float)M[i]/12;
        }

        printf("%.1f\n", media);
    }



    

    return 0;
}
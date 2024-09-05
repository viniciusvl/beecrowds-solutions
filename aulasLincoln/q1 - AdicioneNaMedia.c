#include <stdio.h>

float AdicioneNaMedia (float n){
    static float soma = 0;
    static int quantidade = 0;

    soma += n;
    quantidade++;

    return soma / quantidade;
}

int main(){
    float n;
    int quant;

    printf("Quntidade de valores: ");
    scanf("%d", quant);

    while (quant--){
        printf("Digite o valor: ");
        scanf("%f", &n);

        if (n == 0)
            break;

        printf("\nMedia ate agora: %.2f\n", AdicioneNaMedia(n));
    }

    return 0;
}
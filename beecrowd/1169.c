#include <stdio.h>
#include <math.h>

unsigned long long CalculaGraos(unsigned long long quadrado[], int quantidade){
    unsigned long long soma = 1;
    
    quadrado[0] = 1;

    for (int i = 1; i < quantidade; i++){
        quadrado[i] = quadrado[i-1] * 2;
        soma += quadrado[i];
    }

    return soma/12000;
}

int main(){
    int quantidade, casos;

    scanf("%d", &casos);

    while(casos--){
        scanf("%d", &quantidade);

        unsigned long long quadrados[quantidade];

        printf("%llu kg\n", CalculaGraos(quadrados, quantidade));
    }

    return 0;
}
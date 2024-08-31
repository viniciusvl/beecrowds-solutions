#include <stdio.h>

int main(){
    float valor, gasolina, etanol, litroTotal;
    int pontos;

    scanf("%f%f%f%d", &valor, &gasolina, &etanol, &pontos);

    if (etanol/gasolina <= 0.70){ //avaliar se etanol vale a pena
        etanol -= (0.01 * (pontos/5) * etanol);
        pontos %= 5;

        litroTotal = valor / etanol;
        pontos += litroTotal/10;

        printf("%.2f litros de etanol\n", litroTotal);
        printf("Pontos restantes: %d\n", pontos);
    }else{
        gasolina -= (0.01 * (pontos/5) * gasolina);
        pontos %= 5;

        litroTotal = valor / gasolina;
        pontos += litroTotal/10;

        printf("%.2f litros de gasolina\n", litroTotal);
        printf("Pontos restantes: %d\n", pontos);
    }

    return 0;
}
#include <stdio.h>

int main(){
    int preco, dinheiroCliente, troco, quantNotas;

    while(1){
        scanf("%d %d", &preco, &dinheiroCliente);

        if (preco == 0 && dinheiroCliente == 0)
            break;

        troco = dinheiroCliente - preco;
        quantNotas = 0;

        while(troco >= 2){
            if (quantNotas >= 2){
                break;
            }

            if (troco / 100){
                quantNotas += troco / 100;
                troco %= 100;
            }else if (troco / 50){
                quantNotas += troco / 50;
                troco %= 50;
            }else if (troco / 20){
                quantNotas += troco / 20;
                troco %= 20;
            }else if (troco / 10){
                quantNotas += troco / 10;
                troco %= 10;
            }else if (troco / 5){
                quantNotas += troco / 5;
                troco %= 5;
            }else if (troco / 2){
                quantNotas += troco / 2;
                troco %= 2;
            }
        }

        if (quantNotas == 2){
            printf("possible\n");
        }else{
            printf("impossible\n");
        }
    }

    return 0;
}
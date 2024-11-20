#include <stdio.h>

int main(){
    int hora, horaChegada, S, T, F;

    scanf("%d %d %d", &S, &T, &F);

    hora = S + F;

    if (hora >= 24){
        hora = hora - 24;
    }
    if (hora < 0){
        hora = 24 + hora;
    }

    horaChegada = hora + T;

    if (horaChegada >= 24){
        horaChegada = horaChegada - 24;
    }
    if (horaChegada < 0){
        horaChegada = 24 + horaChegada;
    }

    printf("%d\n", horaChegada);

    return 0;
}
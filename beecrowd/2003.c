#include <stdio.h>
#include <stdlib.h>

#define HORA_ENCONTRO 28800 //8 horas em segundos

int main(){
    int horaLevantou, minutoLevantou, acordou, atraso;

    while(scanf("%d:%d", &horaLevantou, &minutoLevantou) != EOF){
        acordou = horaLevantou * 3600 + minutoLevantou * 60; //tranforma em segundos

        if (acordou > 7*3600){
            atraso = abs(HORA_ENCONTRO - (acordou + 3600));
        }else{
            atraso = 0;
        }
        
        printf("Atraso maximo: %d\n", atraso / 60);
    }


    return 0;
}
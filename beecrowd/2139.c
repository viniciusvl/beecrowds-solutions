#include <stdio.h>

int main(){
    int diaInicial, mesInicial, contMes, diasPassados, mesPassados;

    while(scanf("%d %d", &mesInicial, &diaInicial) != EOF){
        if (mesInicial == 12 && diaInicial == 24){
            printf("E vespera de natal!\n");
            continue;
        }
        if (mesInicial == 12 && diaInicial == 25){
            printf("E natal!\n");
            continue;
        }
        if (mesInicial == 12 && diaInicial > 25){
            printf("Ja passou!\n");
            continue;
        }

        contMes = 1;
        diasPassados = 0;
        mesPassados = mesInicial - 1;

        while(contMes <= mesPassados){
            if (contMes == 4 || contMes == 6 || contMes == 11 || contMes == 9){
                diasPassados += 30; 
            }else if (contMes == 2){
                diasPassados += 29;
            }else{
                diasPassados += 31;
            }
            contMes++;
        }


        diasPassados = 366 - (diasPassados + diaInicial) - 6;

        printf("Faltam %d dias para o natal!\n", diasPassados);
    }

    return 0;
}
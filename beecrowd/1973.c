#include <stdio.h>

int main(){
    int i;
    unsigned long long quantidade, totalCarneiros = 0, casasRoubadas = 0;

    scanf("%llu", &quantidade);

    int casas[quantidade];
    char invadidas[quantidade];

    for (i = 0; i < quantidade; i++){
        scanf("%d", &casas[i]);
        totalCarneiros += casas[i];
        invadidas[i] = 0;
    }

    i = 0;
    while (i >= 0 && i < quantidade){
        if (casas[i] == 0)
            i--;
        else if (casas[i] % 2 == 0){
            totalCarneiros--; 
            if (invadidas[i] == 0){
                casasRoubadas++;
                invadidas[i] = 1;
            }
            casas[i]--;
            i--;
        }else{
            totalCarneiros--;
            if (invadidas[i] == 0){
                casasRoubadas++;
                invadidas[i] = 1;
            }
            casas[i]--;
            i++;
        }
    }

    printf("%llu %llu\n", casasRoubadas, totalCarneiros);



    return 0;
}
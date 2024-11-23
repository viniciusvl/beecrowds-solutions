#include <stdio.h>

int main(){
    int pessoas, pedidos, casos;

    while (1){
        scanf("%d", &casos);

        if (!casos){
            return 0;
        }

        while(casos--){
            scanf("%d", &pessoas);

            if (pessoas % 2){
                pedidos = 2*pessoas - 1;
            }else{
                pedidos = 2*pessoas - 2;
            }

            printf("%d\n", pedidos);
        }
    }


    return 0;
}
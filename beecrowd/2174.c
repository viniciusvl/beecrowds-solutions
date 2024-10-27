#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char pomekonsDif[151][1001];
    char auxiliar[1001];
    int i, j = 0, quantPomekon = 0, casos;
    bool tem;

    scanf("%d", &casos);

    while (casos--){
        tem = false;
        scanf("%s", auxiliar);

        for (i = 0; i < 151; i++){
            if (strcmp(pomekonsDif[i], auxiliar) == 0){
                tem = true;
                break;
            }
        }

        if (!tem){
            strcpy(pomekonsDif[j], auxiliar);
            j++;
            quantPomekon++;
        }
    }

    printf("Falta(m) %d pomekon(s).\n", 151-quantPomekon);


    return 0;
}
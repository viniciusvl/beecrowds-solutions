#include <stdio.h>

int QuantLeds(char *leds, short int A[], int tamanho){
    int i, totalLeds = 0;

    for (i = 0; leds[i] != '\0'; i++){
        totalLeds += A[leds[i] - '0'];
    }
    return totalLeds;
}


int main(){
    short int A[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int casos, tamanho;
    char leds[101];

    scanf("%d", &casos);

    while (casos--){
        tamanho = 0;

        scanf("%s", leds);
        
        for (int i = 0; leds[i] != '\0'; i++){
            tamanho++;
        }

        printf("%d leds\n", QuantLeds(leds, A, tamanho));

    }


    return 0;
}
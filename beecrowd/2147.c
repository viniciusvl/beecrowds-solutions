#include <stdio.h>
#include <string.h>

int main(){
    char galopeira[10000];
    int casos;
    float tempo;

    scanf("%d%*c", &casos);

    while(casos--){
        tempo = 0;

        scanf("%s", galopeira);

        tempo = (float)strlen(galopeira) / 100;

        printf("%.2f\n", tempo);
    }

    return 0;
}
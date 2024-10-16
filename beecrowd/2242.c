#include <stdio.h>

int EhEngracada(const char *risada, char *vogais){
    int i, quantVogais = 0;

    for (i = 0; risada[i] != '\0'; i++){
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            vogais[quantVogais++] = risada[i]; 
        } 
    }

    quantVogais = 0;

    while(i--){
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            if (vogais[quantVogais++] != risada[i]){
                return -1;
            } 
        } 
    }

    return 1;
}


int main(){
    char risada[51];
    char vogais[50];

    fgets(risada, 51, stdin);

    if (EhEngracada(risada, vogais) == 1)
        printf("S\n");
    else 
        printf("N\n");


    return 0;
}
#include <stdio.h>

int main(){
    int vezes, termo, comparaTermo, total = 1; //pois, o primeiro termo sempre vai contar

    scanf("%d", &vezes);
    scanf("%d", &comparaTermo); ////pega o primeiro termo, para usar como comparação com os outros
    vezes--; //como li o primeiro, tenho que ler vezes-1
    
    while (vezes--){
        scanf("%d", &termo);

        if (termo != comparaTermo){
            total++;
            comparaTermo = termo;
        }
    }
    
    printf("%d\n", total);

    return 0;
}
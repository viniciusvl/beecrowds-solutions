#include <stdio.h>

int main(){
    int lesmas, l, i, nivel, maior;

    while (scanf("%d", &lesmas) != EOF){
        maior = 0;

        for (i = 0; i < lesmas; i++){
            scanf("%d", &l);

            if (l > maior){
                maior = l;

                if (l < 10)
                    nivel = 1;
                else if (l < 20)
                    nivel = 2;
                else 
                    nivel = 3;
            }
        }
        printf("%d\n", nivel);
    }


    return 0;
}
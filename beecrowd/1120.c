#include <stdio.h>
#include <string.h>

int main(){
    char digitoRuim, numero[101], copia[101] = {'0'};
    int i, j = 0;
    char *p;

    while(1){
        copia[0] = '0';
        j = 0;

        scanf("%c %s", &digitoRuim, numero);

        if (digitoRuim == '0' && numero[0] == '0')
            break;

        for (i = 0; numero[i] != '\0'; i++){
            if (numero[i] != digitoRuim){
                copia[j] = numero[i];
                j++;
            }
        }
        
        if (j == 0)
            copia[j+1] = '\0';
        else
            copia[j] = '\0';

        if (copia[0] == '0'){        
            p = copia;
            while (*p == '0' && p != &copia[strlen(copia) - 1]){
                p++;
            }
           printf("%s\n", p);
        }else{
           printf("%s\n", copia);
        }



        getchar();
    }



    return 0;
}
#include <stdio.h>
#include <string.h>

void RemoveBarraN(char *palavra){
    if (palavra[strlen(palavra) - 1] == '\n')
        palavra[strlen(palavra) - 1] = '\0';
}

int main(){
    char palavra[1002], aux;
    int N, i, j;

    scanf("%d", &N);
    getchar();

    while(N--){
        fgets(palavra, 1002, stdin);
        RemoveBarraN(palavra);

        for (i = 0; palavra[i] != '\0'; i++){
            if ( (palavra[i] >= 'a' && palavra[i] <= 'z') || (palavra[i] >= 'A' && palavra[i] <= 'Z') )
                palavra[i] += 3;
        }

        for (i = 0, j = strlen(palavra) - 1; i < j; i++, j--){
            aux = palavra[j];
            palavra[j] = palavra[i];
            palavra[i] = aux;
        }

        i = (strlen(palavra)) / 2;
        
        for (;palavra[i] != '\0'; i++){
            palavra[i]--;
        }

        printf("%s\n", palavra);
    }

    return 0;
}
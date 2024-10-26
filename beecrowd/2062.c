#include <stdio.h>
#include <string.h>


int main(){
    int N, i;

    scanf("%d", &N);

    char palavras[N][21];

    for (i = 0; i < N; i++){
        scanf("%s", palavras[i]);
    }

    for (i = 0; i < N; i++){
        if (strlen(palavras[i]) == 3){
            if (palavras[i][0] == 'O' && palavras[i][1] == 'B'  ||  palavras[i][0] == 'U' && palavras[i][1] == 'R')
                palavras[i][2] = 'I';
        }

        printf("%s%c", palavras[i], (i == N-1) ? '\n' : ' ');
    }

    return 0;
}
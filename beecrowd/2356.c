#include <stdio.h>
#include <string.h>

int EhResistente(const char *D, const char *S){
    if (strstr(D, S) != NULL)
        return 1;
    else 
        return -1;
}


int main(){
    char D[102], S[102];

    while (fgets(D, 102, stdin) != NULL && fgets(S, 102, stdin) != NULL){
        if (D[strlen(D)-1] == '\n' && S[strlen(S)-1] == '\n'){
            D[strlen(D)-1] = '\0';
            S[strlen(S)-1] = '\0';
        }


        if (EhResistente(D, S) == 1)
            printf("Resistente\n");
        else if (EhResistente(D, S) == -1)
            printf("Nao resistente\n");
    }

    return 0;
}
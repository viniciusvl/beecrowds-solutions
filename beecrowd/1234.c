#include <stdio.h>
#include <string.h>

void RemovaBarraN(char* str) {
    // Verifica o último caractere da string
    int length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';  // Substitui o '\n' por '\0'
    }
}

int EncontraIndice(char *str){
    int i;

    for (i = 0; str[i] != '\0'; i++){
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            break;
        }
    }

    return i;
}

int main(){
    char frase[52];
    int i;
    int viraMaiuscula;

    while (fgets(frase, 52, stdin) != NULL){
            RemovaBarraN(frase);

            i = EncontraIndice(frase);

            if (frase[i] >= 'a' && frase[i] <= 'z'){
                frase[i] += 'A' - 'a';
            }

            viraMaiuscula = 0;

            for (i = i+1; frase[i] != '\0'; i++){
                if (frase[i] == ' ')
                    continue;
                
                if (viraMaiuscula && frase[i] >= 'a' && frase[i] <= 'z'){
                    frase[i] += 'A' - 'a';
                    viraMaiuscula = 0;
                }else{
                    if (frase[i] >= 'A' && frase[i] <= 'Z'){
                        frase[i] += 'a' - 'A';
                    }
                    viraMaiuscula = 1;
                }
            }

            printf("%s\n", frase);
    }

    return 0;
}
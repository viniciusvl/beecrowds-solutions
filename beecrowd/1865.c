#include <stdio.h>
#include <string.h>

void RemoveBarraN(char *p){
    if (p[strlen(p) - 1] == '\n'){
        p[strlen(p) - 1] = '\0';
    }    
}

int main(){
    int casos;
    char pessoas[101];

    scanf("%d", &casos);

    while(casos--){
        scanf("%s %*d", pessoas);

        if (strcmp(pessoas, "Thor") == 0){
            puts("Y");
        }else{
            puts("N");
        }
    }

    return 0;
}
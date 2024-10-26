#include <stdio.h>
#include <string.h>

int Vencedor(const char *sheldon, const char *raj){
    if (strcmp(sheldon, raj) == 0)
        return 3;

    else if (strcmp(sheldon, "pedra") == 0 && strcmp(raj, "tesoura") == 0)
        return 1;
    else if (strcmp(sheldon, "pedra") == 0 && strcmp(raj, "lagarto") == 0)
        return 1;
    else if (strcmp(sheldon, "papel") == 0 && strcmp(raj, "pedra") == 0)
        return 1;
    else if (strcmp(sheldon, "papel") == 0 && strcmp(raj, "Spock") == 0)
        return 1;
    else if (strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "papel") == 0)
        return 1;
    else if (strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "lagarto") == 0)
        return 1;
    else if (strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "Spock") == 0)
        return 1;
    else if (strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "papel") == 0)
        return 1;
    else if (strcmp(sheldon, "Spock") == 0 && strcmp(raj, "tesoura") == 0)
        return 1;
    else if (strcmp(sheldon, "Spock") == 0 && strcmp(raj, "pedra") == 0)
        return 1;
    else 
        return 2;

}

int main(){
    char sheldon[10], raj[10];
    int casos, cont = 0;
    char teste;

    scanf("%d", &casos);
    getchar();

    while (casos--){
        cont++;
        scanf("%s %s", sheldon, raj);

        short int vencedor = Vencedor(sheldon, raj);

        if (vencedor == 1)
            printf("Caso #%d: Bazinga!\n", cont);
        else if (vencedor == 2)
            printf("Caso #%d: Raj trapaceou!\n", cont);
        else 
            printf("Caso #%d: De novo!\n", cont);
    }


    return 0;
}
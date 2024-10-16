#include <stdio.h>

int main(){ 
    int vezes;

    scanf("%d", &vezes);

    for (int i = 1; i <= vezes; i++){
        printf("Ho%c", (i == vezes) ? '!' : ' ');
    }


    return 0;
}
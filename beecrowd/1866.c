#include <stdio.h>

int main(){
    short casos, N;

    scanf("%hd", &casos);

    while(casos--){
        scanf("%hd", &N);

        printf("%c\n", (N % 2 == 0) ? '0' : '1');
    }


    return 0;
}
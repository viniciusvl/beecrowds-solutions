#include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d %d", &a, &b);

    if (a == b){
        printf("%d\n", c = a);
    }else{
        printf("%d\n", (a > b) ? a : b);
    }

    return 0;
}
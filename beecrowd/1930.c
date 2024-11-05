#include <stdio.h>

int main(){
    int t1, t2, t3, t4;
    int total;

    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

    total = t1 + t2 - 1 + t3 - 1 + t4 - 1;

    printf("%d\n", total);

    return 0;
}
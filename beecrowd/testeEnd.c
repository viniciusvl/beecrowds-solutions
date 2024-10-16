#include <stdio.h>

int main(){
    int ar[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int *p;

    p = ar + 8;
    --*(++p);
    printf("%d ", *p);
    ++*(p++);
    printf("%d", *p);


    return 0;
}
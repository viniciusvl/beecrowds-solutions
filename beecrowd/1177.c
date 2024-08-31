#include <stdio.h>

int main(){
    int i, t, j,
        N[1000];

    scanf("%d", &t);

    for (i = 0, j = 0; i <= 999; i++, j++){
        if (j == t)
            j = 0;
        
        printf("N[%d] = %d\n", i, j);
    }

    return 0;
}
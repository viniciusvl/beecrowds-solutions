#include <stdio.h>

int main(){
    double N[100], 
           x;
    int i;

    scanf("%lf", &x);
    N[0] = x;

    for (i = 0; i < 100;){
        printf("N[%d] = %.4lf\n", i, N[i]);

        N[++i] = (x /= 2, x); 
    }

    return 0;
}
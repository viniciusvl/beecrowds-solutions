#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float areaTotal;
    int lado;


    while(scanf("%d %d %d", &a, &b, &c)){
        if (a == 0 || b == 0 || c == 0)
            break;
            
        areaTotal = (a * b) / ((float)c/100);
        lado = sqrt(areaTotal);

        printf("%d\n", lado);
    }

    return 0;
}
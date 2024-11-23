#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double maximo, minimo;

    scanf("%d", &n);

    minimo = n / log(n);
    maximo = 1.25506 * n / log(n);

    printf("%.1lf %.1lf\n", minimo, maximo);

    return 0;
}
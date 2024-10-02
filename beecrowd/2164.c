#include <stdio.h>
#include <math.h>

double Fibonnaci(int *n){
    double equacao = pow(((1 + sqrt(5))/2), *n) - pow(((1 - sqrt(5))/2), *n);

    return equacao/sqrt(5);
}


int main(){
    int n;

    scanf("%d", &n);
    printf("%.1lf\n", Fibonnaci(&n));

    return 0;
}
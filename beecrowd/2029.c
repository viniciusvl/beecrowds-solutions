#include <stdio.h>
#include <math.h>

#define PI 3.14

int main(){
    double D, V, areaBoca, altura, raio;

    while(scanf("%lf %lf", &V, &D) != EOF){
        raio = D / 2;

        altura = V / (3.14 * pow(raio, 2));
        areaBoca = 3.14 * pow(raio, 2);

        printf("ALTURA = %.2lf\n", altura);
        printf("AREA = %.2lf\n", areaBoca);
    }


    return 0;
}
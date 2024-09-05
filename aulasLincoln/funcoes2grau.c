#include <stdio.h>
#include <math.h>

float Delta (float a, float b, float c){
    float delta;

    delta = pow(b, 2) - 4*a*c;

    return delta;
}

float RaizX1 (float a, float b, float delta){
    float x1;

    x1 = (-b + sqrt(delta)) / (2*a);

    return x1;
}

float RaizX2 (float a, float b, float delta){
    float x2;

    x2 = (-b - sqrt(delta)) / (2*a);

    return x2;
}


int main(){
    float a, b, c;

    scanf("%f%f%f", &a, &b, &c);

    if (a <= 0)
        return 1;

    float delta = Delta (a, b, c);

    if (delta < 0)
        return 2;

    printf("VALORES: \n");
    printf("X1 = %.2f\n", RaizX1(a, b, delta));
    printf("X2 = %.2f\n", RaizX2(a, b, delta));
    
    return 0;
}
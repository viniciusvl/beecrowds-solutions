#include <stdio.h>

int main(){
    float crescimento, A, B;

    scanf("%f %f", &A, &B);

    crescimento = (B - A) / A;

    printf("%.2f%%\n", crescimento*100);

    return 0;
}
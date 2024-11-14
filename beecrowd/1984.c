#include <stdio.h>


int main(){
    unsigned long long n;

    scanf("%llu", &n);    

    while(1){
        if (n == 0){
            printf("\n");
            break;
        }

        printf("%llu", n%10);

        n = n / 10;
    }

    return 0;
}
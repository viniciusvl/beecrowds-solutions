#include <stdio.h>

int main(){
    int p, unidades, codigo;
    float total = 0;

    scanf("%d", &p);

    while(p--){
        scanf("%d %d", &codigo, &unidades);

        switch (codigo){
            case 1001:
                total += unidades * 1.50;
                break;
            case 1002:
                total += unidades * 2.50;
                break;
            case 1003:
                total += unidades * 3.50;
                break;
            case 1004:
                total += unidades * 4.50; 
                break;
            case 1005:
                total += unidades * 5.50; 
                break;
        }
    }

    printf("%.2f\n", total);

    return 0;
}
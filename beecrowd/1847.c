#include <stdio.h>

int main(){
    int a, b, c, difTemp1, difTemp2;

    scanf("%d %d %d", &a, &b, &c);

    difTemp1 = b - a;
    difTemp2 = c - b;

    if (difTemp1 < difTemp2){
        printf(":)\n");
    }else if(difTemp1 > 0 && difTemp1 == difTemp2){
        printf(":)\n");
    }else{
        printf(":(\n");
    }

    return 0;
}
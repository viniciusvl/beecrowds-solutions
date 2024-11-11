#include <stdio.h>

int main(){
    int valor, dezena, centena, unidade;

    scanf("%d", &valor);

    unidade = valor % 10;
    dezena = (valor % 100 / 10) * 10;
    centena = valor / 100 * 100;

    if (centena == 900){
        printf("CM");
    }else if (centena >= 500){
        printf("D");
        while (centena > 500){
            printf("C");
            centena = centena - 100;
        }
    }else if (centena == 400){
        printf("CD");
    }else if (centena >= 100){
        while (centena >= 100){
            printf("C");
            centena = centena - 100;
        }
    }
    
    if (dezena == 90){
        printf("XC");
    }else if (dezena >= 50){
        printf("L");
        while (dezena > 50){
            printf("X");
            dezena = dezena - 10;
        }
    }else if (dezena == 40){
        printf("XL");
    }else if (dezena >= 10){
        while (dezena >= 10){
            printf("X");
            dezena = dezena - 10;
        }
    }

    if (unidade == 9){
        printf("IX");
    }else if (unidade >= 5){
        printf("V");
        while (unidade > 5){
            printf("I");
            unidade = unidade - 1;
        }
    }else if (unidade == 4){
        printf("IV");
    }else{
        switch (unidade){
            case 1:
                printf("I");
                break;
            case 2:
                printf("II");
                break;
            case 3:
                printf("III");
                break;
        }
    }
    puts("");

    return 0;
}
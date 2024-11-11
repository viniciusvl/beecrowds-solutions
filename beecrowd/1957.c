#include <stdio.h>
#include <math.h>

void InverteArray(char *p, int tam){
    int i, j;
    char aux;

    for (i = 0, j = tam-1; i < j; i++, j--){
        aux = p[i];
        p[i] = p[j];
        p[j] = aux;
    }
}

void Hexa(char *p, int tam){
    int i, cont, potencia, soma;

    i = tam-1;
    soma = 0;

    if (i > 3){
        Hexa(p, i-3);
    }

    for (cont = i, potencia = 0; cont > i - 4; cont--, potencia++){
        if (cont < 0){
            break;
        }

        if (p[cont] == '1'){
            soma += pow(2, potencia);
        }
    }

    switch (soma){
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d", soma);
            break;
    }
}

int main() {
    int n, tamArray;
    char bin[31];

    scanf("%d", &n);

    tamArray = 0;

    while (n >= 1){ //converte em binario
        bin[tamArray++] = (n % 2 == 0) ? '0' : '1';
        n /= 2;
    }
    InverteArray(bin, tamArray); //inverte para a ordem correta

    Hexa(bin, tamArray); //transforma em hexadecimal
    puts("");

    return 0;
}

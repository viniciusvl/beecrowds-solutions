#include <stdio.h>
#include <math.h>

int cont = 0;

int EhTrinaguloRetangulo (float a, float b, float c){
    float pitagoras = sqrt(pow(a, 2) + pow(b, 2));

    if (pitagoras == c)
        return 1;
    else 
        return 0;
}

float FormaTrianguloRetangulo (float a, float b, float c){
    float valorValido;

    if (a < 0 && b > 0 && c > 0){
        valorValido = sqrt(pow(c, 2) - pow(b, 2));
        cont = 1;
        return valorValido;
    }else if (b < 0 && a > 0 && c > 0){
        valorValido = sqrt(pow(c, 2) - pow(a, 2));
        cont = 2;
        return valorValido;
    }else if (c < 0 && a > 0 && b > 0){
        valorValido = sqrt(pow(a, 2) + pow(b, 2));
        cont = 3;
        return valorValido;
    }else  
        return -1;
}


int main(){
    float a, b, c;

    printf("Digite a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0){
        printf("Os valores sao validos\n\n");
        
        if (EhTrinaguloRetangulo(a, b, c))
            printf("Forma triangulo retangulo\n");
        else 
            printf("Nao forma triangulo retangulo\n");
    }else{
        float verifica = FormaTrianguloRetangulo(a, b, c);

        if (verifica == -1){
            printf("valores invalidos\n");
        }else{ 
            switch (cont){ //Serve para identificar qual variável foi alterada
                case 1:
                    printf("Valido para A = %.2f", verifica);
                    break;
                case 2:
                    printf("Valido para B = %.2f", verifica);
                    break;
                case 3:
                    printf("Valido para C = %.2f", verifica);
                    break;
            }
        }
    }

    return 0;
}
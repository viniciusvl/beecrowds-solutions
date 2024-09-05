#include <stdio.h>

void ExibeMenu(){
    printf("-------Menu--------\n"
           "\t1-Soma\n"
            "\t2 - Subtracao\n"
            "\t3 - Multiplicacao\n"
            "\t4 - divisao\n"
            "\t5 - sair\n\n");
}

int Soma(int a, int b){
    return a+b;
}

int Subtracao(int a, int b){
    return a -b;
}

int Multiplicacao(int a, int b){
    return a*b;
}

int Divisao (int a, int b){
    return a/b;
}


int main(){
    int op, x, y;

    while (1){
        ExibeMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        if (op == 5)
            break;

        printf("Digite x e y: ");
        scanf("%d%d", &x, &y);


        switch (op){
            case 1:
                printf("Opcao escolhida: soma\n");
                int res = Soma(x, y);

                printf("%d + %d = %d", x, y, res);
                break;
            case 2:

                break;
            case 3:
                break;
            case 4:
        }
    }

    printf("Obrigado por utilizar\n!");


    return 0;
}
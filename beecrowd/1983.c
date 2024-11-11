#include <stdio.h>

typedef struct {
    char matricula[8];
    float nota;
} tAluno;

int main(){
    tAluno alunos[100];
    int N, i, posicaoEscohido;
    int temEscolhido;
    float notaEscolhido;

    scanf("%d", &N);

    scanf("%s %f", alunos[0].matricula, &alunos[0].nota); //pega dados do primeiro para comparar
    posicaoEscohido = 0;
    notaEscolhido = alunos[0].nota;

    if (notaEscolhido >= 8){ //se o primeiro for >= 8, entao tem-se um escolhido
        temEscolhido = 1;
    }else{
        temEscolhido = 0;
    }

    for (i = 1; i < N; i++){
        scanf("%s %f", alunos[i].matricula, &alunos[i].nota); //coleta dados dos alunos

        if (alunos[i].nota > notaEscolhido){
            posicaoEscohido = i;
            notaEscolhido = alunos[i].nota;

            if (notaEscolhido >= 8){
                temEscolhido = 1;
            }
        }
    }

    if (temEscolhido){
        printf("%s\n", alunos[posicaoEscohido].matricula);
    }else{
        printf("Minimum note not reached\n");
    }

    return 0;
}
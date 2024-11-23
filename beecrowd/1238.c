#include <stdio.h>
#include <string.h>

char ColocaFim(char *p, int j){
    p[j] = '\0';
}


int main(){
    char A[51], B[51], misturado[102];
    int vezes, op, j, i, N;

    scanf("%d", &N);
    getchar();

    while(N--){
        scanf("%s %s", A, B);

        op = 1;
        vezes = 0;
        i = j = 0;

        while(1){
            if (op){
                if (A[i] == '\0' && B[i] != '\0'){
                    ColocaFim(misturado, j);
                    strcat(misturado, &B[i]);
                    break;
                }

                misturado[j] = A[i];
            }else{
                if (B[i] == '\0' && A[i] != '\0'){
                    ColocaFim(misturado, j-1);
                    strcat(misturado, &A[i]);
                    break;
                }

                misturado[j] = B[i];
            }

            vezes++;

            if (vezes == 2){
                vezes = 0;
                i++;
            }

            if (misturado[j] == '\0')
                break;

            j++;
            op = 1 - op;
        }

        printf("%s\n", misturado);
    }


    return 0;
}
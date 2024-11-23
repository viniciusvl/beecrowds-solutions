#include <stdio.h>
#include <string.h>

void RemoveBarraN(char *str) {
    if (str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }
}

int main(){
    char A[52], B[52];
    int i, j, tamSeq, maiorSeq, k;

    while (fgets(A, 52, stdin) != NULL){
        RemoveBarraN(A);
        fgets(B, 52, stdin);
        RemoveBarraN(B);

        maiorSeq = 0;

        for (i = 0; A[i] != '\0'; i++){
            for (j = 0; B[j] != '\0'; j++){
                tamSeq = 0;
                k = 0;

                while (A[i + k] != '\0' && B[j + k] != '\0' && A[i + j] == B[j + k]){
                    tamSeq++;
                    k++;
                }

                if (tamSeq > maiorSeq){
                    maiorSeq = tamSeq;
                }
            }
        }
        printf("%d\n", maiorSeq);
    }

    
    return 0;
}
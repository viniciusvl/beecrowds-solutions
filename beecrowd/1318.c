#include <stdio.h>

void BubleSort(int tickets[], int tamanho){
    int i, j, aux, trocou;

    for (i = 0; i < tamanho-1; i++){
        trocou = 0;

        for (j = 0; j < tamanho- 1 - i; j++){
            if (tickets[j] > tickets[j+1]){
                aux = tickets[j+1];
                tickets[j+1] = tickets[j];
                tickets[j] = aux;

                trocou = 1; 
            }
        }

        if (trocou == 0)
            break;
    }
}



int main(){
    int N, M, i, total, j;

    while (1){
        total = 0;

        scanf("%d%d", &N, &M);

        if (M == 0 && N == 0){
                break;
        }

        int tickets[M];
        int tamanho = sizeof(M) / sizeof(int);
 
        BubleSort(tickets, tamanho);

        for (i = 0; i < tamanho;){
            if (tickets[i] == tickets[i+1]){
                total += 1;
                for (j = i+1; j < tamanho; j++){
                    if (tickets[j] != tickets[j-1]){
                        i = j;
                        break;
                    }
                }
            }else{
                i++;
            }
        }
        printf("%d\n", total);
    }

    


    return 0;
}
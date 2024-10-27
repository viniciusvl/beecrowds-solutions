#include <stdio.h>
#include <string.h>

typedef struct {
    char produto[51];
    float preco;
    int unidade;
} tProduto;

void LeProdutos(tProduto *prodsDaFeira){
    scanf("%s %f", &prodsDaFeira->produto, &prodsDaFeira->preco);
}

float EncontraProduto(tProduto *prodsDaFeira, int tamanho){
    char aux[51];
    int i, unidades;
    float dinheiro = 0;

    scanf("%s %d", aux, &unidades);

    for (i = 0; i < tamanho; i++){
        if (strcmp(aux, prodsDaFeira[i].produto) == 0){
            dinheiro = prodsDaFeira[i].preco * unidades;
        }
    }

    return dinheiro;
}

int main(){
    int i, casos, quantDisp, quantComprado, tamanho;
    float dinheiro;

    scanf("%d", &casos);

    while(casos--){
        dinheiro = 0;
        scanf("%d", &quantDisp);
        
        tProduto prodsDaFeira[quantDisp];
        tamanho = sizeof(prodsDaFeira) / sizeof(tProduto);

        for (i = 0; i < quantDisp; i++){
            LeProdutos(&prodsDaFeira[i]);
        }

        scanf("%d", &quantComprado);

        for (i = 0; i < quantComprado; i++){
            dinheiro += EncontraProduto(prodsDaFeira, tamanho);
        }

        printf("R$ %.2f\n", dinheiro);
    }

    return 0;
}
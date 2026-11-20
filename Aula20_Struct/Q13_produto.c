#include <stdio.h>

typedef struct {
    int codigo;
    char nome[50];
    float preco;
} Produto;

int main(void) {
    Produto produto1;
    printf("Codigo do produto: ");
    scanf("%d", &produto1.codigo);
    printf("Nome do produto: ");
    scanf(" %49[^\n]", produto1.nome);
    printf("Preco: ");
    scanf("%f", &produto1.preco);

    printf("\n--- PRODUTO CADASTRADO ---\n");
    printf("Codigo: %d\nNome: %s\nPreco: R$ %.2f\n",
           produto1.codigo, produto1.nome, produto1.preco);
    return 0;
}

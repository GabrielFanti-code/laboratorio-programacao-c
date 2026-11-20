#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[60], categoria[30], copia[60], descricao[100];

    printf("Nome do produto: ");
    scanf(" %59[^\n]", nome);
    printf("Categoria (HARDWARE ou PERIFERICO): ");
    scanf("%29s", categoria);

    strcpy(copia, nome);
    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("\n--- CADASTRO ---\n");
    printf("Nome: %s\n", nome);
    printf("Caracteres no nome: %zu\n", strlen(nome));
    if (strcmp(categoria, "HARDWARE") == 0)
        printf("Categoria: Hardware\n");
    else if (strcmp(categoria, "PERIFERICO") == 0)
        printf("Categoria: Periferico\n");
    else
        printf("Categoria invalida.\n");
    printf("Descricao: %s\n", descricao);
    return 0;
}

#include <stdio.h>

int main(void) {
    FILE *arquivo = fopen("numeros.txt", "w");
    int numero;

    if (arquivo == NULL) {
        printf("Erro ao criar numeros.txt\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);
        fprintf(arquivo, "%d\n", numero);
    }
    fclose(arquivo);

    arquivo = fopen("numeros.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao ler numeros.txt\n");
        return 1;
    }

    printf("\nNumeros armazenados:\n");
    while (fscanf(arquivo, "%d", &numero) == 1)
        printf("%d\n", numero);

    fclose(arquivo);
    return 0;
}

#include <stdio.h>

int main(void) {
    FILE *arquivo = fopen("funcionarios.txt", "w");
    char nome[60];
    int matricula;

    if (arquivo == NULL) {
        printf("Erro ao abrir funcionarios.txt\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("\nFuncionario %d\nNome: ", i + 1);
        scanf(" %59[^\n]", nome);
        printf("Matricula: ");
        scanf("%d", &matricula);
        fprintf(arquivo, "%s;%d\n", nome, matricula);
    }

    fclose(arquivo);
    printf("Dados gravados com sucesso em funcionarios.txt.\n");
    return 0;
}

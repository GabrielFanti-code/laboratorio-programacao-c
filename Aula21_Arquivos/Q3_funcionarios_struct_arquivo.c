#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main(void) {
    FILE *arquivo;
    Funcionario f;
    int quantidade;

    printf("Quantos funcionarios deseja acrescentar (1 a 5)? ");
    if (scanf("%d", &quantidade) != 1 || quantidade < 1 || quantidade > 5) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    /* Modo a: acrescenta sem apagar os registros anteriores. */
    arquivo = fopen("funcionarios.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir funcionarios.txt\n");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("\nFuncionario %d\nNome: ", i + 1);
        scanf(" %49[^\n]", f.nome);
        printf("Salario: ");
        scanf("%f", &f.salario);
        printf("Horas extras: ");
        scanf("%d", &f.horasExtras);
        fprintf(arquivo, "%s;%.2f;%d\n", f.nome, f.salario, f.horasExtras);
    }
    fclose(arquivo);

    arquivo = fopen("funcionarios.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao ler funcionarios.txt\n");
        return 1;
    }

    printf("\n--- FUNCIONARIOS NO ARQUIVO ---\n");
    while (fscanf(arquivo, " %49[^;];%f;%d",
                  f.nome, &f.salario, &f.horasExtras) == 3) {
        printf("Nome: %s | Salario: R$ %.2f | Horas extras: %d\n",
               f.nome, f.salario, f.horasExtras);
    }

    fclose(arquivo);
    return 0;
}

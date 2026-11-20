#include <stdio.h>

typedef struct {
    char nome[60];
    int idade;
    float salario;
} Funcionario;

int main(void) {
    Funcionario f;
    printf("Nome: ");
    scanf(" %59[^\n]", f.nome);
    printf("Idade: ");
    scanf("%d", &f.idade);
    printf("Salario: ");
    scanf("%f", &f.salario);

    printf("\n--- FUNCIONARIO ---\n");
    printf("Nome: %s\nIdade: %d\nSalario: R$ %.2f\n",
           f.nome, f.idade, f.salario);
    return 0;
}

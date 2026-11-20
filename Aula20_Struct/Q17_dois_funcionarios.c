#include <stdio.h>

typedef struct {
    char nome[60];
    int idade;
    float salario;
} Funcionario;

void lerFuncionario(Funcionario *f, int numero) {
    printf("\nFuncionario %d\n", numero);
    printf("Nome: ");
    scanf(" %59[^\n]", f->nome);
    printf("Idade: ");
    scanf("%d", &f->idade);
    printf("Salario: ");
    scanf("%f", &f->salario);
}

void mostrarFuncionario(Funcionario f) {
    printf("Nome: %s | Idade: %d | Salario: R$ %.2f\n",
           f.nome, f.idade, f.salario);
}

int main(void) {
    Funcionario funcionario1, funcionario2;

    lerFuncionario(&funcionario1, 1);
    lerFuncionario(&funcionario2, 2);

    printf("\n--- FUNCIONARIOS CADASTRADOS ---\n");
    mostrarFuncionario(funcionario1);
    mostrarFuncionario(funcionario2);

    if (funcionario1.salario > funcionario2.salario) {
        printf("Maior salario: %s\n", funcionario1.nome);
        printf("Diferenca: R$ %.2f\n",
               funcionario1.salario - funcionario2.salario);
    } else if (funcionario2.salario > funcionario1.salario) {
        printf("Maior salario: %s\n", funcionario2.nome);
        printf("Diferenca: R$ %.2f\n",
               funcionario2.salario - funcionario1.salario);
    } else {
        printf("Os dois funcionarios recebem o mesmo salario.\n");
    }
    return 0;
}

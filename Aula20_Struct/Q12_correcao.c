#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main(void) {
    Aluno aluno1;

    printf("Nome: ");
    scanf(" %49[^\n]", aluno1.nome);
    printf("Idade: ");
    scanf("%d", &aluno1.idade);
    printf("Nota: ");
    scanf("%f", &aluno1.nota);

    printf("%s\n", aluno1.nome);
    printf("%d\n", aluno1.idade);
    printf("%.1f\n", aluno1.nota);
    return 0;
}

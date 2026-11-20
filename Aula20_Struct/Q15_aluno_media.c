#include <stdio.h>

typedef struct {
    char nome[60];
    float nota1;
    float nota2;
} Aluno;

int main(void) {
    Aluno a;
    float media;

    printf("Nome do aluno: ");
    scanf(" %59[^\n]", a.nome);
    printf("Nota 1: ");
    scanf("%f", &a.nota1);
    printf("Nota 2: ");
    scanf("%f", &a.nota2);

    media = (a.nota1 + a.nota2) / 2.0f;
    printf("\nAluno: %s\nMedia: %.2f\n", a.nome, media);
    if (media >= 7.0f)
        printf("Situacao: Aprovado\n");
    else
        printf("Situacao: Reprovado\n");
    return 0;
}

#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa; /* O ponto e virgula estava faltando. */

int main(void) {
    Pessoa pessoa1;
    pessoa1.idade = 20;
    printf("Idade: %d\n", pessoa1.idade);
    return 0;
}

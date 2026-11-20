#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[100];

    printf("Digite seu nome completo: ");
    if (fgets(nome, sizeof(nome), stdin) == NULL)
        return 1;

    /* Remove o '\n' que fgets pode armazenar. */
    nome[strcspn(nome, "\n")] = '\0';

    printf("Nome informado: %s\n", nome);
    return 0;
}

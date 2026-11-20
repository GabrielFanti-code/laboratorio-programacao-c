#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50], perfil[20], nomeConfirmacao[50], mensagem[120];

    printf("Primeiro nome: ");
    scanf("%49s", nome);

    printf("Perfil (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));

    strcpy(nomeConfirmacao, nome);
    strcpy(mensagem, "Bem-vindo, ");
    strcat(mensagem, nomeConfirmacao);
    strcat(mensagem, "!");

    if (strcmp(perfil, "ADMIN") == 0)
        printf("Perfil: Administrador\n");
    else if (strcmp(perfil, "COMUM") == 0)
        printf("Perfil: Usuario comum\n");
    else
        printf("Perfil invalido.\n");

    printf("Confirmacao: %s\n", nomeConfirmacao);
    printf("%s\n", mensagem);
    return 0;
}

#include <stdio.h>

int main(void) {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    if (palavra[0] != '\0')
        printf("Primeiro caractere: %c\n", palavra[0]);
    else
        printf("Nenhuma palavra foi informada.\n");

    return 0;
}

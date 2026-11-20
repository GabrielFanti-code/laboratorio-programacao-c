#include <stdio.h>

int verificarPar(int numero) {
    return numero % 2 == 0 ? 1 : 0;
}

int main(void) {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (verificarPar(n))
        printf("%d e par.\n", n);
    else
        printf("%d e impar.\n", n);
    return 0;
}

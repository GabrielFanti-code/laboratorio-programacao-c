#include <stdio.h>

unsigned long long calcularFatorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++)
        resultado *= (unsigned long long)i;
    return resultado;
}

int main(void) {
    int n;
    do {
        printf("Digite um numero entre 0 e 12: ");
        if (scanf("%d", &n) != 1) return 1;
        if (n < 0 || n > 12) printf("Valor fora do intervalo.\n");
    } while (n < 0 || n > 12);

    printf("%d! = %llu\n", n, calcularFatorial(n));
    return 0;
}

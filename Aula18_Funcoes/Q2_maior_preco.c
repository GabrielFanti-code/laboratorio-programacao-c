#include <stdio.h>

float maiorPreco(float a, float b) {
    return (a > b) ? a : b;
}

int main(void) {
    float p1, p2;
    printf("Preco do produto 1: ");
    scanf("%f", &p1);
    printf("Preco do produto 2: ");
    scanf("%f", &p2);

    if (p1 == p2)
        printf("Os precos sao iguais: R$ %.2f\n", p1);
    else
        printf("Maior preco: R$ %.2f\n", maiorPreco(p1, p2));
    return 0;
}

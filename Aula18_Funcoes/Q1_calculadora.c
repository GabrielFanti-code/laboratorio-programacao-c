#include <stdio.h>

void exibirMenu(void) {
    printf("\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n");
}
double somar(double a, double b) { return a + b; }
double subtrair(double a, double b) { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b) { return a / b; }

int main(void) {
    int opcao;
    double a, b;

    do {
        exibirMenu();
        printf("Opcao: ");
        if (scanf("%d", &opcao) != 1) return 1;
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros: ");
            if (scanf("%lf %lf", &a, &b) != 2) return 1;
            switch (opcao) {
                case 1: printf("Resultado: %.2f\n", somar(a, b)); break;
                case 2: printf("Resultado: %.2f\n", subtrair(a, b)); break;
                case 3: printf("Resultado: %.2f\n", multiplicar(a, b)); break;
                case 4:
                    if (b == 0) printf("Erro: divisao por zero.\n");
                    else printf("Resultado: %.2f\n", dividir(a, b));
                    break;
            }
        } else if (opcao != 0) {
            printf("Opcao invalida.\n");
        }
    } while (opcao != 0);
    return 0;
}

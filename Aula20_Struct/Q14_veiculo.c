#include <stdio.h>

typedef struct {
    char modelo[60];
    int ano;
    float valor;
} Veiculo;

int main(void) {
    Veiculo v;
    printf("Modelo: ");
    scanf(" %59[^\n]", v.modelo);
    printf("Ano: ");
    scanf("%d", &v.ano);
    printf("Valor: ");
    scanf("%f", &v.valor);

    printf("\n--- VEICULO ---\n");
    printf("Modelo: %s\nAno: %d\nValor: R$ %.2f\n",
           v.modelo, v.ano, v.valor);
    return 0;
}

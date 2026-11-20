#include <stdio.h>

int main(void) {
    int matriz[2][3];
    int soma = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("Soma de todos os elementos: %d\n", soma);
    return 0;
}

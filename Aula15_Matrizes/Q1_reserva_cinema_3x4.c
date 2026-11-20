#include <stdio.h>

int main(void) {
    int assentos[3][4];
    int ocupados = 0, disponiveis = 0;

    printf("Informe 0 para disponivel e 1 para ocupado.\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            do {
                printf("Fileira %d, assento %d: ", i + 1, j + 1);
                scanf("%d", &assentos[i][j]);
                if (assentos[i][j] != 0 && assentos[i][j] != 1)
                    printf("Valor invalido. Digite 0 ou 1.\n");
            } while (assentos[i][j] != 0 && assentos[i][j] != 1);

            if (assentos[i][j] == 1)
                ocupados++;
            else
                disponiveis++;
        }
    }

    printf("\nMapa de assentos (0=livre, 1=ocupado):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++)
            printf("%d ", assentos[i][j]);
        printf("\n");
    }

    printf("Assentos ocupados: %d\n", ocupados);
    printf("Assentos disponiveis: %d\n", disponiveis);
    return 0;
}

#include <stdio.h>

int main(void) {
    int numeros[5];
    int *ponteiro = numeros;

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nElementos do vetor:\n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(ponteiro + i));

    return 0;
}

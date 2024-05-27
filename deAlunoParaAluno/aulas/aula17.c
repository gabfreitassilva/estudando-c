#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite dois numero inteiros: ");
    scanf("%d %d", &numero1, &numero2);

    if (numero2 == 0) {
        printf("Divisao por 0. Operacao invalida.\n");
    } else {
        if (numero1 % numero2 == 0) {
            printf("O resultado da divisao e: %d\n", (numero1 / numero2));
        } else {
            printf("A divisao nao e exata.\n");
        }
    }

    return 0;
}
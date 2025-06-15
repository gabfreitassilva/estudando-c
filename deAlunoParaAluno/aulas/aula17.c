#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int numero1, numero2;

    printf("Digite dois numero inteiros: ");
    scanf("%d %d", &numero1, &numero2);

    if (numero2 == 0) {
        printf("Divisão por 0. Operação invalida.\n");
    } else {
        if (numero1 % numero2 == 0) {
            printf("O resultado da divisão é: %d\n", (numero1 / numero2));
        } else {
            printf("A divisão não é exata.\n");
        }
    }

    return 0;
}
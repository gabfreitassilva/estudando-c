#include <stdio.h>
int main() {
    int numero1, numero2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &numero1, &numero2);

    printf("O numero %d e maior que %d: ", numero1, numero2);
    numero1 > numero2 ? printf("sim\n") : printf("nao\n"); //if ternario

    return 0;
}
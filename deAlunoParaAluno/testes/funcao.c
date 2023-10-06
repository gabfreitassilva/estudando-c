#include <stdio.h>

// soma inteira
int soma (int a, int b) {
    int soma = a + b;
    
    return soma;
}

int main() {
    int a, b;

    printf("Bem-vindo ao programa da soma inteira.\n");

    printf("Abaixo digite dois numeros inteiros para descobrir sua soma:\n");

    printf("Numero 01: ");
    scanf("%d", &a);
    printf("Numero 02: ");
    scanf("%d", &b);

    printf("A soma entre %d e %d e igual a %d\n", a, b, soma(a, b));

    return 0;
}
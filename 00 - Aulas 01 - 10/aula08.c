#include <stdio.h>

int main() {
    int num1 = 5;
    float num2 = 7;
    float resultado = num1 / num2; // Atribuindo o resultado da divisão entre dois números
    // Por mais que sejam dois números inteiros, a divisão resulta em um número de ponto flutuante,
    // assim, se a variável resultado for do tipo int, o resultado não exibiria corretamente.

    printf("A divisão entre %d e %f é igual a: %f.\n", num1, num2, resultado);

    return 0;
}
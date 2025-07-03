#include <stdio.h>

int main() {
    int fatorialDe = 10, resultado = 1, aux = 1;

    printf("O fatorial de %d é: ", fatorialDe);
    for(int i = fatorialDe; i > 1; --i) {
        resultado *= i; // ao utilizar *= eu reduzo a equação que antes seria resultado = resultado * i
    }
    printf("%d.\n", resultado);

    return 0;
}
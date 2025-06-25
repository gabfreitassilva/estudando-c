#include <stdio.h>

int main() {
    /*
     * Para fazer um ciclo que repete determinado bloco de código em um determinado período de tempo
     * utilizamos de laços, como no exemplo abaixo onde podemos observar o uso do laço for.
     * Nesse laço temos que passar três parâmetros que vão me dar as condições de funcionamento para o
     * laço. Dessa forma, ele só vai executar o laço enquanto os parâmetros que eu passei resultarem em
     * verdadeiro.
     */
    for(int i = 5; i > 0; i--) {
        printf("Ciclo número: %d.\n", i);
    }

    return 0;
}
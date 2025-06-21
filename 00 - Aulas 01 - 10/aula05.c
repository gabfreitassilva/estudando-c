#include <stdio.h>

int main() {
    // Múltiplas declarações e atribuições de variáveis em uma única linha
    int qtdeUva = 5, qtdeBanana = 12, qtdePera = 23;
    int qtdeTotal;
    
    // Atribuindo o resultado de uma operação matemática a uma variável
    qtdeTotal = qtdeUva + qtdePera + qtdeBanana;

    printf("A quantidade total de frutas é: %d.\n", qtdeTotal);
    printf("Temos: Uvas: %d, Bananas: %d e Peras: %d.\n", qtdeUva, qtdeBanana, qtdePera);

    return 0;
}
#include <stdio.h>

int main() {
    /*
     * Aqui temos outro exemplo de laço de repetição em linguagem C.
     * No laço while, diferentemente do laço for, temos apenas um parâmetro para passar.
     * Passamos a condição de teste que desejamos comparar a fim de executar o nosso laço
     * por um certo período de tempo. 
     */

    int i = 5;
    while(i > 0) {
        printf("Ciclo número: %d.\n", i);
        i--;
    }

    return 0;
}
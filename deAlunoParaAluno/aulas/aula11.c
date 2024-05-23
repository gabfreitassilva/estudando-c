#include <stdio.h>

int main() {
    int contador = 1;
    
    /* diferentemente do laço for, a variavel auxiliar de contagem do laço tem de ser atribuida
     na hora da sua criação */
    while(contador <= 5) {
        printf("%d\n", contador);
        contador++;
    }

    return 0;
}
#include <stdio.h>

int main() {
    // como qualquer variável, um vetor pode ser atribuído manualmente de forma direta
    float notas[4];
    float media, soma;

    notas[0] = 4.5;
    notas[1] = 7.6;
    notas[2] = 8.9;
    notas[3] = 3.5;

    soma = notas[0] + notas[1] + notas[2] + notas[3];
    media = soma / 4;

    printf("A media das notas e: %f\n", media);
    
    return 0;
}
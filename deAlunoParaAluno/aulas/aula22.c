#include <stdio.h>

int main() {
    float notas[4], media = 0, aux = 0;

    for (int i = 0; i < 4; i++) {
        printf("Digite a nota n%d: ", i);
        scanf("%f", &notas[i]);
        aux += notas[i];
    }

    // for (int j = 0; j < 4; j++) {
    //     aux += notas[j];
    // }

    media = aux / 4;
    printf("A media das notas e: %.2f.\n", media);

    return 0;
}
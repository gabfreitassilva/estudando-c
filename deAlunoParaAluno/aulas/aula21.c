#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("Ciclo externo: %d.\n", i);
        for (int j = 0; j < 3; j++) {
            printf("    Ciclo interno: %d.\n", j);
        }
    }

    return 0;
}
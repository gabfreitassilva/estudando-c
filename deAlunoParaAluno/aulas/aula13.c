// laço do while vai executar pelo menos uma unica vez

#include <stdio.h>

int main() {
    int i = 5, j = 5;

    while (i < 5) {
        printf("1 laco numero %d\n", i);
        i++;
    }

    do {
        printf("2 Laco numero %d\n", j);
        j++;
    } while (j < 5);

    return 0;
}
#include <stdio.h>

int main() {
    char nome[10];

    printf("Digite o seu primeiro nome: ");
    for (int i = 0; i < 10; i++) { // ciclo para preenchimento do vetor
        nome[i] = getc(stdin);
        if (nome[i] == '\n') { // condição para finalizar o ciclo de preenchimento
            i = 9;
        }
    }

    printf("Seu nome e: ");
    for (int j = 0; j < 10; j++) { // ciclo para exibir o conteudo do vetor
        printf("%c", nome[j]);
        if (nome[j] == '\n') { // condição paa finalizar o ciclo de exibição
            j = 9;
            //printf("\n");
        }
    }

    return 0;
}
#include <stdio.h>

int main() {
    int choice;

    printf("[ 0 ] Entrar \n[ 1 ] Sair \n[ 2 ] Mais opcoes \nDigite a sua escolha: ");
    scanf("%d", &choice);

    switch(choice) {
        case 0:
            printf("Voce escolheu entrar...\n");
            break;
        case 1:
            printf("Voce escolheu sair...\n");
            break;
        case 2:
            printf("Voce escolheu mais opcoes...\n");
            break;
        default:
            printf("Opcao invalida...\n");
            break;
    }

    return 0;
}
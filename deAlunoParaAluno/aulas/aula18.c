// retorna o número digitado, só que ao contrário
#include <stdio.h>

int main() {
    int numero, aux;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &numero);

    printf("O numero digitado invertido fica: ");
    if(numero > 0) {
        while(numero != 0) {
            aux = numero % 10;
            printf("%d", aux);
            numero /= 10;
        }
    } else {
        numero *= -1;
        while(numero != 0) {
            aux = numero % 10;
            printf("%d", aux);
            numero /= 10;
        }
        printf("-");
    }

    return 0;
}
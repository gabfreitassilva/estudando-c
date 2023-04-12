#include <stdio.h>

int main() {
    int idade;

    printf("Por favor, informe sua idade: ");
    scanf("%d", &idade);

    if(idade < 18) {
        printf("Menor de idade\n");
    } else {
        printf("Maior de idade\n");
    }
 
    return 0;
}
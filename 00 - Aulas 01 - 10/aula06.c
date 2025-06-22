#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite o valor da base do retângulo: ");
    scanf("%f", &base); // Função utilizada para capturar o que for digitado pelo usuário e armazenar na variável definida

    printf("Digite o valor da altura do retângulo: ");
    scanf("%f", &altura); // Função utilizada para capturar o que for digitado pelo usuário e armazenar na variável definida

    area = base * altura; // Área do retângulo
    printf("O valor da área do retângulo é: %.2f.\n", area);

    return 0;
}
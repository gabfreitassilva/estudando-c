#include <stdio.h>

int main() {
    int area, base, altura;
    
    printf("Digite o valor da base: ");
    scanf("%d", &base);
    
    printf("Digite o valor da altura: ");
    scanf("%d", &altura);
    
    area = base * altura;
    
    printf("O valor da area do retangulo e: %d\n", area);
    
    return 0;
}
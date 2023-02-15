#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];
    int len;
    
    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    
    len = strlen(nome);
    if (nome[len - 1] == '\n')
        nome[len - 1] = '\0';
    
    printf("Bem vindo(a) %s!\n", nome);
    
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    int length_name;
    
    printf("Digite o seu nome: ");
    fgets(name, sizeof(name), stdin);
    
    length_name = strlen(name);
    if (name[length_name - 1] == '\n') {
        name[length_name - 1] = '\0'; // para que ao final do nome, o programa não pule para a outra linha
    }
    printf("Bem vindo(a) %s!\n", name);
    
    return 0;
}
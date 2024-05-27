#include <stdio.h>
int main() {
    char variavelChar = 'a';
    printf("Variavel caractere: %c\n", variavelChar);

    /*
    * em C não existe o tipo literal bool,
    * então levamos em consideração que todo valor
    * diferente de 0 é considerado true, enquanto 0
    * é considerado false.
    */

   int variavelInt = 10;
   printf("Variavel inteira: %d\n", variavelInt);

   /*
   * em C existem os tipos int, char, double, float e seus
   * modificadores para definirmos tipos de dados em
   * variaveis.
   */

    return 0;
}
#include <stdio.h>
int main() {
    char variavelChar = 'a';
    printf("%c\n", variavelChar);
    scanf("%c", &variavelChar);
    printf("%c\n", variavelChar);

    /*
    * em C não existe o tipo literal bool,
    * então levamos em consideração que todo valor
    * diferente de 0 é considerado true, enquanto 0
    * é considerado false.
    */

   int variavelInt = 10;
   printf("%d\n", variavelInt);
   scanf("%d", &variavelInt);
   printf("%d\n", variavelInt);

    return 0;
}
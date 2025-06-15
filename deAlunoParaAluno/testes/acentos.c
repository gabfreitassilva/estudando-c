#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("Acentos funcionam: ção\n");
    return 0;
}
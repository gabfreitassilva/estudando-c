#ifndef MINHALIB_H
#define MINHALIB_H
#include <stdio.h>

int lendoNumero(char* s) {
    int valor;

    printf("%s", s);
    scanf("%d", &valor);

    return valor;
}

#endif
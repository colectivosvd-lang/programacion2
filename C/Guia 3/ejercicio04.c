#include <stdio.h>
#include "funciones.h"

int main()
{
    char a[100];
    char b;
    int c;

    printf("Ingrese cadena: ");
    scanf("%99s", a);

    printf("Ingrese caracter: ");
    scanf(" %c", &b);

    printf("Ingrese posicion: ");
    scanf("%d", &c);

    insertar(a, b, c);

    printf("Resultado: %s\n", a);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        printf("Error: Debe ingresar 3 numeros enteros.\n");
        printf("Uso: %s <num1> <num2> <num3>\n", argv[0]);
        return 1;
    }

    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);
    int n3 = atoi(argv[3]);

    int max = maximo_de_tres(n1, n2, n3);

    printf("El mayor entre %d, %d y %d es: %d\n", n1, n2, n3, max);

    return 0;
}
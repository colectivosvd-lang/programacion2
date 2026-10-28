#include <stdio.h>
#include "funciones.h"

int main()
{
    int a;

    printf("Ingrese numero: ");
    if (scanf("%d", &a) != 1)
    {
        return 1;
    }
    long long b = factorial(a);

    if (b == -1)
    {
        printf("Error: Numero negativo\n");
    }
    else
    {
        printf("Resultado: %lld\n", b);
    }

    return 0;
}
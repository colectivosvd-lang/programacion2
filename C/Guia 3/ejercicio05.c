#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        return 1;
    }

    int n = argc - 1;
    int a[100];

    for (int i = 0; i < n; i++)
    {
        a[i] = atoi(argv[i + 1]);
    }

    burbuja(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
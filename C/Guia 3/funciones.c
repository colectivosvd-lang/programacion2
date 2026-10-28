#include <stdio.h>
#include "funciones.h"

void intercambiar_por_valor(int a, int b)
{
    int aux = a;
    a = b;
    b = aux;
    printf("Por valor: a = %d, b = %d\n", a, b);
}

void intercambiar_por_punteros(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
    printf("Por punteros: *a = %d, *b = %d\n", *a, *b);
}

int maximo_de_tres(int a, int b, int c)
{
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;
}

long long factorial(int a)
{
    if (a < 0)
    {
        return -1;
    }
    long long b = 1;
    for (int i = 1; i <= a; i++)
    {
        b *= i;
    }
    return b;
}

#include <string.h>

void insertar(char a[], char b, int c)
{
    int l = strlen(a);
    if (c < 0 || c > l)
    {
        return;
    }
    for (int i = l; i >= c; i--)
    {
        a[i + 1] = a[i];
    }
    a[c] = b;
}

void burbuja(int a[], int b)
{
    for (int i = 0; i < b - 1; i++)
    {
        for (int j = 0; j < b - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }
}
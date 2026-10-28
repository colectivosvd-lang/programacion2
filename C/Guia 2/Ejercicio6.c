// Escribir un programa que lea una matriz M de 3 ×3 elementos y un vector v de 3 elementos. Calcular el producto de la matriz por el vector y mostrar por pantalla el vector resultante.
#include <stdio.h>

int main(void)
{
    int M[3][3];
    int V[3];
    int r[3] = {0, 0, 0};

    printf("Ingrese los valores de la matriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    printf("\nIngrese los valores del vector:\n");
    for (int j = 0; j < 3; j++)
    {
        scanf("%d", &V[j]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            r[i] += M[i][j] * V[j];
        }
    }
    printf("\nEl vector resultante r es:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("r[%d] = %d\n", i, r[i]);
    }
    return (0);
}
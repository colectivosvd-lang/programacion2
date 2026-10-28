// Escribir un programa que genere una matriz cuadrada M de 3×3 elementos, cuyos valores se calculen mediante la expresión
//M[i, j] = (i + 2j)2,
//considerando que los indices i y j toman valores desde 0 hasta 2. Luego, mostrar por pantalla la matriz M y su transpuesta.
#include <stdio.h>

int main(void)
{
    int M[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int base = i + 2 * j;
            M[i][j] = base * base;
        }
    }

    printf("Matriz original M:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d ", M[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transpuesta de M:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d ", M[j][i]);
        }
        printf("\n");
    }

    return 0;
}
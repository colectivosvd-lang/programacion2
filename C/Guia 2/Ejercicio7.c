// Escribir un programa que contenga dos vectores de 5 números enteros y, utilizando punteros, genere un tercer vector cuyos elementos sean la suma de los elementos correspondientes de los dos vectores originales.Luego, mostrar por pantalla el vector resultante.
#include <stdio.h>

int main(void)
{
    int M[5] = {1, 2, 3, 4, 5};
    int V[5] = {10, 20, 30, 40, 50};
    int r[5] = {0};

    int *punt1;
    int *punt2;
    int *punt3;

    punt1=M;
    punt2=V;
    punt3=r;

    for (int i = 0; i < 5; i++)
    {
        *(punt3 + i) = *(punt1 + i) + *(punt2 + i);
    }
    


    printf("\nEl vector resultante r es:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("r[%d] = %d\n", i, r[i]);
    }
    return (0);
}
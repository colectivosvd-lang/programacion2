// Escribir un programa que utilice una función para intercambiar dos valores. Realizarlo utilizando dos funciones : una con llamada por valor y otra que permita modificar los valores originales utilizando punteros.Compara el resultado obtenido en ambos casos.
#include <stdio.h>
#include "funciones.h"

int main()
{
    int num1 = 10;
    int num2 = 20;

    printf("VALORES ORIGINALES: num1 = %d, num2 = %d\n\n", num1, num2);

    printf("INTERCAMBIO POR VALOR\n");
    intercambiar_por_valor(num1, num2);
    printf("Despues de la funcion: num1 = %d, num2 = %d\n\n", num1, num2);

    printf("INTERCAMBIO POR PUNTEROS\n");
    intercambiar_por_punteros(&num1, &num2);
    printf("Despues de la funcion: num1 = %d, num2 = %d\n\n", num1, num2);

    return 0;
}
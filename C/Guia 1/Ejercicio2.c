#include <stdio.h>

int main(void)
{
    int a;

    printf("Ingrese el numero: ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("El numero es par.\n ");
    else
        printf("El numero es impar.\n ");
    return 0;
}
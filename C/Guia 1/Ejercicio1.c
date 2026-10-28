#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    if (a == b)
    {
        printf("Son iguales\n");
    }
    else if (a < b)
    {
        printf("El numero %d es menor que %d\n", a, b);
    }
    else
    {
        printf("El numero %d es mayor que %d\n", a, b);
    }
    return 0;
}
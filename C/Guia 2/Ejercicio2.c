// Escribir un programa que lea una a y la muestre por pantalla en orden inverso. Considere que la a ingresada no contiene espacios.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100];
    int b;

    printf("Ingrese la palabra:");
    scanf("%s", a);

    b = strlen(a);
    printf("palabra al revés: \n");
    for (int i = b - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
    printf("\n");

    return 0;
}

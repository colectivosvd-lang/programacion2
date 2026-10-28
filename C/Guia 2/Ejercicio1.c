// Escribir un programa que lea un carácter y muestre por pantalla el carácter ingresado y su código ASCII en formato decimal.
#include <stdio.h>

int main(void)
{
    char c;
    printf("Ingrese un carácter: ");
    scanf("%c", &c);
    printf("Código ASCII en formato decimal: %d\n", c);
    return 0;
}

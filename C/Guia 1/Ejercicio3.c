#include <stdio.h>

int main(void)
{
    int a, b;
    char c;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    printf("Ingrese el caracter: ");
    scanf(" %c", &c);

    if (c == '*' || c == 'x')
    {
        printf("El resultado es: %d\n", a * b);
    }
    else if (c == '+')
    {
        printf("El resultado es: %d\n", a + b);
    }
    else if (c == '-')
    {
        printf("El resultado es: %d\n", a - b);
    }
    else if (c == '/')
    {
        printf("El resultado es: %d\n", a / b);
    }
    else
        printf("No hay operación matemática\n");
    return 0;
}
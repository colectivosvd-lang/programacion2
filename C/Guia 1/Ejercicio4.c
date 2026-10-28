#include <stdio.h>

int main()
{
    char c;
    int a, b;
    float r;
    float d, f;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    printf("Ingrese el caracter: ");
    scanf(" %c", &c);

    switch (c)
    {
    case '+':
        printf("El resultado es: %d\n", a + b);
        break;
    case '-':
        printf("El resultado es: %d\n", a - b);
        break;
    case '*':
        printf("El resultado es: %d\n", a * b);
        break;
    case '/':
        {
          //d=3.2;
          //f=5,8;
            r=a/b;
            printf("El resultado es: %f\n",r);
            break;

        }
      //printf("El resultado es: %d\n", a / b);
      //break;
    default:
        printf("Error no hay operación");
    }
}
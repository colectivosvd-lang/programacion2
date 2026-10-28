// Escribir un programa que lea dos cadenas de caracteres y realice las siguientes operaciones:
// a.muestre la longitud de cada cadena;
// b.compare ambas cadenas e indique si son iguales;
// c.concatene la segunda cadena al final de la primera;
// d.copie el contenido resultante de la primera cadena en la segunda.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[200];
    char b[100];
    int longa;
    int longb;

    printf("Ingrese la cadena de caracteres: ");
    fgets(a, sizeof(a), stdin);

    printf("Ingrese la cadena de caracteres: ");
    fgets(b, sizeof(b), stdin);

    longa = strlen(a);
    longb = strlen(b);
    printf("Longitud de la primer cadena: %ld\n", strlen(a));
    printf("Longitud de la segunda cadena: %ld\n", strlen(b));
    // printf("Longitud de la primer cadena: %d\n", longa); // strlen(a));
    //printf("Longitud de la segunda cadena: %d\n", longb); // strlen(b));
    if (strcmp(a, b) == 0)
    {
        printf("Las cadenas son iguales.\n");
    }
    else
    {
        printf("Las cadenas son diferentes.\n");
    }
    strcat(a,b);
    printf("Cadenas concatenadas: %s\n",a);

    strcpy(b,a);
    printf("Primer cadena copiada dentro de la segunda: %s\n",b);

    return 0;
}

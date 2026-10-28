// Escribir un programa que lea una cadena de caracteres y la muestre por pantalla convirtiendo todas las letras minúsculas a mayúsculas.Para realizar la conversión, tenga en cuenta que la diferencia entre el código ASCII de una letra minúscula y el de su correspondiente letra mayúscula es un valor constante.
#include <stdio.h>
#include <string.h>

int main(void) 
{
    char a[100];

    printf("Ingrese la cadena de caracteres: ");
    fgets(a,sizeof(a),stdin);

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
    }
    printf("Cadena de caracteres convertida: %s\n", a);

    return 0;
}

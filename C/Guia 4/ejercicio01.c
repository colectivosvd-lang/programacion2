// Escribir un programa que solicite al usuario el nombre de un archivo de texto, lo abra en modo lectura y muestre por pantalla todo su contenido. El programa deberá verificar que el archivo pueda abrirse correctamente antes de intentar leerlo.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename[100];
    FILE *file;

    printf("Ingrese el nombre del archivo de texto: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    char c;
    while ((c = fgetc(file)) != EOF)
    {
        putchar(c);
    }

    fclose(file);
    return 0;
}
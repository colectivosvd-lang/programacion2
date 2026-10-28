// Escribir un programa que copie el contenido de un archivo de texto en otro archivo. Los nombres del archivo de origen y del archivo de destino deberán recibirse mediante argumentos de la línea de comandos. Por ejemplo: ./copiar origen.txt destino.txt El programa deberá verificar que el archivo de origen pueda abrirse correctamente y generar el archivo de destino con el mismo contenido.

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Uso: %s <archivo_origen> <archivo_destino>\n", argv[0]);
        return 1;
    }

    FILE *forigen, *fdestino;
    int c;

    forigen = fopen(argv[1], "r");
    if (forigen == NULL)
    {
        printf("Error: no se pudo abrir el archivo de origen '%s'.\n", argv[1]);
        return 1;
    }

    fdestino = fopen(argv[2], "w");
    if (fdestino == NULL)
    {
        printf("Error: no se pudo crear el archivo de destino '%s'.\n", argv[2]);
        fclose(forigen);
        return 1;
    }

    while ((c = fgetc(forigen)) != EOF)
    {
        fputc(c, fdestino);
    }

    fclose(forigen);
    fclose(fdestino);

    printf("Archivo copiado con exito.\n");

    return 0;
}
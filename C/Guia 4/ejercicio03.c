// Escribir un programa que permita buscar una cadena de caracteres dentro de un archivo de texto. El texto que se desea buscar y el nombre del archivo deberán recibirse mediante argumentos de la línea de comandos. Por ejemplo: ./buscar ERROR registro.txt El programa deberá recorrer el archivo línea por línea y mostrar por pantalla únicamente las líneas completas que contengan el texto buscado. El programa deberá verificar que el archivo pueda abrirse correctamente antes de realizar la búsqueda.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Uso: %s <texto_buscar> <archivo>\n", argv[0]);
        return 1;
    }

    FILE *farchivo;
    char *texto_buscar = argv[1];
    char *nombre_archivo = argv[2];
    char linea[1000];

    farchivo = fopen(nombre_archivo, "r");
    if (farchivo == NULL)
    {
        printf("Error: no se pudo abrir el archivo '%s'.\n", nombre_archivo);
        return 1;
    }

    while (fgets(linea, sizeof(linea), farchivo) != NULL)
    {
        if (strstr(linea, texto_buscar) != NULL)
        {
            printf("%s", linea);
        }
    }

    fclose(farchivo);

    return 0;
}
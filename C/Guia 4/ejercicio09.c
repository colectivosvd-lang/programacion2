/* Un archivo denominado estacion.txt contiene identificadores de estaciones de monitoreo, por ejemplo: EST-001 EST-002 EST-003 Escribir un programa que lea el archivo y reemplace todas las apariciones de EST por NODE. El contenido resultante deberá almacenarse en un nuevo archivo denominado estacion-actualizada.txt. Por ejemplo: NODE-001 NODE-002 NODE-003 Este ejercicio representa una actualización de la nomenclatura utilizada para identificar los nodos de un sistema. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char buscar[] = "EST";
    char reemplazar[] = "NODE";
    int lon_buscar = strlen(buscar);
    char linea[1000];
    FILE *entrada = fopen("estacion.txt", "r");
    FILE *salida = fopen("estacion-actualizada.txt", "w");
    if (entrada == NULL)
    {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    while (fgets(linea, sizeof(linea), entrada))
    {

        char *ptr = linea;
        char *pos;

        while ((pos = strstr(ptr, buscar)) != NULL)
        {

            fwrite(ptr, 1, pos - ptr, salida);
            {
                fputs(reemplazar, salida);
                ptr = pos + lon_buscar;
            }
        }
        fputs(ptr, salida);
        fclose(entrada);
        fclose(salida);
        printf("Reemplazo completado con éxito en 'estacion-actualizada.txt'.\n");
        return 0;
    }
}
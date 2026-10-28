/* Un nodo de red registra 10 mediciones de intensidad de señal, expresadas en dBm.
Escribir un programa que:
a) Solicite al usuario el ingreso de 10 mediciones enteras comprendidas entre −120 dBm y −30 dBm.
b) Genere un archivo denominado reporte.txt que contenga todas las mediciones ingresadas.
c) Al final del archivo incluya:
i) el valor promedio de las mediciones;
ii) la cantidad de señales inferiores a −80 dBm;
iii) la cantidad de señales superiores a −60 dBm.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mediciones[10];
    int suma = 0;
    int count_inferior = 0;
    int count_superior = 0;

    for (int i = 0; i < 10; i++)
    {
        do
        {
            printf("Ingrese la medicion %d (entre -120 y -30 dBm): ", i + 1);
            scanf("%d", &mediciones[i]);
            if (mediciones[i] < -120 || mediciones[i] > -30)
            {
                printf("Valor invalido. Intente nuevamente.\n");
            }
        } while (mediciones[i] < -120 || mediciones[i] > -30);

        suma += mediciones[i];

        if (mediciones[i] < -80)
        {
            count_inferior++;
        }
        if (mediciones[i] > -60)
        {
            count_superior++;
        }
    }

    float promedio = suma / 10.0;

    FILE *farchivo = fopen("reporte.txt", "w");
    if (farchivo == NULL)
    {
        printf("Error: no se pudo crear el archivo 'reporte.txt'.\n");
        return 1;
    }

    fprintf(farchivo, "Mediciones de intensidad de señal:\n");
    for (int i = 0; i < 10; i++)
    {
        fprintf(farchivo, "%d dBm\n", mediciones[i]);
    }
    fprintf(farchivo, "\nPromedio: %.2f dBm\n", promedio);
    fprintf(farchivo, "Cantidad de señales inferiores a -80 dBm: %d\n", count_inferior);
    fprintf(farchivo, "Cantidad de señales superiores a -60 dBm: %d\n", count_superior);

    fclose(farchivo);

    printf("Reporte generado exitosamente en 'reporte.txt'.\n");

    return 0;
}
    
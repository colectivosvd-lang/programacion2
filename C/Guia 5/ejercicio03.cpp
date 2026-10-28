// El RSRP (ver glosario) es, en redes celulares, el indicador que usa el teléfono para saber qué tan bien recibe la señal de la antena más cercana.Leé un valor de RSRP y clasificá la señal con if / else if / else : “Excelente” si es mayor a - 80 dBm; “Buena” si es mayor a - 95 dBm; “Débil” si es mayor a - 110 dBm; “Sin cobertura” en cualquier otro caso.Estos umbrales son valores de referencia típicos; no hace falta memorizarlos.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    double potencia;
    cout << "Ingrese la potencia: ";
    cin >> potencia;

    double Exelente = -80;
    double Buena = -95;
    double Debil = -110;
    double SinCobertura = -111;

    if (potencia >= Exelente)
    {
        cout << "Excelente" << endl;
    }
    else if (potencia >= Buena)
    {
        cout << "Buena" << endl;
    }
    else if (potencia >= Debil)
    {
        cout << "Debil" << endl;
    }
    else
    {
        cout << "Sin cobertura" << endl;
    }

    return 0;
}
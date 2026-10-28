// Usando un for , generar y mostrar 10 mediciones simuladas de RSSI (por ejemplo, con (rand() % 50) - 90 para valores entre -90 y -40 dBm y contar cuántas están por debajo de -70 dBm.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr));

    int contador_bajo_70 = 0;

    for (int i = 1; i <= 10; ++i)
    {
        int medicion = (rand() % 51) - 90;
        cout << "Medicion " << i << ": " << medicion << " dBm" << endl;

        if (medicion < -70)
        {
            contador_bajo_70++;
        }
    }

    cout << "\nCantidad de mediciones por debajo de -70 dBm: " << contador_bajo_70 << endl;

    return 0;
}
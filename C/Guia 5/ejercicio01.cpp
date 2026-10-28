// Definí un struct Medicion con los campos canal ( int ) y rssi ( double , en dBm — ver glosario). Declará un array de 5 elementos, cargalo con valores fijos en el código (por ejemplo, canales 1, 6, 11, 6 y 1, con RSSI entre -85 y -60), y mostrá todas las mediciones con std::cout
#include <iostream>

using namespace std;

struct Medicion
{
    int canal;
    double rssi;
};

int main()
{
    Medicion datos[5] = {
        {1, -85},
        {6, -60},
        {11, -61},
        {6, -73},
        {1, -63}};

    for (int i = 0; i < 5; i++)
    {
        cout << "Canal: " << datos[i].canal << " | RSSI: " << datos[i].rssi << endl;
    }

    return 0;
}

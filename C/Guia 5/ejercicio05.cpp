#include <iostream>

using namespace std;

double mbpsAKBps(double mbps)
{
    return (mbps / 8.0) * 1000.0;
}

double tiempoDescargaSeg(double tamanioMB, double velocidadMbps)
{
    double velocidadMBps = velocidadMbps / 8.0;
    return tamanioMB / velocidadMBps;
};

int main()
{
    double tamanio;
    double velocidad;

    cout << "Ingrese el tamaño del archivo en MB: ";
    cin >> tamanio;
    cout << "Ingrese la velocidad de descarga en Mbps: ";
    cin >> velocidad;

    cout << "El tiempo de descarga es: " << tiempoDescargaSeg(tamanio, velocidad) << " segundos." << endl;

    return 0;
}

// Escribí un programa que le pida al usuario, con std::cin , el SSID ( std::string ), el canal (int)y la frecuencia en MHz(double) de un punto de acceso WiFi, y muestre un resumen con std::cout en una sola línea.Dato de referencia : las redes WiFi de 2.4 GHz usan frecuencias entre 2400 y 2483 MHz aproximadamente.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string SSID;
    cout << "Introduce el SSID: ";
    cin >> SSID;

    int CANAL;
    cout << "Introduce el CANAL: ";
    cin >> CANAL;
    if (CANAL < 2400 || CANAL > 2483)
    {
        cout << "Canal incorrecto" << endl;
    }

    double FRECUENCIA;
    cout << "Introduce la FRECUENCIA: ";
    cin >> FRECUENCIA;
    if (FRECUENCIA < 2400 || FRECUENCIA > 2483)
    {
        cout << "Frecuencia incorrecta" << endl;
    }

    cout << "Resumen de red -> SSID: " << SSID << " | CANAL: " << CANAL << " | FRECUENCIA: " << FRECUENCIA << " MHz" << endl;

    return 0;
}
/*Definí una clase PuntoAcceso con atributos ssid ( std::string ) y canal (int) (ver glosario), y un método mostrar() que imprima ambos. Creá dos objetos con datos distintos y mostralos.*/

#include <iostream>
#include <string>

using namespace std;

class punto_acceso
{
public:
    string ssid;
    int canal;
    void mostrar()
    {
        cout << "ssid: " << ssid << ".\n";

        cout << "canal: " << canal << ".\n";
    }
};

int main()
{
    punto_acceso a;

    a.ssid = "Red Libre";

    a.canal = 1;

    a.mostrar();

    punto_acceso b;

    b.ssid = "Red Privada";

    b.canal = 14;

    b.mostrar();
}

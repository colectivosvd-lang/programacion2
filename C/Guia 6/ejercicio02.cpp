/* Cuando una señal viaja por un cable, se atenúa (pierde potencia) de forma aproximadamente proporcional a la longitud recorrida. Definí una clase Cable con atributos longitudMetros y atenuacionPorMetro (ambos double , este último en dB por metro), y un método atenuacionTotal() que devuelva la atenuación total en dB (el producto de los dos atributos). */

#include <iostream>
#include <string>

using namespace std;

class Cable
{
public:
    double longitudMetros;
    double atenuacionPorMetro;
    double atenuacionTotal()
    {
        return (longitudMetros * atenuacionPorMetro);
    }
};

int main()
{
    Cable micable;

    cout << "Ingrese la longitud de cable en metros: ";
    cin >> micable.longitudMetros;

    cout << "Ingrese la atenuacion del cable (dB/m): ";
    cin >> micable.atenuacionPorMetro;

    cout << "Atenuacion total: " << micable.atenuacionTotal() << " dB" << endl;

    return 0;
}
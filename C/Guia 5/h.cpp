// Definir una clase Sensor con atributos nombre(std - : string) y valorActual(double), y un método mostrar().Crear dos objetos con distintos valores y mostrarlos.

#include <iostream>

using namespace std;

class Antena
{
public:
    double frecuencia;

    double calcularLongitudOnda()
    {
        double frecuencia_en_Hz = frecuencia * 1000000.0;
        return 300000000.0 / frecuencia_en_Hz;
    }
};

int main()
{
    Antena miAntena;
    miAntena.frecuencia = 300.0;

    cout << "Frecuencia: " << miAntena.frecuencia << " MHz" << endl;
    cout << "Longitud de onda: " << miAntena.calcularLongitudOnda() << " metros" << endl;

    return 0;
}
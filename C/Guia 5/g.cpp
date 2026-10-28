// Definir una clase Sensor con atributos nombre(std - : string) y valorActual(double), y un método mostrar().Crear dos objetos con distintos valores y mostrarlos.

#include <iostream>
#include <string>

using namespace std;

class Sensor
{
public:
    string nombre;
    double valorActual;

    void mostrar()
    {
        cout << "Sensor: " << nombre << " | Valor: " << valorActual << endl;
    }
};

int main()
{
    Sensor sensor1;
    sensor1.nombre = "Norte";
    sensor1.valorActual = 25.5;

    Sensor sensor2;
    sensor2.nombre = "Sur";
    sensor2.valorActual = 60.2;

    sensor1.mostrar();
    sensor2.mostrar();

    return 0;
}
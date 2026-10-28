/* Una batería se caracteriza, entre otras cosas, por su voltaje (V) y su capacidad de carga en amperios-hora (Ah, una medida de cuánta energía puede entregar). Definí una clase Bateria con atributos voltaje y capacidadAh . Escribile dos constructores: uno sin parámetros (que inicialice ambos en 0) y otro que reciba los dos valores. */

#include <iostream>

using namespace std;

class Bateria
{
public:
    double voltaje;
    double capacidadAh;

    Bateria()
    {
        voltaje = 0;
        capacidadAh = 0;
    }

    Bateria(double v, double c)
    {
        voltaje = v;
        capacidadAh = c;
    }

    double energia()
    {
        return (voltaje * capacidadAh);
    }

    void mostrar()
    {
        cout << "Voltaje: " << voltaje << "\n";
        cout << "Capacidad: " << capacidadAh << "\n";
    }
};

int main()
{
    cout << "--- Bateria 1 ---" << endl;
    Bateria bat1;
    bat1.mostrar();

    cout << "\n--- Bateria 2 ---" << endl;


    double v , c;

    cout << "Ingrese el voltaje de la bateria: ";
    cin >> v;

    cout << "Ingrese la capacidad de la bateria: ";
    cin >> c;

    Bateria bat2(v, c);

    cout << "La energia de la bateria es: " << bat2.energia() << endl;

    return 0;
}
// Escribir una función normalizarPotencia(double *potencia) que ajuste el valor recibido al rango[0, 46] si se pasa de los límites(paso por puntero),y probarla desde main().

#include <iostream>

using namespace std;

void normalizarPotencia(double *potencia)
{
    if (potencia == nullptr)
        return;

    const double minimo_permitido = 0.0;
    const double maximo_permitido = 46.0;

    if (*potencia < minimo_permitido)
    {
        *potencia = minimo_permitido;
    }
    else if (*potencia > maximo_permitido)
    {
        *potencia = maximo_permitido;
    }
}

int main()
{
    double pot;
    cout << "Ingrese la potencia: ";
    cin >> pot;

    normalizarPotencia(&pot);

    cout << "Valor normalizado: " << pot << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

bool esNombreValido(string nombre)
{
    if (nombre.length() <= 3)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    string nombreEstacion;
    cout << "Ingrese nombre de la estacion: ";
    cin >> nombreEstacion;
    cout << (esNombreValido(nombreEstacion) ? "es valido" : "NO es valido") << endl;
    return 0;
}

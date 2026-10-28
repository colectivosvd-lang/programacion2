// Ejercicio 6: Validación simplificada de una IP Una dirección IP (la identificación numérica de un dispositivo en una red) tiene el formato A.B.C.D , con tres puntos separando cuatro números (por ejemplo, 192.168.1.1 ). Escribí una función: bool formatoIpValido(std::string ip) que devuelva true solo si la cadena contiene exactamente 3 puntos. Se trata de una validación simplificada: no hace falta comprobar que cada número esté entre 0 y 255. Podés usar find() o recorrer la cadena con un for .

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string IP;
    double contador = 0;
    cout << "Ingrese la IP: ";
    cin >> IP;

    size_t pos = IP.find('.');

    while (pos != string::npos)
    {
        contador++;

        if (contador > 3)
        {
            break;
        }

        pos = IP.find('.', pos + 1);
    }

    if (contador == 3)
    {
        cout << "True " << endl;
    }
    else
    {
        cout << "False " << endl;
    }

    return 0;
}

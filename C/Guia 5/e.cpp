#include <iostream>
#include <vector>

using namespace std;

double promedio(const vector<double> &valores)
{
    if (valores.empty())
        return 0.0;

    double suma = 0.0;
    for (size_t i = 0; i < valores.size(); i++)
    {
        suma += valores[i];
    }

    return suma / valores.size();
}

int main()
{
    vector<double> mediciones_rssi;
    double valor_ingresado;

    cout << "Por favor, ingresa 5 mediciones de RSSI:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Medicion " << i + 1 << ": ";
        cin >> valor_ingresado;
        mediciones_rssi.push_back(valor_ingresado);
    }

    double resultado = promedio(mediciones_rssi);
    cout << "\nEl promedio de RSSI es: " << resultado << " dBm" << endl;

    return 0;
}

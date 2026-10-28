/* Agregale a la clase PuntoAcceso un constructor que reciba ssid y canal , y creá un objeto ya inicializado con él. */

#include <iostream>
#include <string>

using namespace std;

class PuntoAcceso
{
public:
    string ssid;
    int canal;


    PuntoAcceso(string s, int c)
    {
        ssid = s;
        canal = c;
    }

    void mostrar()
    {
        cout << "SSID: " << ssid << "\n";
        cout << "Canal: " << canal << "\n";
    }
};
int main()
{
    
    PuntoAcceso ap1("MiRed_WiFi", 6);

  
    ap1.mostrar();

    return 0;
}
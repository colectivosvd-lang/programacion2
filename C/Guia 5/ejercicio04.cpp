// Pedí un código de tipo de red: 1 = WiFi; 2 = 4G; 3 = 5G; 4 = Ethernet. Mostrá el nombre correspondiente utilizando switch . Después, usando un for , generá y mostrá 8 mediciones simuladas de latencia en milisegundos (ver glosario). Podés usar: rand() % 50 + 5 para simular valores entre 5 y 54 ms, un rango razonable para una conexión hogareña.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main()
{
    int red;
    std::string nombreRed;
    std::cout << "Ingrese código de tipo de red: ";
    std::cin >> red;

    switch (red)
    {
    case 1:
        nombreRed = "WiFi";
        break;
    case 2:
        nombreRed = "4G";
        break;
    case 3:
        nombreRed = "5G";
        break;
    case 4:
        nombreRed = "Ethernet";
        break;
    default:
        nombreRed = "Red desconocida";
        break;
    }

    std::srand(std::time(0));
    std::cout << "\n--- Mediciones de Latencia Simuladas: " << nombreRed << " ---" << std::endl;

    for (int i = 1; i <= 8; i++)
    {
        int latencia = std::rand() % 50 + 5;
        std::cout << "Medición " << i << ": " << latencia << " ms" << std::endl;
    }

    return 0;
}
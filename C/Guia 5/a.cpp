
#include <iostream>
#include <cmath>

int main()
{
    double vatios;
    std::cout << "Ingrese la potencia en vatios: ";
    std::cin >> vatios;

    if (vatios <= 0)
    {
        std::cout << "La potencia debe ser un valor positivo." << std::endl;
        return 1;
    }

    double dbm = 10 * log10(vatios / 0.001);
    std::cout << "La potencia en dBm es: " << dbm << " dBm" << std::endl;

    return 0;
}

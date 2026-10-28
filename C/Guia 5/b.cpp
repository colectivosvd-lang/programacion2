// Pedir un código de modulación (1 = AM, 2 = FM, 3 = Digital) y, usando switch , mostrar el nombre correspondiente; luego, con if / else , indicar si el canal ingresado está en el rango válido (1 a 40).

#include <iostream>
#include <cmath>

int main()
{
    int modulacion;
    std::cout << "Ingrese codigo de modulacion: ";
    std::cin >> modulacion;
    switch (modulacion)
    {
    case 1:
        std::cout << "AM\n";
        break;
    case 2:
        std::cout << "FM\n";
        break;
    case 3:
        std::cout << "DIGITAL\n";
        break;

    default:
        std::cout << "Desconocida\n";
    }
    int canal;
    std::cout << "Ingrese un canal: ";
    std::cin >> canal;
    if (canal >= 1 && canal <= 40)
    {
        std::cout << "El canal esta dentro del rango" << std::endl;
    }
    else
    {
        std::cout << "El canal esta fuera de rango" << std::endl;
    }
    return 0;
}

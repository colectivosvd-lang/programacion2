import sys
import math

def main():
    print("--- MENU MATEMATICO ---")
    print("1. Sumar")
    print("2. Restar")
    opcion = input("Seleccione una opción (1 o 2): ")

    if opcion in ["1", "2"]:
        num1 = float(input("Ingrese el primer número: "))
        num2 = float(input("Ingrese el segundo número: "))

        if opcion == "1":
            sumar(num1, num2)
        elif opcion == "2":
            restar(num1, num2)
    else:
        print("Opción no válida.")

if __name__ == "__main__":
    main()

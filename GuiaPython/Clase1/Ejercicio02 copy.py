"""Módulo para calcular la ganancia de antenas parabólicas en enlaces de microondas."""

import math

VELOCIDAD_LUZ = 3e8


def ganancia_parabolica(diametro_m: float, frecuencia_hz: float, eficiencia: float) -> float:
    """Calcula la ganancia de una antena parabólica en dBi.

    Parámetros:
    - diametro_m: Diámetro del plato en metros.
    - frecuencia_hz: Frecuencia de operación en Hertz.
    - eficiencia: Eficiencia de la antena (típicamente 0.55).
    """
    lambda_m = VELOCIDAD_LUZ / frecuencia_hz
    ganancia = 10 * math.log10(eficiencia * (math.pi * diametro_m / lambda_m) ** 2)
    return ganancia


def main():
    """Función principal que ejecuta el cálculo y muestra los resultados en una tabla."""
    diametros = [0.3, 0.6, 1.2]
    frecuencias = [5.8e9, 11e9]
    eficiencia = 0.55

    print(f"{'Diámetro (m)':<15} {'Frecuencia (GHz)':<20} {'Ganancia (dBi)':<20}")
    print("-" * 55)

    for d in diametros:
        for f in frecuencias:
            ganancia = ganancia_parabolica(d, f, eficiencia)
            print(f"{d:<15.1f} {f / 1e9:<20.1f} {ganancia:<20.2f}")


if __name__ == "__main__":
    main()
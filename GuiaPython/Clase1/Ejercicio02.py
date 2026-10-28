"""2. Ganancia de una antena parabólica Los enlaces de microondas punto a punto usan antenas parabólicas ("platos"), que concentran la energía en un haz muy angosto. CAJA NEGRA - Ganancia de una antena parabólica Qué es: cuánto concentra la antena la energía respecto de una antena ideal que irradia igual en todas las direcciones. Crece con el diámetro del plato y con la frecuencia. Cómo lo usamos: D: diámetro [m], λ: longitud de onda [m], η: eficiencia, típicamente 0.55. G[dBi]=10 log10(η(π D/λ)^2). Lo van a profundizar en: Antenas y Propagación. Escribí ganancia_parabolica (diametro_m, frecuencia_hz, eficiencia) y calculá la ganancia para platos de 0.3 m, 0.6 m y 1.2 m, en 5.8 GHz y en 11 GHz. Mostrá los resultados en una tabla. ¿Cuántos dB se ganan al duplicar el diámetro? ¿Y al pasar de 5.8 GHz a 11 GHz con el mismo plato?"""

import math


def ganancia_parabolica(diametro_m, frecuencia_hz, eficiencia):
    lambda_m = 3e8 / frecuencia_hz
    ganancia = 10 * math.log10(eficiencia * (math.pi * diametro_m / lambda_m) ** 2)
    return ganancia


def main():
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

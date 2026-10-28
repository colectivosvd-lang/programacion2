# 4. Balance de ocho enlaces a la vez
#
# Una empresa tiene 8 enlaces punto a punto, todos con transmisores de 23 dBm
# y antenas de 15 dBi en ambos extremos:
#
# Enlace | Distancia [km] | Frecuencia [GHz]
# E1     | 2.5            | 5.8
# E2     | 8.0            | 5.8
# E3     | 12.0           | 5.8
# E4     | 3.0            | 2.4
# E5     | 15.0           | 2.4
# E6     | 20.0           | 2.4
# E7     | 6.5            | 5.8
# E8     | 28.0           | 2.4
#
# Fórmulas:
# FSPL[dB] = 20 * log10( (4 * pi * d * f) / c )   (d en metros, f en hertz)
# Prx = Ptx + Gtx + Grx - FSPL
# margen = Prx - umbral
#
# Guardá distancias y frecuencias en arrays de NumPy y, sin bucles:
# 1. calculá la FSPL y la potencia recibida de los 8 enlaces;
# 2. calculá el margen respecto de un umbral de -75 dBm;
# 3. con np.where, construí un array de textos "OK" / "FALLA";
# 4. mostrá una tabla con todos los resultados y la cantidad de enlaces que fallan.

import numpy as np

# Arrays iniciales
d_km = np.array([2.5, 8.0, 12.0, 3.0, 15.0, 20.0, 6.5, 28.0])
f_ghz = np.array([5.8, 5.8, 5.8, 2.4, 2.4, 2.4, 5.8, 2.4])

d_m = d_km * 1000
f_hz = f_ghz * 1e9

c = 3e8  # Velocidad de la luz en m/s
Ptx = 23
Gtx = 15
Grx = 15

FSPL = 20 * np.log10( (4 * np.pi * d_m * f_hz) / c )
Prx = Ptx + Gtx + Grx - FSPL
umbral = -75
margen = Prx - umbral
estado = np.where(margen >= 0, "OK", "FALLA")

cantidad_fallas = np.sum(estado == "FALLA")
tabla_resultados = np.column_stack((d_km, f_ghz, FSPL, Prx, margen, estado))
print("d[km] | f[GHz] | FSPL[dB] | Prx[dBm] | Margen[dB] | Estado")
print("Tabla de resultados:")
print(tabla_resultados)
print(f"Cantidad de enlaces que fallan: {cantidad_fallas}")
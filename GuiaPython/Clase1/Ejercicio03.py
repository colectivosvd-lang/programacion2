"""Un receptor registró el RSSI promedio de cada hora de un día (de las 0 h a las 23 h):
rssi = np.array([-68.2, -67.9, -67.5, -67.8, -68.0, -68.9,
-70.4, -72.8, -74.1, -75.6, -76.3, -75.9,
-74.8, -75.2, -76.8, -77.1, -75.4, -73.9,
-72.2, -70.8, -69.9, -69.1, -68.7, -68.4])
Con NumPy, calculá:
1. el promedio directo y el promedio en potencia (convertir a mW, promediar, volver a dBm);
2. el mínimo, el máximo y a qué hora ocurrió cada uno (np.argmin, np.argmax);
3. cuántas horas estuvo por debajo de −75 dBm y cuáles fueron;
4. cuántas horas estuvo en la “zona de riesgo”, entre −75 dBm (incluido) y −72 dBm.
¿En qué momento del día el enlace está peor? Proponé una explicación física posible."""

import numpy as np

rssi = np.array(
    [
        -68.2,
        -67.9,
        -67.5,
        -67.8,
        -68.0,
        -68.9,
        -70.4,
        -72.8,
        -74.1,
        -75.6,
        -76.3,
        -75.9,
        -74.8,
        -75.2,
        -76.8,
        -77.1,
        -75.4,
        -73.9,
        -72.2,
        -70.8,
        -69.9,
        -69.1,
        -68.7,
        -68.4,
    ]
)

p_mw = 10 ** (rssi / 10)
p_prom_mw = np.mean(p_mw)
prom_potencia = 10 * np.log10(p_prom_mw)
min_rssi = np.min(rssi)
max_rssi = np.max(rssi)
hora_min = np.argmin(rssi)
hora_max = np.argmax(rssi)

mascara = rssi < -75
cantidad_horas = np.sum(mascara)
horas_criticas = np.where(mascara)[0]
mascara_riesgo = (rssi >= -75) & (rssi < -72)
cant_riesgo = np.sum(mascara_riesgo)
horas_riesgo = np.where(mascara_riesgo)[0]

print("=== RESULTADOS DEL ANÁLISIS DE RSSI ===")
print(f"1. Promedio directo : {p_prom_mw:.2f} dBm")
print(f"   Promedio potencia: {prom_potencia:.2f} dBm")

print(f"\n2. Valor mínimo: {min_rssi:.1f} dBm (a las {hora_min}:00 h)")
print(f"   Valor máximo: {max_rssi:.1f} dBm (a las {hora_max}:00 h)")

print(f"\n3. Horas por debajo de -75 dBm ({cantidad_horas} horas):")
print(f"   Horarios: {horas_criticas}")

print(f"\n4. Horas en zona de riesgo [-75, -72) dBm ({cant_riesgo} horas):")
print(f"   Horarios: {horas_riesgo}")

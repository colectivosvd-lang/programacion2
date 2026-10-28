# 5. Gráfico de cobertura
#
# Con los datos del ejercicio anterior (23 dBm, antenas de 15 dBi, umbral -75 dBm),
# graficá la potencia recibida en función de la distancia, entre 0.5 km y 40 km,
# para 2.4 GHz y 5.8 GHz, en un mismo gráfico.
#
# El gráfico debe incluir:
# - una curva por frecuencia, con leyenda;
# - la línea horizontal del umbral;
# - una línea vertical (plt.axvline) en el alcance máximo de cada frecuencia, 
#   calculado con NumPy (la mayor distancia que cumple el umbral, usando una máscara);
# - título, ejes con unidades y grilla.
#
# Imprimí además el alcance máximo de cada frecuencia. Usá al menos 1000 puntos 
# de distancia con np.linspace.

import numpy as np
import matplotlib.pyplot as plt
d_km = np.linspace(0.5, 40, 1000)
d_m = d_km * 1000
f_ghz = np.array([2.4, 5.8])
f_hz = f_ghz * 1e9
c = 3e8  # Velocidad de la luz en m/s
Ptx = 23
Gtx = 15
Grx = 15   
umbral = -75

f_24 = 2.4e9
f_58 = 5.8e9

fspl_24 = 20 * np.log10((4 * np.pi * d_m * f_24) / c)
prx_24 = Ptx + Gtx + Grx - fspl_24

fspl_58 = 20 * np.log10((4 * np.pi * d_m * f_58) / c)
prx_58 = Ptx + Gtx + Grx - fspl_58

alcance_max_24 = d_km[prx_24 >= umbral][-1]
alcance_max_58 = d_km[prx_58 >= umbral][-1]
print(f"Alcance máximo a 2.4 GHz: {alcance_max_24:.2f} km")
print(f"Alcance máximo a 5.8 GHz: {alcance_max_58:.2f} km")

plt.figure(figsize=(10, 6))
plt.plot(d_km, prx_24, label='2.4 GHz', color='blue')
plt.plot(d_km, prx_58, label='5.8 GHz', color='orange')
plt.axhline(y=umbral, color='red', linestyle='--', label='Umbral -75 dBm')
plt.axvline(x=alcance_max_24, color='blue', linestyle=':', label=f'Alcance 2.4 GHz: {alcance_max_24:.2f} km')
plt.axvline(x=alcance_max_58, color='orange', linestyle=':', label=f'Alcance 5.8 GHz: {alcance_max_58:.2f} km')
plt.title('Potencia recibida vs Distancia')
plt.xlabel('Distancia [km]')
plt.ylabel('Potencia recibida [dBm]')
plt.grid()
plt.legend()
plt.xlim(0, 40)
plt.ylim(-100, 30)     
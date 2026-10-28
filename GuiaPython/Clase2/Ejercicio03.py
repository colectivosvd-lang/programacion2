# 3. Decodificar una tecla
# Usando la función tono_dtmf del ejercicio 1, generá la tecla 8 con fs = 8000 Hz 
# durante 0.1 s y sumale ruido con sigma = 0.8 (rng = np.random.default_rng(3)).
# Escribí decodificar_tecla(senal, fs), que:
# 1. calcule el espectro de la señal;
# 2. encuentre la frecuencia con mayor amplitud entre 650 y 1000 Hz (la fila) 
#    y la de mayor amplitud entre 1150 y 1550 Hz (la columna), usando máscaras;
# 3. elija, para cada una, la frecuencia de la tabla más cercana;
# 4. devuelva la tecla correspondiente.
# Probala con las 12 teclas y verificá que las decodifica todas correctamente. 
# Con 0.1 s de señal, ¿cuál es la resolución en frecuencia? ¿Por qué no hace 
# falta que el pico caiga exactamente en la frecuencia de la tabla?
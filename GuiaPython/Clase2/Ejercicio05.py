# 5. Aliasing en un conversor
# Un conversor analógico-digital muestrea a fs = 10 kHz. Llega un tono de 7 kHz.
# Frecuencia aparente por aliasing: f_aparente = abs(f - fs * round(f / fs))
# 1. Calculá con la fórmula dónde va a aparecer el tono.
# 2. Generá el tono muestreado a 10 kHz durante 0.1 s y verificá con espectro() 
#    y np.argmax la frecuencia aparente.
# 3. Repetí para tonos de 1, 3, 6, 9, 11 y 14 kHz: armá una tabla con la frecuencia real, 
#    la calculada con la fórmula y la medida en el espectro.
# 4. ¿Cuál es la menor fs que permite representar correctamente todos esos tonos?
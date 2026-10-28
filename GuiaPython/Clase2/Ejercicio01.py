# 1. Tonos de marcación telefónica (DTMF)
# Cuando se presiona una tecla de un teléfono, se transmiten dos tonos simultáneos: 
# uno de fila y uno de columna. Este sistema se llama DTMF (Dual-Tone Multi-Frequency).
#
# Tabla de frecuencias:
#           1209 Hz | 1336 Hz | 1477 Hz
# 697 Hz  |   1     |    2    |    3
# 770 Hz  |   4     |    5    |    6
# 852 Hz  |   7     |    8    |    9
# 941 Hz  |   *     |    0    |    #
#
# Por ejemplo, la tecla 5 es la suma de un tono de 770 Hz y uno de 1336 Hz, ambos de amplitud 1.
# 1. Escribí tono_dtmf(tecla, t), que genere la señal de cualquier tecla. 
#    Guardá la tabla en dos diccionarios (FILA y COLUMNA) que asocien cada tecla con su frecuencia.
# 2. Generá la tecla 5 con fs = 8000 Hz durante 0.1 s.
# 3. Verificá con una función que fs cumple Nyquist para todas las frecuencias de la tabla.
# 4. Graficá los primeros 20 ms de las teclas 1 y 9 con plt.subplot(2,1,...).
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
import matplotlib.pyplot as plt
import numpy as np

def verificar_nyquist(fs, frecuencias):
    for f in frecuencias:
        if fs <= 2 * f:
            return False
    return True
fila = {'1': 697, '2': 697, '3': 697,
        '4': 770, '5': 770, '6': 770,
        '7': 852, '8': 852, '9': 852,
        '*': 941, '0': 941, '#': 941}

columna = {'1': 1209, '2': 1336, '3': 1477,
           '4': 1209, '5': 1336, '6': 1477,
           '7': 1209, '8': 1336, '9': 1477,
           '*': 1209, '0': 1336, '#': 1477}

def tono_dtmf(tecla, t):
    f1 = fila[tecla]
    f2 = columna[tecla]
    return np.sin(2 * np.pi * f1 * t) + np.sin(2 * np.pi * f2 * t)  
t = np.arange(0, 0.1, 1/8000)
senal_5 = tono_dtmf('5', t)
max(fila.values()), max(columna.values())
todas_frecuencias = list(fila.values()) + list(columna.values())
if verificar_nyquist(8000, todas_frecuencias):
    print("fs cumple Nyquist para todas las frecuencias de la tabla.")


fs = 8000
t_20ms = np.arange(0, 0.02, 1 / fs)
senal_1 = tono_dtmf('1', t_20ms)
senal_9 = tono_dtmf('9', t_20ms)


plt.subplot(2, 1, 2)
plt.plot(t_20ms * 1000, senal_9)
plt.title("Tecla 9")
plt.xlabel("Tiempo [ms]")
plt.ylabel("Amplitud")
plt.grid(True)

plt.tight_layout()
plt.show()
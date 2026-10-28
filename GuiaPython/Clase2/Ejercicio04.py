# 4. Filtro telefónico
# Una línea telefónica transmite voz entre 300 Hz y 3400 Hz. Una señal de prueba contiene 
# tonos de 400 Hz, 1000 Hz y 3000 Hz (amplitud 1 cada uno) y una interferencia de 5500 Hz 
# de amplitud 0.8, muestreados con fs = 16000 Hz durante 0.5 s.
# 1. Diseñá un pasa-bajos Butterworth de orden 6 con fc = 3400 Hz y aplicalo con filtfilt.
# 2. Informá la amplitud de cada componente antes y después del filtro, y la atenuación 
#    en dB de cada una: 20 * log10(A_despues / A_antes).
# 3. Construí la figura de 2x2 (tiempo y frecuencia, antes y después). 
#    En los gráficos temporales mostrá solo 10 ms.
# ¿Se atenúa algo la componente de 3000 Hz? ¿Por qué?
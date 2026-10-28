# 4. Perfil horario de la red
# ¿Cambia el comportamiento de la red según la hora del día?
# 1. Usando df["timestamp"].dt.hour, calculá para cada hora (0 a 23): la temperatura promedio 
#    de toda la red y el RSSI promedio en potencia.
# 2. Graficá los dos perfiles en una figura con plt.subplot(2, 1, ...), con la hora en el eje X.
# 3. Informá la hora más caliente y la más fría (idxmax(), idxmin()) y la diferencia de temperatura entre ambas.
# ¿El RSSI muestra un ciclo diario como la temperatura? ¿Qué conclusión sacás?
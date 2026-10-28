# 5. Resumen diario de la red
# El centro de operación recibe cada mañana un resumen del día anterior. Usando df["timestamp"].dt.date, 
# construí una tabla con una fila por día y estas columnas:
# - RSSI promedio de la red, en potencia;
# - temperatura máxima registrada y la estación que la registró;
# - cantidad de alarmas de RSSI;
# - cantidad de alarmas de temperatura;
# - cantidad de reportes recibidos (se esperan 20 x 96 = 1920 por día).
# Mostrá la tabla y graficá con barras las alarmas de RSSI por día. ¿Qué días fueron problemáticos? 
# ¿Qué muestra la cantidad de reportes?
# 2. Calidad de los datos
# Un análisis confiable empieza por saber cuántos datos faltan y dónde.
# 1. Calculá, para cada estación, la cantidad de valores faltantes de rssi y temperatura. 
#    Sugerencia: crear una columna booleana con isna() y sumarla con groupby().
# 2. Calculá el porcentaje de datos faltantes de cada columna en toda la red.
# 3. ¿Qué estación tiene más datos faltantes de RSSI? ¿Hay alguna que no tenga ninguno?
# 4. Graficá con barras la cantidad de faltantes de RSSI por estación.
# ¿Los faltantes están concentrados en pocas estaciones o repartidos? ¿Qué implica eso para la decisión de descartarlos?
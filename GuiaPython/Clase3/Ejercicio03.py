# 3. Clasificación de la calidad de señal
# Un operador clasifica cada medición según su RSSI:
# - Excelente: RSSI > -60 dBm
# - Buena:     -67 dBm <= RSSI < -60 dBm
# - Regular:   -75 dBm < RSSI < -67 dBm  (Nota: verificar los rangos de la tabla original)
# - Mala:      RSSI <= -75 dBm
# 
# 1. Agregá al DataFrame una columna calidad. Podés hacerlo con np.select() o con pd.cut() 
#    (buscá en la documentación el parámetro right, necesario para respetar exactamente los límites de la tabla).
# 2. Contá cuántas mediciones de toda la red hay en cada categoría y el porcentaje que representan.
# 3. Para cada estación, calculá el porcentaje de mediciones "Excelente" y ordená las estaciones de mayor a menor.
# 4. Verificá que la cantidad de mediciones "Mala" coincide con la cantidad total de alarmas de RSSI.
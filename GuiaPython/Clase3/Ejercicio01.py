# 1. Inventario de la red
# Antes de analizar mediciones, un ingeniero necesita saber qué equipos tiene. 
# Cada estación opera siempre en la misma banda y con la misma potencia de transmisión.
# 1. Construí una tabla con una fila por estación y sus columnas frecuencia y potencia. 
#    Sugerencia: groupby("estacion") y el método first(), que toma el primer valor de cada grupo.
# 2. Comprobá con nunique() que ninguna estación haya cambiado de frecuencia o potencia durante la semana.
# 3. Contá cuántas estaciones operan en cada banda y calculá la potencia de transmisión promedio de cada banda.
# 4. Agregá a la tabla una columna con la longitud de onda en centímetros de cada estación, empleando lambda = c / f.
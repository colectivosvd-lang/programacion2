# 7. Horizonte de radio
#
# Por la curvatura de la Tierra, dos antenas solo "se ven" si están a menos de cierta distancia.
# d_max = 4.12 * (sqrt(h1) + sqrt(h2))   (h1, h2 en metros, resultado en km)
#
# Escribí horizonte_km(h1_m, h2_m). Calculá el horizonte para una torre de 30 m 
# y un receptor a 1.5 m (un auto), y para dos torres de 30, 45 y 60 m (todas las 
# combinaciones de alturas iguales). ¿Qué altura mínima deberían tener dos torres 
# iguales para un enlace de 50 km? Resolvelo despejando h de la fórmula.
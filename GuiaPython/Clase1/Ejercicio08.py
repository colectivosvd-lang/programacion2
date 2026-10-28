# 8. Zona de Fresnel
#
# Para que un enlace funcione bien no alcanza con "ver" la otra antena: 
# hay que dejar libre una zona alrededor de la línea recta entre ellas.
#
# r = 17.32 * sqrt((d1 * d2) / (f * d))  
# (d1, d2 en km; d = d1 + d2; f en GHz; resultado en metros)
# Si un obstáculo invade más del 40% de su radio, la señal se atenúa.
#
# Para un enlace de 10 km en 5.8 GHz, calculá el radio en el punto medio. 
# Luego, un edificio ubicado a 3 km de una de las antenas tiene su techo 4 m 
# por debajo de la línea de vista: ¿invade más del 40% del radio de Fresnel 
# en ese punto? Escribí una función que responda esa pregunta para cualquier obstáculo.

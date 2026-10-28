# 6. Cadena de amplificación
#
# Una señal de -90 dBm entra a un receptor que tiene esta cadena de etapas:
#
# Etapa                              | Ganancia [dB]
# Cable de antena                    | -2.5
# Amplificador de bajo ruido (LNA)   | +20
# Filtro                             | -1.5
# Mezclador                          | -7
# Amplificador de frecuencia intermedia | +30
#
# En dB, las ganancias se suman: P_salida = P_entrada + sum(ganancias). 
# En escala lineal, se multiplican:
# P_salida[mW] = P_entrada[mW] * product(10^(G/10))
#
# Calculá la potencia de salida de las dos formas (sumando en dB y multiplicando 
# en escala lineal) y verificá con math.isclose que dan lo mismo. Mostrá también 
# la potencia a la salida de cada etapa.


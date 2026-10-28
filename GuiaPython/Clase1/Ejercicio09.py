# 9. Piso de ruido de un receptor
#
# N[dBm] = 10 * log10(k * T * B * 1000) + NF
# SNR[dB] = Prx[dBm] - N[dBm]
# (k = constante de Boltzmann, T = 290 K, B en Hz, NF en dB)
#
# Para un receptor con NF = 6 dB, calculá el piso de ruido con anchos de banda 
# de 200 kHz (GSM), 5 MHz (3G), 20 MHz y 80 MHz (WiFi). Luego, para una potencia 
# recibida de -70 dBm, calculá la SNR en cada caso. ¿Qué pasa con la SNR al aumentar el ancho de banda?
# 2. Una señal con la relación señal a ruido deseada
# SNR y nivel de ruido: la relación señal a ruido (SNR) compara la potencia de la señal con la del ruido.
# P = np.mean(x**2), SNR[dB] = 10 * log10(P_senal / P_ruido), sigma = sqrt(P_senal / (10**(SNR/10)))
# 
# Generá un tono de 1 kHz y amplitud 1, con fs = 8000 Hz durante 1 s.
# 1. Escribí sigma_para_snr(senal, snr_db) que calcule el desvío de ruido necesario.
# 2. Para SNR 20, 10, 0 y -5 dB, agregá el ruido correspondiente (rng = np.random.default_rng(2)) 
#    y medí la SNR obtenida con snr_db(senal, ruido). ¿Coincide con la deseada?
# 3. Graficá los primeros 5 ms de las cuatro señales en una figura de 2x2.
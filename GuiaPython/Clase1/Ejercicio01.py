"""1. Potencias de transmisores reales En telecomunicaciones se usan tres unidades de potencia: el watt (W), el dBm (referencia 1 mW) y dBW (referencia 1 W). CAJA NEGRA — dBm y dBW Cómo lo usamos: P[dBm] = 10 log10(P[mW]), P[dBW] = 10 log10(P[W]) P[dBm] = P[dBW] + 30. Escribí las funciones w_a_dbm(p_w), dbm_a_w(p_dbm) y dbm_a_dbw(p_dbm), y un main() que muestre, en una tabla alineada, la potencia en W, dBm y dBW de estos transmisores: Equipo Potencia Punto de acceso WiFi 0,1 W Teléfono celular (máximo) 2 W Estación base celular 40 W Emisora de FM 10.000 W Luego respondé: ¿cuántos dB separan a la emisora de FM del punto de acceso WiFi? ¿Cuántas veces más potencia es eso?"""

import math


def w_a_dbm(p_w):
    """Convierte potencia en watts a dBm."""
    p_mw = p_w * 1000
    p_dbm = 10 * math.log10(p_mw)
    return p_dbm


def dbm_a_w(p_dbm):
    """Convierte potencia en dBm a watts."""
    p_mw = 10 ** (p_dbm / 10)
    p_w = p_mw / 1000
    return p_w


def dbm_a_dbw(p_dbm):
    """Convierte potencia en dBm a dBW."""
    p_dbw = p_dbm - 30
    return p_dbw


def main():
    transmisores = [
        ("Punto de acceso WiFi", 0.1),
        ("Teléfono celular (máximo)", 2),
        ("Estación base celular", 40),
        ("Emisora de FM", 10000),
    ]

    print(
        f"{'Equipo':<30} {'Potencia (W)':<15} {'Potencia (dBm)':<20} {'Potencia (dBW)':<20}"
    )
    print("-" * 85)

    for equipo, potencia_w in transmisores:
        potencia_dbm = w_a_dbm(potencia_w)
        potencia_dbw = dbm_a_dbw(potencia_dbm)
        print(
            f"{equipo:<30} {potencia_w:<15.4f} {potencia_dbm:<20.2f} {potencia_dbw:<20.2f}"
        )

    potencia_fm_dbm = w_a_dbm(10000)
    potencia_wifi_dbm = w_a_dbm(0.1)
    diferencia_db = potencia_fm_dbm - potencia_wifi_dbm
    veces_mas_potencia = 10 ** (diferencia_db / 10)

    print(
        "\nDiferencia en dB entre la emisora de FM y el punto de acceso WiFi:",
        diferencia_db,
    )
    print(
        "La emisora de FM tiene",
        veces_mas_potencia,
        "veces más potencia que el punto de acceso WiFi.",
    )

if __name__ == "__main__":
    main()

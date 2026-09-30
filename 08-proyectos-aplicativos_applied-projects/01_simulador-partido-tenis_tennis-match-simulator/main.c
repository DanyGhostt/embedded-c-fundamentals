/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Simulador de tanteador de tenis: máquina de estados para puntos (0,15,30,40), Deuce, Advantage y Game.
 * EN: Tennis match score simulator: state machine for points (0,15,30,40), Deuce, Advantage, and Game.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Convierte el puntaje numérico (0, 1, 2, 3) a la nomenclatura de tenis */
const char* formato_puntos(int puntos)
{
    switch (puntos)
    {
        case 0: return "0";
        case 1: return "15";
        case 2: return "30";
        case 3: return "40";
        default: return "40";
    }
}

int main(void)
{
    /* Secuencia simulada de puntos ganados por jugador ('A' o 'B') */
    const char *secuencia_puntos = "ABABAA";
    int puntos_a = 0;
    int puntos_b = 0;
    int juego_terminado = 0;
    size_t i;

    printf("====================================================\n");
    printf("  SIMULADOR DE TANTEADOR DE TENIS                   \n");
    printf("  TENNIS MATCH SCORE STATE MACHINE                  \n");
    printf("====================================================\n\n");

    printf("Secuencia de puntos: %s\n\n", secuencia_puntos);

    for (i = 0; i < strlen(secuencia_puntos); i++)
    {
        char punto = secuencia_puntos[i];
        if (punto == 'A') puntos_a++;
        else if (punto == 'B') puntos_b++;

        printf("[Punto %zu: Gana Jugador %c] -> ", i + 1, punto);

        /* Lógica de Deuce y Ventajas */
        if (puntos_a >= 3 && puntos_b >= 3)
        {
            if (puntos_a == puntos_b)
            {
                printf("Marcador: IGUALES / DEUCE (40 - 40)\n");
            }
            else if (puntos_a == puntos_b + 1)
            {
                printf("Marcador: VENTAJA JUGADOR A (Advantage A)\n");
            }
            else if (puntos_b == puntos_a + 1)
            {
                printf("Marcador: VENTAJA JUGADOR B (Advantage B)\n");
            }
            else if (puntos_a >= puntos_b + 2)
            {
                printf(">>> JUEGO GANADO POR JUGADOR A! (GAME WON BY A) <<<\n");
                juego_terminado = 1;
                break;
            }
            else if (puntos_b >= puntos_a + 2)
            {
                printf(">>> JUEGO GANADO POR JUGADOR B! (GAME WON BY B) <<<\n");
                juego_terminado = 1;
                break;
            }
        }
        else
        {
            if (puntos_a >= 4 && puntos_a >= puntos_b + 2)
            {
                printf(">>> JUEGO GANADO POR JUGADOR A! <<<\n");
                juego_terminado = 1;
                break;
            }
            else if (puntos_b >= 4 && puntos_b >= puntos_a + 2)
            {
                printf(">>> JUEGO GANADO POR JUGADOR B! <<<\n");
                juego_terminado = 1;
                break;
            }
            else
            {
                printf("Marcador: %s - %s\n", formato_puntos(puntos_a), formato_puntos(puntos_b));
            }
        }
    }

    if (!juego_terminado)
    {
        printf("\nJuego en progreso: Jugador A (%s) vs Jugador B (%s)\n",
               formato_puntos(puntos_a), formato_puntos(puntos_b));
    }

    return 0;
}

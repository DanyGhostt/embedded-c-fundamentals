/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Población secuencial de un arreglo de 100 enteros y formato tabular.
 * EN: Sequential population of 100-integer array and tabular formatted display.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANIO 100

int main(void)
{
    int tabla[TAMANIO];
    int x;

    printf("====================================================\n");
    printf("  GENERADOR DE TABLA SECUENCIAL (100 ELEMENTOS)     \n");
    printf("  SEQUENTIAL TABLE GENERATOR (100 ELEMENTS)         \n");
    printf("====================================================\n\n");

    /* Llenado secuencial / Sequential filling */
    for (x = 0; x < TAMANIO; x++)
    {
        tabla[x] = x + 1;
    }

    /* Impresión formateada en 10 columnas / Formatted 10-column printing */
    for (x = 0; x < TAMANIO; x++)
    {
        printf("%4d", tabla[x]);
        if ((x + 1) % 10 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}

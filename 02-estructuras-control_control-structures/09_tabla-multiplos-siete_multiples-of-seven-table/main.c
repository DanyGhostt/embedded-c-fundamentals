/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Generación de la serie de múltiplos de 7 en el rango [7, 77].
 * EN: Generation of the multiples of 7 series in range [7, 77].
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    printf("====================================================\n");
    printf("  SERIE DE MULTIPLOS DE 7 (7 a 77)                  \n");
    printf("  MULTIPLES OF 7 SERIES (7 to 77)                   \n");
    printf("====================================================\n\n");

    for (i = 7; i <= 77; i += 7)
    {
        printf("  Multiplo: %2d (7 x %2d)\n", i, i / 7);
    }

    return 0;
}

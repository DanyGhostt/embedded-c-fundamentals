/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Demostración de bucles while, control de iteración y salida controlada.
 * EN: Demonstration of while loops, iteration counting, and controlled exits.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int contador = 1;

    printf("====================================================\n");
    printf("  BUCLE WHILE: CONTEO DE 1 A 10                     \n");
    printf("  WHILE LOOP: COUNTING FROM 1 TO 10                 \n");
    printf("====================================================\n\n");

    while (contador <= 10)
    {
        printf("  Iteracion / Iteration: %2d\n", contador);
        contador++;
    }

    printf("\nBucle finalizado exitosamente.\n");
    return 0;
}

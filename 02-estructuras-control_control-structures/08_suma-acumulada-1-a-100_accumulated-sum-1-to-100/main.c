/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Suma acumulada de enteros de 1 a 100 (Fórmula de Gauss = 5050).
 * EN: Accumulated sum of integers from 1 to 100 (Gauss formula = 5050).
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int suma = 0;
    const int limite = 100;

    printf("====================================================\n");
    printf("  SUMA LINEAL DE 1 A 100 (CICLO FOR)                \n");
    printf("  LINEAR SUM FROM 1 TO 100 (FOR LOOP)               \n");
    printf("====================================================\n\n");

    for (i = 1; i <= limite; i++)
    {
        suma += i;
    }

    /* Validación con fórmula analítica / Verification with analytical formula */
    int suma_gauss = (limite * (limite + 1)) / 2;

    printf("  Suma acumulada por ciclo for : %d\n", suma);
    printf("  Suma teorica (Gauss n*(n+1)/2): %d\n", suma_gauss);
    printf("  Estado: %s\n", (suma == suma_gauss) ? "CORRECTO / OK" : "ERROR");

    return 0;
}

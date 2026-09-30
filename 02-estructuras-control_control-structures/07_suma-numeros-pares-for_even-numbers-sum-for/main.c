/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Acumulación y suma de números pares del 2 al 100 con ciclo for con paso 2.
 * EN: Accumulation and sum of even numbers from 2 to 100 using a for loop with step 2.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    int suma_pares = 0;

    printf("====================================================\n");
    printf("  SUMA DE NUMEROS PARES (2 a 100)                   \n");
    printf("  SUM OF EVEN NUMBERS (2 to 100)                    \n");
    printf("====================================================\n\n");

    for (i = 2; i <= 100; i += 2)
    {
        suma_pares += i;
        if (i % 20 == 0 || i == 100)
        {
            printf("  Paso i = %3d | Suma acumulada = %4d\n", i, suma_pares);
        }
    }

    printf("\n[RESULTADO FINAL / FINAL RESULT]\n");
    printf("  La suma total de pares de 2 a 100 es: %d\n", suma_pares);

    return 0;
}

/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Implementación del algoritmo FizzBuzz (1 a 100) con operador módulo (%).
 * EN: Implementation of the FizzBuzz algorithm (1 to 100) using modulo operator (%).
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1;

    printf("====================================================\n");
    printf("  ALGORITMO FIZZBUZZ (1 a 100)                      \n");
    printf("  FIZZBUZZ ALGORITHM (1 to 100)                     \n");
    printf("====================================================\n\n");

    while (i <= 100)
    {
        if (i % 15 == 0)
        {
            /* Múltiplo de 3 y 5 / Multiple of 3 and 5 */
            printf("[%3d] FizzBuzz\n", i);
        }
        else if (i % 3 == 0)
        {
            /* Múltiplo de 3 / Multiple of 3 */
            printf("[%3d] Fizz\n", i);
        }
        else if (i % 5 == 0)
        {
            /* Múltiplo de 5 / Multiple of 5 */
            printf("[%3d] Buzz\n", i);
        }
        else
        {
            printf("[%3d] %d\n", i, i);
        }
        i++;
    }

    return 0;
}

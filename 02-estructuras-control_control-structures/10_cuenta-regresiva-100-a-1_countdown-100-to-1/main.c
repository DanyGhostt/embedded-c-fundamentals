/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Recorrido inverso con ciclo for y operador de decremento (100 a 1).
 * EN: Backward traversal with for loop and decrement operator (100 to 1).
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    printf("====================================================\n");
    printf("  CUENTA REGRESIVA DE 100 A 1                       \n");
    printf("  COUNTDOWN FROM 100 TO 1                           \n");
    printf("====================================================\n\n");

    for (i = 100; i >= 1; i--)
    {
        printf("%3d ", i);
        if (i % 10 == 1)
        {
            printf("\n");
        }
    }

    return 0;
}

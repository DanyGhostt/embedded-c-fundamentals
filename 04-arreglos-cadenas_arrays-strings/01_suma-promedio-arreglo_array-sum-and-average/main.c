/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Inicialización, recorrido, suma y promedio de arreglos unidimensionales.
 * EN: 1D Array initialization, iteration, summation, and average calculation.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

int main(void)
{
    int numeros[ARRAY_SIZE] = {1500, 20, 60, 1, 67};
    int suma = 0;
    float promedio = 0.0f;
    int i;

    printf("====================================================\n");
    printf("  ARREGLOS UNIDIMENSIONALES: SUMA Y PROMEDIO        \n");
    printf("  1D ARRAYS: SUM & AVERAGE CALCULATION              \n");
    printf("====================================================\n\n");

    printf("Elementos del arreglo / Array elements:\n");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("  numeros[%d] = %4d\n", i, numeros[i]);
        suma += numeros[i];
    }

    promedio = (float)suma / (float)ARRAY_SIZE;

    printf("\n[RESULTADOS / RESULTS]\n");
    printf("  Suma total : %d\n", suma);
    printf("  Promedio   : %.2f\n", promedio);

    return 0;
}

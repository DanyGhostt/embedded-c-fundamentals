/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Fusión secuencial de dos vectores en un arreglo destino de mayor capacidad.
 * EN: Sequential merging of two vectors into a larger destination array.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM_SUB 5
#define TAM_TOTAL (TAM_SUB * 2)

int main(void)
{
    int vector1[TAM_SUB] = {10, 20, 30, 40, 50};
    int vector2[TAM_SUB] = {60, 70, 80, 90, 100};
    int vector_fusion[TAM_TOTAL];
    int i;

    printf("====================================================\n");
    printf("  FUSION DE ARREGLOS / MERGING ARRAYS               \n");
    printf("====================================================\n\n");

    /* Copiar primer arreglo / Copy first array */
    for (i = 0; i < TAM_SUB; i++)
    {
        vector_fusion[i] = vector1[i];
    }

    /* Copiar segundo arreglo / Copy second array */
    for (i = 0; i < TAM_SUB; i++)
    {
        vector_fusion[TAM_SUB + i] = vector2[i];
    }

    printf("Arreglo resultante (%d elementos):\n", TAM_TOTAL);
    for (i = 0; i < TAM_TOTAL; i++)
    {
        printf("  vector_fusion[%d] = %d\n", i, vector_fusion[i]);
    }

    return 0;
}

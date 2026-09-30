/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Recorrido de elementos de un vector mediante aritmética de punteros.
 * EN: Vector element iteration using pointer arithmetic.
 * 
 * Embedded Context: La aritmética de punteros es utilizada en drivers embebidos
 * para procesar buffers circulares y transmisiones DMA a máxima velocidad.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short nums[] = {55, 44, 33, 22, 11};
    const int total_elementos = sizeof(nums) / sizeof(nums[0]);
    short *ap;
    int cont = 0;

    printf("====================================================\n");
    printf("  ARITMETICA DE PUNTEROS EN ARREGLOS                \n");
    printf("  POINTER ARITHMETIC IN ARRAYS                      \n");
    printf("====================================================\n\n");

    /* El nombre del arreglo 'nums' decae a la dirección del primer elemento */
    /* Array name 'nums' decays into the pointer to first element */
    ap = nums;

    printf("Recorriendo con puntero (*ap++):\n");
    while (cont < total_elementos)
    {
        printf("  Elemento %d | Direccion: %p | Valor: %d\n", cont, (void*)ap, *ap);
        ap++;  /* Avanza en memoria sizeof(short) bytes */
        cont++;
    }

    return 0;
}

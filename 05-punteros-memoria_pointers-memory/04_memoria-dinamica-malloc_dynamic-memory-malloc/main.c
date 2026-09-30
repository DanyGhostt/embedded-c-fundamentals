/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Asignación dinámica de memoria en Heap con malloc(), validación y free().
 * EN: Dynamic memory allocation on Heap using malloc(), validation, and free().
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi = NULL;

    printf("====================================================\n");
    printf("  GESTION DINAMICA DE MEMORIA (MALLOC / FREE)       \n");
    printf("  DYNAMIC MEMORY MANAGEMENT (MALLOC / FREE)         \n");
    printf("====================================================\n\n");

    /* Solicitar memoria para 1 entero en Heap */
    /* Request memory for 1 integer on Heap */
    pi = (int*)malloc(sizeof(int));

    if (pi == NULL)
    {
        printf("Error: Memoria insuficiente / Out of memory.\n");
        return 1;
    }

    /* Asignar y leer valor */
    *pi = 42;
    printf("  Memoria asignada en Heap : %p\n", (void*)pi);
    printf("  Valor almacenado (*pi)   : %d\n", *pi);

    /* Liberar memoria obligatoriamente para evitar memory leaks */
    /* Mandatory free to prevent memory leaks */
    free(pi);
    pi = NULL;

    printf("  Memoria liberada exitosamente / Memory freed successfully.\n");
    return 0;
}

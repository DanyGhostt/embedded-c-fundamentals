/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Evaluación de sizeof en arreglos vs punteros (Array Decay) en Embedded C.
 * EN: Evaluation of sizeof in arrays vs pointers (Array Decay) in Embedded C.
 * 
 * Embedded Context: Comprender el decaimiento de arreglos a punteros evita 
 * errores comunes al pasar buffers a funciones de transmisión (UART, SPI, I2C).
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("====================================================\n");
    printf("  SIZEOF EN ARREGLOS Y PUNTEROS                     \n");
    printf("  SIZEOF IN ARRAYS AND POINTERS                     \n");
    printf("====================================================\n\n");

    printf("  sizeof(arr)    : %zu bytes (Tamano total del arreglo / Total array size)\n", sizeof(arr));
    printf("  sizeof(arr+1)  : %zu bytes (Tamano de un puntero / Pointer size)\n", sizeof(arr + 1));
    printf("  sizeof(*arr)   : %zu bytes (Tamano del primer elemento / First element size)\n", sizeof(*arr));
    printf("  sizeof(ptr)    : %zu bytes (Tamano de la variable puntero / Pointer variable)\n\n", sizeof(ptr));

    printf("Recorrido con post-incremento *(ptr++):\n");
    for (int i = 0; i < 5; i++)
    {
        printf("  *(ptr++) = %d\n", *(ptr++));
    }

    return 0;
}

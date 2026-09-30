/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Paso de parámetros por referencia usando punteros: función swap().
 * EN: Pass-by-reference using pointers: swap() function implementation.
 * 
 * Embedded Context: En microcontroladores, pasar punteros ahorra espacio de pila
 * (stack) al evitar duplicar estructuras y variables grandes en memoria.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/* Función para intercambiar dos enteros en memoria */
/* Function to exchange two integers in memory */
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a = 10;
    int b = 20;

    printf("====================================================\n");
    printf("  PASO POR REFERENCIA (SWAP CON PUNTEROS)           \n");
    printf("  PASS-BY-REFERENCE (POINTER SWAP)                  \n");
    printf("====================================================\n\n");

    printf("  Valores iniciales : a = %d (&a=%p), b = %d (&b=%p)\n", a, (void*)&a, b, (void*)&b);

    /* Pasamos las direcciones de memoria de 'a' y 'b' */
    /* We pass memory addresses of 'a' and 'b' */
    swap(&a, &b);

    printf("  Valores tras swap : a = %d, b = %d\n", a, b);

    return 0;
}

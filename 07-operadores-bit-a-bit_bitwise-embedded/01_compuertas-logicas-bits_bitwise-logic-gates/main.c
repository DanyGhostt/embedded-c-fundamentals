/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Operaciones a nivel de bits (AND, OR, XOR, NOT, Shifts) para microcontroladores.
 * EN: Bitwise operations (AND, OR, XOR, NOT, Shifts) for microcontrollers.
 * 
 * Embedded Context: En sistemas embebidos, la manipulación de bits es fundamental
 * para configurar registros de periféricos, activar pines GPIO y aplicar máscaras.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void print_binary8(unsigned char val)
{
    for (int i = 7; i >= 0; i--)
    {
        printf("%c", (val & (1 << i)) ? '1' : '0');
        if (i == 4) printf(" ");
    }
}

int main(void)
{
    unsigned char i = 0b00001010; /* 10 en decimal */
    unsigned char j = 0b00010100; /* 20 en decimal */
    unsigned char k;

    printf("====================================================\n");
    printf("  MANIPULACION DE BITS EN EMBEDDED C (BITWISE)      \n");
    printf("  BITWISE MANIPULATION IN EMBEDDED C                \n");
    printf("====================================================\n\n");

    printf("  Operando i: %3d | Binario: ", i); print_binary8(i); printf("\n");
    printf("  Operando j: %3d | Binario: ", j); print_binary8(j); printf("\n\n");

    /* 1. Compuerta AND (&) */
    k = i & j;
    printf("  AND  (i & j) : %3d | Binario: ", k); print_binary8(k); printf("\n");

    /* 2. Compuerta OR (|) */
    k = i | j;
    printf("  OR   (i | j) : %3d | Binario: ", k); print_binary8(k); printf("\n");

    /* 3. Compuerta XOR (^) */
    k = i ^ j;
    printf("  XOR  (i ^ j) : %3d | Binario: ", k); print_binary8(k); printf("\n");

    /* 4. Corrimiento a la derecha (>>) */
    k = i >> 2;
    printf("  SHIFT RIGHT (i >> 2): %3d | Binario: ", k); print_binary8(k); printf("\n");

    /* 5. Corrimiento a la izquierda (<<) */
    k = j << 1;
    printf("  SHIFT LEFT  (j << 1): %3d | Binario: ", k); print_binary8(k); printf("\n");

    return 0;
}

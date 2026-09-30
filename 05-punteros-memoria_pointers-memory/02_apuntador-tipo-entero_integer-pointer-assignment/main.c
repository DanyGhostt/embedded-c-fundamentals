/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Punteros a enteros cortos (short int*), lectura de dirección y valor.
 * EN: Pointers to short integers (short int*), reading address and value.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short a = 5;
    short b = 10;
    short *ap = NULL;

    printf("====================================================\n");
    printf("  PUNTEROS A ENTEROS CORTOS (SHORT INT*)            \n");
    printf("  SHORT INTEGER POINTERS                            \n");
    printf("====================================================\n\n");

    /* Apuntar a variable 'a' / Point to variable 'a' */
    ap = &a;
    printf("Apuntando a 'a':\n");
    printf("  Direccion en 'ap': %p | Valor (*ap): %d\n", (void*)ap, *ap);

    /* Reasignar a variable 'b' / Reassign to variable 'b' */
    ap = &b;
    printf("\nReasignando 'ap' a 'b':\n");
    printf("  Direccion en 'ap': %p | Valor (*ap): %d\n", (void*)ap, *ap);

    return 0;
}

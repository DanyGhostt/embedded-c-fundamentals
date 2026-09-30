/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Operador de dirección (&) y operador de desreferenciación (*) en punteros.
 * EN: Address-of (&) and dereferencing (*) operators in pointers.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c = 'C';
    char *ap = NULL;

    printf("====================================================\n");
    printf("  PUNTEROS: DIRECCION (&) Y DESREFERENCIA (*)       \n");
    printf("  POINTERS: ADDRESS-OF (&) AND DEREFERENCE (*)      \n");
    printf("====================================================\n\n");

    /* Asignamos la dirección de memoria de 'c' al puntero 'ap' */
    /* Assign the memory address of 'c' to pointer 'ap' */
    ap = &c;

    printf("  Valor de 'c'               : %c\n", c);
    printf("  Direccion de 'c' (&c)      : %p\n", (void*)&c);
    printf("  Valor guardado en 'ap'     : %p\n", (void*)ap);
    printf("  Valor apuntado (*ap)       : %c\n", *ap);
    printf("  Direccion propia de 'ap'   : %p\n\n", (void*)&ap);

    /* Modificación de la variable original a través del puntero */
    /* Mutating original variable through dereferenced pointer */
    *ap = 'X';
    printf("Modificando *ap = 'X':\n");
    printf("  Nuevo valor de 'c': %c\n", c);

    return 0;
}

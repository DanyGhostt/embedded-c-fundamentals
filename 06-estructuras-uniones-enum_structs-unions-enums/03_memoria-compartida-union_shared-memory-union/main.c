/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Uniones en C (union): superposición física de variables en memoria.
 * EN: C Unions (union): physical memory overlapping of member variables.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

union PruebaUnion {
    int a;
    int b;
};

int main(void)
{
    union PruebaUnion u;

    printf("====================================================\n");
    printf("  UNIONES EN C: MEMORIA COMPARTIDA                  \n");
    printf("  C UNIONS: SHARED MEMORY SPACE                     \n");
    printf("====================================================\n\n");

    printf("  sizeof(union PruebaUnion): %zu bytes\n\n", sizeof(union PruebaUnion));

    /* Asignamos 'a' y verificamos cómo afecta a 'b' */
    u.a = 10;
    printf("Asignando u.a = 10:\n");
    printf("  u.a = %d | u.b = %d (Comparten misma celda / Share same memory)\n\n", u.a, u.b);

    u.b = 100;
    printf("Asignando u.b = 100:\n");
    printf("  u.a = %d | u.b = %d\n", u.a, u.b);

    return 0;
}

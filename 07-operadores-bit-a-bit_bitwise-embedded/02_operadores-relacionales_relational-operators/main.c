/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Operadores relacionales y de comparación en ANSI C (==, !=, >, <, >=, <=).
 * EN: Relational and comparison operators in ANSI C (==, !=, >, <, >=, <=).
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero1 = 2;
    int numero2 = 3;

    printf("====================================================\n");
    printf("  OPERADORES RELACIONALES EN C                      \n");
    printf("  RELATIONAL OPERATORS IN C                         \n");
    printf("====================================================\n\n");

    printf("  numero1 = %d, numero2 = %d\n\n", numero1, numero2);

    printf("  numero1 == numero2  : %s (%d)\n", (numero1 == numero2) ? "VERDADERO" : "FALSO", numero1 == numero2);
    printf("  numero1 != numero2  : %s (%d)\n", (numero1 != numero2) ? "VERDADERO" : "FALSO", numero1 != numero2);
    printf("  numero1 >  numero2  : %s (%d)\n", (numero1 >  numero2) ? "VERDADERO" : "FALSO", numero1 >  numero2);
    printf("  numero1 <  numero2  : %s (%d)\n", (numero1 <  numero2) ? "VERDADERO" : "FALSO", numero1 <  numero2);
    printf("  numero1 >= numero2  : %s (%d)\n", (numero1 >= numero2) ? "VERDADERO" : "FALSO", numero1 >= numero2);
    printf("  numero1 <= numero2  : %s (%d)\n", (numero1 <= numero2) ? "VERDADERO" : "FALSO", numero1 <= numero2);

    return 0;
}

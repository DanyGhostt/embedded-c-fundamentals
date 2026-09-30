/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Prototipado y definición de funciones con retorno de valores (cuadrado).
 * EN: Function prototyping and declaration with return values (square).
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/* Prototipo de función / Function prototype */
int cuadrado(int base);

int main(void)
{
    int numero;

    printf("====================================================\n");
    printf("  TABLA DE CUADRADOS CON FUNCIONES MODULARES        \n");
    printf("  TABLE OF SQUARES USING MODULAR FUNCTIONS          \n");
    printf("====================================================\n\n");

    for (numero = 1; numero <= 20; numero++)
    {
        printf("  El cuadrado de %2d es: %3d\n", numero, cuadrado(numero));
    }

    return 0;
}

/**
 * Calcula la potencia al cuadrado de un número entero.
 * Calculates the square power of an integer.
 */
int cuadrado(int base)
{
    return base * base;
}

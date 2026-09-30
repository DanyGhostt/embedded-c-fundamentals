/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Procedimientos 'void', paso de parámetros y alcance de variables (scope).
 * EN: 'void' procedures, parameter passing, and variable scopes.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/* Procedimiento void sin retorno / Void procedure */
void sumar_numeros(int a, int b, int *resultado_ptr);

int main(void)
{
    int num1, num2;
    int suma = 0;

    printf("====================================================\n");
    printf("  MODULARIDAD: PROCEDIMIENTOS Y RETORNO POR PUNTERO \n");
    printf("  MODULARITY: PROCEDURES AND POINTER RETURNS        \n");
    printf("====================================================\n\n");

    printf("Ingrese numero 1: ");
    if (scanf("%d", &num1) != 1) return 1;

    printf("Ingrese numero 2: ");
    if (scanf("%d", &num2) != 1) return 1;

    /* Llamada modular pasando la dirección de memoria de suma */
    /* Modular call passing memory address of suma */
    sumar_numeros(num1, num2, &suma);

    printf("\n[RESULTADO]\n");
    printf("  La suma de %d + %d = %d\n", num1, num2, suma);

    return 0;
}

void sumar_numeros(int a, int b, int *resultado_ptr)
{
    if (resultado_ptr != NULL)
    {
        *resultado_ptr = a + b;
    }
}

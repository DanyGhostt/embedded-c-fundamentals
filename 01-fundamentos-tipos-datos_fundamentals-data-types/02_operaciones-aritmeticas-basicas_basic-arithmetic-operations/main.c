/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Operaciones aritméticas fundamentales (suma, resta, multiplicación, división flotante).
 * EN: Fundamental arithmetic operations (addition, subtraction, multiplication, floating division).
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Declaración de operandos / Operand declaration */
    int i = 10;
    int j = 20;
    int suma, resta, multiplicacion;
    float division_flotante;

    printf("====================================================\n");
    printf("  OPERACIONES ARITMETICAS / ARITHMETIC OPERATIONS   \n");
    printf("====================================================\n\n");

    /* Cálculos / Computations */
    suma = i + j;
    resta = j - i;
    multiplicacion = i * j;
    
    /* Casteo explícito a float para evitar truncamiento entero */
    /* Explicit float cast to prevent integer truncation */
    division_flotante = (float)j / (float)i;

    printf("  Operando 1 (i): %d\n", i);
    printf("  Operando 2 (j): %d\n\n", j);
    printf("  Suma (i + j)           = %d\n", suma);
    printf("  Resta (j - i)          = %d\n", resta);
    printf("  Multiplicacion (i * j) = %d\n", multiplicacion);
    printf("  Division (j / i)       = %.2f\n", division_flotante);

    return 0;
}

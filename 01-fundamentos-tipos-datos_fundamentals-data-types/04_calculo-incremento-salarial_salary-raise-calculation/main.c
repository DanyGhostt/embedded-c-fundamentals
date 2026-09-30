/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Cálculo de incremento salarial del 15% con validación de entrada.
 * EN: 15% salary increase calculation with input validation.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float salario_anterior = 0.0f;
    float salario_nuevo = 0.0f;
    const float porcentaje_aumento = 0.15f; /* 15% */

    printf("====================================================\n");
    printf("  CALCULO DE AUMENTO SALARIAL (15%%)                 \n");
    printf("  SALARY INCREASE CALCULATION (15%%)                \n");
    printf("====================================================\n\n");

    printf("Ingresa tu salario actual: $");
    if (scanf("%f", &salario_anterior) != 1 || salario_anterior <= 0)
    {
        printf("Error: Salario ingresado no valido / Invalid salary.\n");
        return 1;
    }

    salario_nuevo = salario_anterior + (salario_anterior * porcentaje_aumento);

    printf("\n[RESULTADOS / RESULTS]\n");
    printf("  Salario anterior : $%.2f\n", salario_anterior);
    printf("  Incremento (15%%) : $%.2f\n", salario_anterior * porcentaje_aumento);
    printf("  Salario final    : $%.2f\n", salario_nuevo);

    return 0;
}

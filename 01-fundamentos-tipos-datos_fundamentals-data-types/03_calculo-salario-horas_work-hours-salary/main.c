/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Cálculo de salario semanal basado en horas laboradas y tarifa por hora.
 * EN: Weekly salary calculation based on hours worked and hourly rate.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int horas_trabajadas;
    float tarifa_por_hora = 50.0f; /* Tarifa base / Base rate */
    float sueldo_total;

    printf("====================================================\n");
    printf("  CALCULADORA DE SALARIO / SALARY CALCULATOR        \n");
    printf("====================================================\n\n");

    printf("Ingrese la cantidad de horas que trabajo esta semana: ");
    if (scanf("%d", &horas_trabajadas) != 1 || horas_trabajadas < 0)
    {
        printf("Error: Entrada invalida / Invalid input.\n");
        return 1;
    }

    sueldo_total = (float)horas_trabajadas * tarifa_por_hora;

    printf("\n[RESUMEN / SUMMARY]\n");
    printf("  Horas trabajadas: %d hrs\n", horas_trabajadas);
    printf("  Tarifa por hora : $%.2f\n", tarifa_por_hora);
    printf("  Sueldo total    : $%.2f MXN\n", sueldo_total);

    return 0;
}

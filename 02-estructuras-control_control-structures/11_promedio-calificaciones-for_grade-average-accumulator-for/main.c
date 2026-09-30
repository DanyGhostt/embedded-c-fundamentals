/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Entrada interactiva de calificaciones, acumulación y cálculo de promedio.
 * EN: Interactive grade input, accumulation, and average calculation.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int num_calificaciones = 5;
    float calificacion = 0.0f;
    float suma = 0.0f;
    float promedio = 0.0f;

    printf("====================================================\n");
    printf("  ACUMULADOR DE CALIFICACIONES Y PROMEDIO           \n");
    printf("  GRADE ACCUMULATOR & AVERAGE CALCULATION           \n");
    printf("====================================================\n\n");

    for (i = 1; i <= num_calificaciones; i++)
    {
        printf("Ingrese calificacion [%d/%d]: ", i, num_calificaciones);
        if (scanf("%f", &calificacion) != 1)
        {
            printf("Entrada invalida.\n");
            return 1;
        }
        suma += calificacion;
    }

    promedio = suma / (float)num_calificaciones;

    printf("\n[RESULTADOS / RESULTS]\n");
    printf("  Suma acumulada : %.2f\n", suma);
    printf("  Promedio final : %.2f\n", promedio);
    printf("  Estado         : %s\n", (promedio >= 6.0f) ? "APROBADO / PASSED" : "REPROBADO / FAILED");

    return 0;
}

/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Calculadora de promedio de 3 calificaciones con evaluación de aprobación.
 * EN: 3-Grade average calculator with pass/fail threshold evaluation.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float nota1 = 0.0f, nota2 = 0.0f, nota3 = 0.0f;
    float promedio = 0.0f;

    printf("====================================================\n");
    printf("  SISTEMA EVALUADOR DE CALIFICACIONES               \n");
    printf("  STUDENT GRADE EVALUATION SYSTEM                   \n");
    printf("====================================================\n\n");

    printf("Ingrese Nota 1 (0 a 10): ");
    if (scanf("%f", &nota1) != 1) return 1;

    printf("Ingrese Nota 2 (0 a 10): ");
    if (scanf("%f", &nota2) != 1) return 1;

    printf("Ingrese Nota 3 (0 a 10): ");
    if (scanf("%f", &nota3) != 1) return 1;

    promedio = (nota1 + nota2 + nota3) / 3.0f;

    printf("\n====================================================\n");
    printf("  BOLETA DE CALIFICACIONES / GRADE REPORT           \n");
    printf("====================================================\n");
    printf("  Examen Parcial 1 : %5.2f\n", nota1);
    printf("  Examen Parcial 2 : %5.2f\n", nota2);
    printf("  Examen Parcial 3 : %5.2f\n", nota3);
    printf("  ----------------------------------\n");
    printf("  Promedio Final   : %5.2f\n", promedio);
    printf("  Veredicto        : %s\n", (promedio >= 6.0f) ? "APROBADO (PASSED)" : "REPROBADO (FAILED)");
    printf("====================================================\n");

    return 0;
}

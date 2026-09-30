/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Mapeo de números a días de la semana mediante sentencia switch-case.
 * EN: Mapping numbers to weekdays using a switch-case statement.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int dia;

    printf("====================================================\n");
    printf("  DIAS DE LA SEMANA (SWITCH-CASE)                   \n");
    printf("  WEEKDAYS SELECTOR (SWITCH-CASE)                   \n");
    printf("====================================================\n\n");

    printf("Introduzca un numero del 1 al 7: ");
    if (scanf("%d", &dia) != 1)
    {
        printf("Entrada invalida / Invalid input.\n");
        return 1;
    }

    switch (dia)
    {
        case 1:
            printf("Dia %d: Lunes / Monday\n", dia);
            break;
        case 2:
            printf("Dia %d: Martes / Tuesday\n", dia);
            break;
        case 3:
            printf("Dia %d: Miercoles / Wednesday\n", dia);
            break;
        case 4:
            printf("Dia %d: Jueves / Thursday\n", dia);
            break;
        case 5:
            printf("Dia %d: Viernes / Friday\n", dia);
            break;
        case 6:
            printf("Dia %d: Sabado / Saturday\n", dia);
            break;
        case 7:
            printf("Dia %d: Domingo / Sunday\n", dia);
            break;
        default:
            printf("Error: No existe el dia %d. Debe ser del 1 al 7.\n", dia);
            break;
    }

    return 0;
}

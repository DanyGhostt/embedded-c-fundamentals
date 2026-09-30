/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Enumeraciones de días de la semana y aritmética de constantes enumeradas.
 * EN: Weekday enumerations and enum constant arithmetic.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

enum Weekday {
    Sunday = 0,
    Monday,     /* 1 */
    Tuesday,    /* 2 */
    Wednesday,  /* 3 */
    Thursday,   /* 4 */
    Friday,     /* 5 */
    Saturday    /* 6 */
};

int main(void)
{
    enum Weekday hoy = Friday;

    printf("====================================================\n");
    printf("  ENUMERACIONES: DIAS DE LA SEMANA                  \n");
    printf("  ENUMERATIONS: DAYS OF THE WEEK                    \n");
    printf("====================================================\n\n");

    printf("  Sunday    : %d\n", Sunday);
    printf("  Monday    : %d\n", Monday);
    printf("  Tuesday   : %d\n", Tuesday);
    printf("  Wednesday : %d\n", Wednesday);
    printf("  Thursday  : %d\n", Thursday);
    printf("  Friday    : %d\n", Friday);
    printf("  Saturday  : %d\n\n", Saturday);

    printf("  Hoy es Friday (Valor: %d)\n", hoy);
    printf("  Siguiente dia (Friday + 1): %d (Saturday)\n", hoy + 1);

    return 0;
}

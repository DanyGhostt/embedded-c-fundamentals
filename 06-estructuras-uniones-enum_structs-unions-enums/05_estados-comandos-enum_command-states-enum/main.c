/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Máquina de estados y códigos de comando con enumeraciones explícitas (enum).
 * EN: State machine and command codes using explicit enumerations (enum).
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

enum Comando {
    ENCENDER = 0,
    APAGAR   = 1,
    ABRIR    = 2,
    CERRAR   = 50  /* Valor asignado explicitamente / Explicit value */
};

int main(void)
{
    enum Comando cmd;

    printf("====================================================\n");
    printf("  ENUMERACIONES Y CODIGOS DE COMANDO (ENUM)         \n");
    printf("  COMMAND CODES & STATE MACHINES (ENUM)             \n");
    printf("====================================================\n\n");

    printf("Valores definidos en enum:\n");
    printf("  ENCENDER : %d\n", ENCENDER);
    printf("  APAGAR   : %d\n", APAGAR);
    printf("  ABRIR    : %d\n", ABRIR);
    printf("  CERRAR   : %d\n\n", CERRAR);

    cmd = CERRAR;
    if (cmd == CERRAR)
    {
        printf("-> Ejecutando accion para comando CERRAR (Code %d)\n", cmd);
    }

    return 0;
}

/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Estructuras con campos de cadenas y arreglos internos para nómina laboral.
 * EN: Structs with string fields and internal arrays for worker payroll.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIAS_QUINCENA 5 /* Reducido para demostración / Reduced for demo */

struct Trabajador {
    char nombre[32];
    char num_id[16];
    int  dias_pagados[DIAS_QUINCENA];
};

int main(void)
{
    struct Trabajador emp;
    int n, suma_sueldos = 0;

    printf("====================================================\n");
    printf("  REGISTRO DE TRABAJADOR Y NOMINA (STRUCT)          \n");
    printf("  WORKER PAYROLL RECORD (STRUCT)                    \n");
    printf("====================================================\n\n");

    /* Datos simulados o interactivos */
    strncpy(emp.nombre, "Juan Daniel Perez", sizeof(emp.nombre) - 1);
    strncpy(emp.num_id, "EMP-2026-99", sizeof(emp.num_id) - 1);

    int pagos_diarios[5] = {350, 400, 350, 500, 450};
    for (n = 0; n < DIAS_QUINCENA; n++)
    {
        emp.dias_pagados[n] = pagos_diarios[n];
        suma_sueldos += emp.dias_pagados[n];
    }

    printf("[DATOS DEL TRABAJADOR / WORKER DETAILS]\n");
    printf("  Nombre : %s\n", emp.nombre);
    printf("  ID     : %s\n\n", emp.num_id);

    printf("[HISTORIAL DE PAGOS / PAYMENT HISTORY]\n");
    for (n = 0; n < DIAS_QUINCENA; n++)
    {
        printf("  Dia %d: $%d\n", n + 1, emp.dias_pagados[n]);
    }

    printf("\n  Sueldo Total Quincenal: $%d MXN\n", suma_sueldos);

    return 0;
}

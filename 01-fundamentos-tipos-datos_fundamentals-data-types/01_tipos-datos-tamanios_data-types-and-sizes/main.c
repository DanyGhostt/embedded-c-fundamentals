/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Demostración de tipos de datos primitivos, variables y tamaños en memoria (sizeof).
 * EN: Demonstration of primitive data types, variables, and memory sizes (sizeof).
 * 
 * Embedded Context: En sistemas embebidos, conocer el tamaño exacto en bytes de cada tipo 
 * de dato es crítico para optimizar el uso de memoria RAM y Flash en microcontroladores.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/* Variables globales inicializadas / Initialized global variables */
int   entero_a = 10;
int   entero_b = 12;
float flotante_c = 3.14159f;
double doble_d = 2.718281828459;
char  caracter_e = '@';
unsigned char byte_registro = 0xAA;

int main(void)
{
    printf("====================================================\n");
    printf("  FUNDAMENTOS DE TIPOS DE DATOS EN ANSI C           \n");
    printf("  DATA TYPES & MEMORY SIZES IN ANSI C               \n");
    printf("====================================================\n\n");

    /* 1. Impresión de valores / Printing values */
    printf("[VALORES / VALUES]\n");
    printf("  int (a, b)      : %d, %d\n", entero_a, entero_b);
    printf("  float (c)       : %.5f\n", flotante_c);
    printf("  double (d)      : %.12lf\n", doble_d);
    printf("  char (e)        : %c (ASCII: %d, Hex: 0x%02X)\n", caracter_e, caracter_e, caracter_e);
    printf("  unsigned char   : %u (Hex: 0x%02X)\n\n", byte_registro, byte_registro);

    /* 2. Evaluación de tamaños en bytes / Evaluation of sizes in bytes */
    printf("[TAMANOS EN MEMORIA / MEMORY SIZES (sizeof)]\n");
    printf("  sizeof(char)          : %zu byte(s)\n", sizeof(char));
    printf("  sizeof(short)         : %zu byte(s)\n", sizeof(short));
    printf("  sizeof(int)           : %zu byte(s)\n", sizeof(int));
    printf("  sizeof(long)          : %zu byte(s)\n", sizeof(long));
    printf("  sizeof(long long)     : %zu byte(s)\n", sizeof(long long));
    printf("  sizeof(float)         : %zu byte(s)\n", sizeof(float));
    printf("  sizeof(double)        : %zu byte(s)\n", sizeof(double));
    printf("  sizeof(void*)         : %zu byte(s) (Puntero de arquitectura / Arch pointer)\n", sizeof(void*));

    printf("\nFin del programa / Program finished.\n");
    return 0;
}

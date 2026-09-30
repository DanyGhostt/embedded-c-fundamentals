/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Validación lógica binaria, banderas condicionales y operadores relacionales.
 * EN: Binary logic verification, conditional flags, and relational operators.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int valor_usuario;
    int flag = 0;

    printf("====================================================\n");
    printf("  EVALUACION LOGICA BINARIA                         \n");
    printf("  BINARY LOGIC VALIDATION                           \n");
    printf("====================================================\n\n");

    printf("Introduzca 1 (Verdadero/Activo) o 0 (Falso/Inactivo): ");
    if (scanf("%d", &valor_usuario) != 1)
    {
        printf("Error de entrada.\n");
        return 1;
    }

    if (valor_usuario == 1)
    {
        flag = 1;
        printf("-> Estado recibido: ACTIVO / TRUE (Flag = %d)\n", flag);
    }
    else if (valor_usuario == 0)
    {
        flag = 0;
        printf("-> Estado recibido: INACTIVO / FALSE (Flag = %d)\n", flag);
    }
    else
    {
        printf("-> Advertencia: Valor fuera de rango binario (%d)\n", valor_usuario);
    }

    return 0;
}

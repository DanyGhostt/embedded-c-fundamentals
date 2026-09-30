/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Función para cálculo de potencias cúbicas con tipo long para evitar overflow.
 * EN: Function for cube power calculation using long type to prevent overflow.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/* Prototipo / Prototype */
long cuboDe(int numero);

int main(void)
{
    int numero;
    long resultado;

    printf("====================================================\n");
    printf("  CALCULO DEL CUBO DE UN NUMERO                     \n");
    printf("  CUBE CALCULATION OF A NUMBER                      \n");
    printf("====================================================\n\n");

    printf("Ingresa un numero entero: ");
    if (scanf("%d", &numero) != 1)
    {
        printf("Entrada no valida.\n");
        return 1;
    }

    resultado = cuboDe(numero);
    printf("\n[RESULTADO]\n");
    printf("  El cubo de %d (%d^3) es: %ld\n", numero, numero, resultado);

    return 0;
}

long cuboDe(int numero)
{
    return (long)numero * (long)numero * (long)numero;
}

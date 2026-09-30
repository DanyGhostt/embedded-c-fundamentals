/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Estructura condicional if-else para cálculo de descuentos según tipo de cliente.
 * EN: Conditional if-else branching for discount calculation by customer type.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    float monto_compra = 0.0f;
    char tipo_cliente;
    float total_pagar = 0.0f;
    float descuento = 0.0f;

    printf("====================================================\n");
    printf("  SISTEMA DE DESCUENTOS POR CATEGORIA               \n");
    printf("  CUSTOMER DISCOUNT SYSTEM                          \n");
    printf("====================================================\n\n");

    printf("Ingrese el monto total de la compra: $");
    if (scanf("%f", &monto_compra) != 1 || monto_compra <= 0)
    {
        printf("Monto invalido / Invalid purchase amount.\n");
        return 1;
    }

    printf("Ingrese tipo de cliente (A, B, C o N=Normal): ");
    scanf(" %c", &tipo_cliente);
    tipo_cliente = (char)toupper((unsigned char)tipo_cliente);

    if (tipo_cliente == 'A')
    {
        descuento = 0.10f; /* 10% Descuento */
        total_pagar = monto_compra * (1.0f - descuento);
        printf("\n[Cliente Tipo A] Descuento: 10%% | Total a pagar: $%.2f\n", total_pagar);
    }
    else if (tipo_cliente == 'B')
    {
        descuento = 0.15f; /* 15% Descuento */
        total_pagar = monto_compra * (1.0f - descuento);
        printf("\n[Cliente Tipo B] Descuento: 15%% | Total a pagar: $%.2f\n", total_pagar);
    }
    else if (tipo_cliente == 'C')
    {
        descuento = 0.20f; /* 20% Descuento */
        total_pagar = monto_compra * (1.0f - descuento);
        printf("\n[Cliente Tipo C] Descuento: 20%% | Total a pagar: $%.2f\n", total_pagar);
    }
    else
    {
        descuento = 0.0f;
        total_pagar = monto_compra;
        printf("\n[Cliente Estandar] Sin descuento | Total a pagar: $%.2f\n", total_pagar);
    }

    return 0;
}

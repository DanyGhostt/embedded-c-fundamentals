/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Enumeración de palos de baraja con valores secuenciales implícitos.
 * EN: Card suit enumeration with implicit sequential integer values.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

enum Suit {
    CLUB = 0,    /* Tréboles */
    DIAMONDS,    /* Diamantes (1) */
    HEARTS,      /* Corazones (2) */
    SPADES       /* Picas (3) */
};

int main(void)
{
    enum Suit carta = HEARTS;

    printf("====================================================\n");
    printf("  ENUMERACION: PALOS DE BARAJA (CARD SUITS)         \n");
    printf("====================================================\n\n");

    printf("  CLUB     : %d\n", CLUB);
    printf("  DIAMONDS : %d\n", DIAMONDS);
    printf("  HEARTS   : %d\n", HEARTS);
    printf("  SPADES   : %d\n\n", SPADES);

    printf("  Palo seleccionado : %d (HEARTS)\n", carta);

    return 0;
}

/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Traductor de cadenas a formato Leet Speak (1337) usando tablas de búsqueda.
 * EN: String to Leet Speak (1337) translator using constant lookup tables.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Tabla de conversión para A-Z / Lookup table for A-Z */
const char *leet_table[26] = {
    "4",  /* A */
    "8",  /* B */
    "(",  /* C */
    "[)", /* D */
    "3",  /* E */
    "|=", /* F */
    "6",  /* G */
    "#",  /* H */
    "1",  /* I */
    "_|", /* J */
    "|<", /* K */
    "|_", /* L */
    "/\\/\\", /* M */
    "|/|", /* N */
    "0",  /* O */
    "|D", /* P */
    "(,)",/* Q */
    "|2", /* R */
    "5",  /* S */
    "7",  /* T */
    "|_|",/* U */
    "\\/", /* V */
    "\\/\\/", /* W */
    "><", /* X */
    "`/", /* Y */
    "2"   /* Z */
};

int main(void)
{
    char mensaje[] = "EMBEDDED C PROGRAMMING IN CODEBLOCKS";
    int i;

    printf("====================================================\n");
    printf("  TRADUCTOR LEET SPEAK (1337)                       \n");
    printf("  LEET SPEAK STRING TRANSLATOR (1337)               \n");
    printf("====================================================\n\n");

    printf("Mensaje original / Original message:\n  %s\n\n", mensaje);
    printf("Traduccion Leet / Leet Translation:\n  ");

    for (i = 0; mensaje[i] != '\0'; i++)
    {
        char c = (char)toupper((unsigned char)mensaje[i]);
        if (c >= 'A' && c <= 'Z')
        {
            printf("%s", leet_table[c - 'A']);
        }
        else
        {
            printf("%c", mensaje[i]);
        }
    }
    printf("\n");

    return 0;
}

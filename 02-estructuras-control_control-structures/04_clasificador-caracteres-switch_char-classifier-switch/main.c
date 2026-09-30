/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Clasificación de caracteres (vocales, consonantes, números) con switch-case.
 * EN: Character classification (vowels, consonants, digits) using switch-case.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char c;

    printf("====================================================\n");
    printf("  CLASIFICADOR DE CARACTERES (SWITCH)               \n");
    printf("  CHARACTER CLASSIFIER (SWITCH)                     \n");
    printf("====================================================\n\n");

    printf("Introduzca un caracter: ");
    if (scanf(" %c", &c) != 1)
    {
        return 1;
    }

    printf("\nEvaluando caracter '%c' (ASCII %d):\n", c, (int)c);

    switch (c)
    {
        /* Vocales mayúsculas y minúsculas agrupadas */
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            printf("-> Es una VOCAL / It is a VOWEL.\n");
            break;

        /* Dígitos numéricos */
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            printf("-> Es un DIGITO NUMERICO / It is a DIGIT.\n");
            break;

        default:
            if (isalpha((unsigned char)c))
            {
                printf("-> Es una CONSONANTE / It is a CONSONANT.\n");
            }
            else
            {
                printf("-> Es un CARACTER ESPECIAL O SIMBOLO / It is a SPECIAL CHARACTER.\n");
            }
            break;
    }

    return 0;
}

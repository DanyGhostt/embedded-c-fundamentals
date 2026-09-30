/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy) [Bonus C++]
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Introducción a flujos de entrada y salida (cin, cout) y tipos de datos en C++.
 * EN: Introduction to I/O streams (cin, cout) and basic data types in C++.
 * ============================================================================
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "====================================================" << endl;
    cout << "  FUNDAMENTOS DE FLUJOS I/O EN C++ (CIN / COUT)     " << endl;
    cout << "  C++ I/O STREAMS FUNDAMENTALS                      " << endl;
    cout << "====================================================" << endl << endl;

    int numero1 = 0;
    int numero2 = 0;
    int suma = 0;

    cout << "Ingresa el primer numero entero: ";
    if (!(cin >> numero1)) return 1;

    cout << "Ingresa el segundo numero entero: ";
    if (!(cin >> numero2)) return 1;

    suma = numero1 + numero2;

    cout << endl << "[RESULTADO]" << endl;
    cout << "  La suma de " << numero1 << " + " << numero2 << " es: " << suma << endl;

    return 0;
}

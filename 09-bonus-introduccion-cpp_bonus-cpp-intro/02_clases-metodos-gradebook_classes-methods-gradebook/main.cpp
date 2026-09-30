/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy) [Bonus C++]
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Programación Orientada a Objetos en C++: clase GradeBook, encapsulamiento y métodos const.
 * EN: Object-Oriented Programming in C++: GradeBook class, encapsulation, and const methods.
 * ============================================================================
 */

#include <iostream>
#include <string>

using namespace std;

class GradeBook {
private:
    string courseName;

public:
    /* Constructor */
    explicit GradeBook(string name) : courseName(name) {}

    /* Setter */
    void setCourseName(string name) {
        courseName = name;
    }

    /* Getter */
    string getCourseName() const {
        return courseName;
    }

    /* Método para desplegar bienvenida */
    void displayMessage() const {
        cout << "Bienvenido al libro de calificaciones de:" << endl;
        cout << "  >>> " << getCourseName() << " <<<" << endl;
    }
};

int main()
{
    cout << "====================================================" << endl;
    cout << "  PROGRAMACION ORIENTADA A OBJETOS EN C++           " << endl;
    cout << "  OBJECT-ORIENTED PROGRAMMING IN C++ (GRADEBOOK)    " << endl;
    cout << "====================================================" << endl << endl;

    GradeBook myGradeBook("ANSI C & C++ for Embedded Systems");
    myGradeBook.displayMessage();

    cout << endl << "Actualizando nombre de curso..." << endl;
    myGradeBook.setCourseName("Embedded Systems Architecture - 2026");
    myGradeBook.displayMessage();

    return 0;
}

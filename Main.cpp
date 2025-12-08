#include <iostream>
#include "Asistencia.h"

int main() {
    Personas personas;
    Asistencia sistema(&personas);

    std::string matricula;
    std::cout << "Ingrese la matricula del alumno: ";
    std::cin >> matricula;

    sistema.consultarAlumno(matricula);

    return 0;
}

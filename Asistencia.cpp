#include <iostream>
#include "Asistencia.h"

Asistencia::Asistencia(Personas* p)
    : Fisica(p), Matematicas(p), Programacion(p), personasPtr(p) {}

/*Ahora usamos personasPtr en lugar de "personas" 
(porque por la ambigüedad me marcaba errores)*/
void Asistencia::consultarAlumno(const std::string& matricula) {
    std::string nombre = personasPtr->obtenerNombreAlumno(matricula);

    if (nombre == "Alumno no encontrado") {
        std::cout << "La matricula no existe.\n";
        return;
    }

    int fFisica = Fisica::obtenerFaltas(matricula);
    int fMate = Matematicas::obtenerFaltas(matricula);
    int fProg = Programacion::obtenerFaltas(matricula);

    std::cout << "\n--- INFORMACION DEL ALUMNO ---\n";
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Matricula: " << matricula << "\n\n";

    std::cout << "Materia: Fisica\n";
    std::cout << "Profesor: " << Fisica::obtenerProfesor() << "\n";
    std::cout << "Faltas: " << fFisica << "\n\n";

    std::cout << "Materia: Matematicas\n";
    std::cout << "Profesor: " << Matematicas::obtenerProfesor() << "\n";
    std::cout << "Faltas: " << fMate << "\n\n";

    std::cout << "Materia: Programacion\n";
    std::cout << "Profesor: " << Programacion::obtenerProfesor() << "\n";
    std::cout << "Faltas: " << fProg << "\n\n";

    int total = fFisica + fMate + fProg;
    std::cout << "TOTAL DE FALTAS: " << total << "\n\n";
}
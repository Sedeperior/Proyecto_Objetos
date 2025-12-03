#include "Materia.h"
#include <iostream>
#include <iomanip>

Materia::Materia(const std::string& nombre) : Curso(nombre) {}

void Materia::inscribirAlumno(const std::string& matricula, float calificacion) {
    if (calificacion < 0.0f) calificacion = 0.0f;
    if (calificacion > 100.0f) calificacion = 100.0f;
    calificaciones[matricula] = calificacion;
}

bool Materia::tieneAlumno(const std::string& matricula) const {
    return calificaciones.find(matricula) != calificaciones.end();
}

float Materia::getCalificacion(const std::string& matricula) const {
    auto it = calificaciones.find(matricula);
    if (it == calificaciones.end()) return -1.0f;
    return it->second;
}

void Materia::mostrarDatosAlumno(const std::string& matricula) const {
    auto it = calificaciones.find(matricula);
    if (it == calificaciones.end()) {
        std::cout << "  No inscrito en " << nombre << "\n";
    } else {
        std::cout << "  " << nombre << " - Calificacion: " << std::fixed << std::setprecision(1) << it->second << "\n";
    }
}

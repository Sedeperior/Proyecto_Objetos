#include "Curso.h"

Curso::Curso(const std::string& nombre) : nombre(nombre), calificacionFinal(0.0f) {}

Curso::~Curso() = default;

void Curso::setCalificacionFinal(float cal) {
    calificacionFinal = cal;
}

float Curso::getCalificacionFinal() const {
    return calificacionFinal;
}

std::string Curso::getNombre() const {
    return nombre;
}

std::unique_ptr<Curso> Curso::clone() const {
    return std::make_unique<Curso>(nombre);
}

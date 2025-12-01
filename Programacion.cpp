#include "Programacion.h"

Programacion::Programacion() : Curso("Programacion") {}

std::unique_ptr<Curso> Programacion::clone() const {
    auto copia = std::make_unique<Programacion>();
    copia->setCalificacionFinal(this->getCalificacionFinal());
    return copia;
}

#include "Matematicas.h"

Matematicas::Matematicas() : Curso("Matematicas") {}

std::unique_ptr<Curso> Matematicas::clone() const {
    auto copia = std::make_unique<Matematicas>();
    copia->setCalificacionFinal(this->getCalificacionFinal());
    return copia;
}

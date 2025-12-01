#include "Fisica.h"

Fisica::Fisica() : Curso("Fisica") {}

std::unique_ptr<Curso> Fisica::clone() const {
    auto copia = std::make_unique<Fisica>();
    copia->setCalificacionFinal(this->getCalificacionFinal());
    return copia;
}

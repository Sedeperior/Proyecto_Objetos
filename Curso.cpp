#include "Curso.h"

Curso::Curso(const std::string& nombre) : nombre(nombre) {}
Curso::~Curso() = default;
std::string Curso::getNombre() const { return nombre; }

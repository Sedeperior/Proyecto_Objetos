#include "Padre.h"

Padre::Padre(const std::string& nombre) : nombre(nombre) {}
std::string Padre::getNombre() const { return nombre; }

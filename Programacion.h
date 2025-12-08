#ifndef PROGRAMACION_H
#define PROGRAMACION_H

#include <string>
#include "Personas.h"

class Programacion {
protected:
    Personas* personas;

    static const int NUM_REGISTROS = 4;
    std::string matriculas[NUM_REGISTROS];
    int faltas[NUM_REGISTROS];

public:
    Programacion(Personas* p);

    int obtenerFaltas(const std::string& matricula) const;
    std::string obtenerProfesor() const;
    std::string obtenerMateria() const { return "Programacion"; }
};

#endif

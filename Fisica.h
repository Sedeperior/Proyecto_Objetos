#ifndef FISICA_H
#define FISICA_H

#include <string>
#include "Personas.h"

class Fisica {
protected:
    Personas* personas;

    static const int NUM_REGISTROS = 4;
    std::string matriculas[NUM_REGISTROS];
    int faltas[NUM_REGISTROS];

public:
    Fisica(Personas* p);

    int obtenerFaltas(const std::string& matricula) const;
    std::string obtenerProfesor() const;
    std::string obtenerMateria() const { return "Fisica"; }
};

#endif

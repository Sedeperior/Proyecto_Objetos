#ifndef ASISTENCIA_H
#define ASISTENCIA_H

#include "Fisica.h"
#include "Matematicas.h"
#include "Programacion.h"
#include "Personas.h"

//Asistencia es hija de las tres materias
class Asistencia : public Fisica, public Matematicas, public Programacion {
private:
    // Puntero propio para referirse sin ambigüedad a Personas
    Personas* personasPtr;

public:
    Asistencia(Personas* p);

    void consultarAlumno(const std::string& matricula);
};

#endif

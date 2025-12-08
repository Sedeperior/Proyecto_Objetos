#ifndef PERSONAS_H
#define PERSONAS_H

#include <string>
//Personas contendrá los datos de las personas involucradas
class Personas {
private:
    static const int NUM_ALUMNOS = 4;
    static const int NUM_PROFESORES = 3;

    std::string nombresAlumnos[NUM_ALUMNOS];
    std::string matriculasAlumnos[NUM_ALUMNOS];

    std::string nombresProfesores[NUM_PROFESORES];
    std::string materiasProfesores[NUM_PROFESORES];

public:
    Personas();

    std::string obtenerNombreAlumno(const std::string& matricula) const;
    std::string obtenerProfesor(const std::string& materia) const;
};

#endif

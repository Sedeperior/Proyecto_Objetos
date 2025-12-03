#pragma once
#include "Curso.h"
#include <string>
#include <unordered_map>

class Materia : public Curso {
public:
    explicit Materia(const std::string& nombre);
    // inscribir con calificacion 
    void inscribirAlumno(const std::string& matricula, float calificacion);
    bool tieneAlumno(const std::string& matricula) const;
    // devuelve -1 si no existe
    float getCalificacion(const std::string& matricula) const;
    // mostrar calificacion de un alumno (si existe)
    void mostrarDatosAlumno(const std::string& matricula) const;

private:
    // clave = matricula, valor = calificacion
    std::unordered_map<std::string, float> calificaciones;
};

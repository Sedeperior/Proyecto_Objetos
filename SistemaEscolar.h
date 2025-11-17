#ifndef SISTEMAESCOLAR_H
#define SISTEMAESCOLAR_H

#include <vector>
#include <string>
#include "Entidades.h" 

class Curso {
private:
    std::string nombreCurso;
    std::vector<Alumno> alumnos;

public:
    Curso(std::string nombreCurso);
    std::string getNombreCurso() const { return nombreCurso; }
    std::vector<Alumno> getAlumnos() const { return alumnos; }
    void setNombreCurso(const std::string& nuevoNombre) { nombreCurso = nuevoNombre; }
    void agregarAlumno(const Alumno& alumno);
    void mostrarAlumnos() const;
};

class Escuela {
private:
    std::string nombreEscuela;
    std::vector<Curso> cursos;

public:
    Escuela(std::string nombreEscuela);
    std::string getNombreEscuela() const { return nombreEscuela; }
    std::vector<Curso> getCursos() const { return cursos; }
    void setNombreEscuela(const std::string& nuevoNombre) { nombreEscuela = nuevoNombre; }
    void agregarCurso(const Curso& curso);
    void mostrarCursos() const;
};

#endif // SISTEMAESCOLAR_H
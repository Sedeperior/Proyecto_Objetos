#include "SistemaEscolar.h"
#include <iostream>

// Definicion de Curso
Curso::Curso(std::string nombreCurso) 
    : nombreCurso(nombreCurso) {}

void Curso::agregarAlumno(const Alumno& alumno) {
    alumnos.push_back(alumno);
}

void Curso::mostrarAlumnos() const {
    std::cout << "--- Curso: " << nombreCurso << " ---" << std::endl;
    if (alumnos.empty()) {
        std::cout << "No hay alumnos inscritos." << std::endl;
    } else {
        for (const auto& a : alumnos) {
            a.mostrar(); 
        }
    }
}

// Definicion de Escuela
Escuela::Escuela(std::string nombreEscuela) 
    : nombreEscuela(nombreEscuela) {}

void Escuela::agregarCurso(const Curso& curso) {
    cursos.push_back(curso);
}

void Escuela::mostrarCursos() const {
    std::cout << "\n=============================================" << std::endl;
    std::cout << "Escuela: " << nombreEscuela << std::endl;
    std::cout << "=============================================" << std::endl;
    if (cursos.empty()) {
        std::cout << "No hay cursos registrados." << std::endl;
    } else {
        for (const auto& c : cursos) {
            c.mostrarAlumnos(); 
            std::cout << "---------------------------------------------\n";
        }
    }
}
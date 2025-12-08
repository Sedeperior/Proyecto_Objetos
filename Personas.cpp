#include "Personas.h"

Personas::Personas() {
    // Alumnos, nombre y matrícula
    nombresAlumnos[0] = "Sergio Perez";     matriculasAlumnos[0] = "A001";
    nombresAlumnos[1] = "Gina Gon";         matriculasAlumnos[1] = "A002";
    nombresAlumnos[2] = "Alfredo Linguini"; matriculasAlumnos[2] = "A003";
    nombresAlumnos[3] = "Tessa Borleo";     matriculasAlumnos[3] = "A004";

    // Profesores, con su materia correspondiente
    nombresProfesores[0] = "Gonzalo Gonzales"; materiasProfesores[0] = "Fisica";
    nombresProfesores[1] = "Ruby Estrella";    materiasProfesores[1] = "Matematicas";
    nombresProfesores[2] = "Miguel Erickson";  materiasProfesores[2] = "Programacion";
}

//En caso de no encontrar los datos ingresados

std::string Personas::obtenerNombreAlumno(const std::string& matricula) const {
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        if (matriculasAlumnos[i] == matricula)
            return nombresAlumnos[i];
    }
    return "Alumno no encontrado";
}

std::string Personas::obtenerProfesor(const std::string& materia) const {
    for (int i = 0; i < NUM_PROFESORES; i++) {
        if (materiasProfesores[i] == materia)
            return nombresProfesores[i];
    }
    return "Profesor no asignado";
}

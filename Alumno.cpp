#include "Alumno.h"
#include "Programacion.h"
#include "Fisica.h"
#include "Matematicas.h"
#include <iostream>

using std::cout;
using std::endl;

Alumno::Alumno(const std::string& nombre, const std::string& matricula, const Padre& padre)
    : nombre(nombre), matricula(matricula), padre(padre) {}

// Agrega un curso creando una copia (polimorfica) del cursoModelo
void Alumno::agregarCurso(const Curso& cursoModelo) {
    auto copia = cursoModelo.clone();
    // copia ya trae su nombre y calificacion (si el modelo tuviera calificacion)
    cursos.push_back(std::move(copia));
}

void Alumno::mostrarDatos() const {
    cout << "Nombre: " << nombre << endl;
    cout << "Matricula: " << matricula << endl;
    cout << "Padre: " << padre.getNombre() << endl;
    cout << "Cursos:" << endl;

    for (const auto& c : cursos) {
        cout << "  - " << c->getNombre()
             << " | Calificacion final: " << c->getCalificacionFinal()
             << endl;
    }
}

std::string Alumno::getMatricula() const {
    return matricula;
}

std::string Alumno::getPadreNombre() const {
    return padre.getNombre();
}

#include "Alumno.h"
#include "Padre.h"
#include "Materia.h"
#include "Taller.h"
#include <iostream>
#include <iomanip>

Alumno::Alumno(const std::string& nombre,
               const std::string& matricula,
               int edad,
               const Padre& padre)
    : nombre(nombre), matricula(matricula), edad(edad), padre(padre), materias(), taller(nullptr) {}

std::string Alumno::getMatricula() const { return matricula; }
std::string Alumno::getNombre() const { return nombre; }
int Alumno::getEdad() const { return edad; }
std::string Alumno::getPadreNombre() const { return padre.getNombre(); }

void Alumno::inscribirEnMateria(Materia* materia, float calificacion) {
    if (!materia) return;
    if (materias.size() >= 2) {
        // opcion: no inscribir mas de 2 materias por requerimiento
        return;
    }
    materia->inscribirAlumno(matricula, calificacion);
    materias.push_back(materia);
}

void Alumno::inscribirEnTaller(Taller* tallerObj, int horasCompletadas) {
    if (!tallerObj) return;
    // 1 taller por alumno segun requerimiento
    tallerObj->inscribirAlumno(matricula, horasCompletadas);
    taller = tallerObj;
}

void Alumno::mostrarDatos(const std::vector<Materia*>& todasMaterias, const std::vector<Taller*>& todosTalleres) const {
    std::cout << "-----------------------------\n";
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Matricula: " << matricula << "\n";
    std::cout << "Edad: " << edad << "\n";
    std::cout << "Padre: " << padre.getNombre() << "\n";

    // Mostrar materias inscritas y calificaciones
    std::cout << "Materias inscritas:\n";
    float suma = 0.0f;
    int cont = 0;
    // preferir recorrer las materias registradas en este alumno (materias vector)
    for (Materia* m : materias) {
        if (m) {
            float cal = m->getCalificacion(matricula);
            if (cal >= 0.0f) {
                std::cout << "  - " << m->getNombre() << " : " << std::fixed << std::setprecision(1) << cal << "\n";
                suma += cal;
                ++cont;
            } else {
                std::cout << "  - " << m->getNombre() << " : (sin calificacion)\n";
            }
        }
    }
    if (cont > 0) {
        std::cout << "Promedio de materias: " << std::fixed << std::setprecision(2) << (suma / cont) << "\n";
    } else {
        std::cout << "Promedio de materias: N/A\n";
    }

    // Mostrar taller
    std::cout << "Taller inscrito:\n";
    if (taller) {
        int hrs = taller->getHorasAcreditadas(matricula);
        if (hrs >= 0) {
            std::cout << "  - " << taller->getNombre() << " : " << hrs << " horas\n";
        } else {
            std::cout << "  - " << taller->getNombre() << " : (sin horas registradas)\n";
        }
    } else {
        std::cout << "  - Ninguno\n";
    }
    std::cout << "-----------------------------\n";
}

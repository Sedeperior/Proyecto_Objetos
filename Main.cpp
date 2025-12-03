#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Alumno.h"
#include "Padre.h"
#include "Materia.h"
#include "Taller.h"

int main() {
    // Crear materias (objetos modelo)
    Materia fisica("Fisica");
    Materia programacion("Programacion");
    Materia matematicas("Matematicas");

    // Crear talleres (max 200 horas por defecto)
    Taller servicio("Servicio Social", 200);
    Taller becario("Becario", 200);

    // Crear padres
    Padre padre1("Carlos Perez");
    Padre padre2("Maria Lopez");
    Padre padre3("Pedro Diaz");
    Padre padre4("Lucia Ruiz");

    // Crear alumnos (4 alumnos). Cada alumno: 2 materias y 1 taller
    Alumno a1("Luis Perez", "A001", 19, padre1);
    Alumno a2("Ana Lopez", "A002", 20, padre2);
    Alumno a3("Jorge Diaz", "A003", 21, padre3);
    Alumno a4("Marta Ruiz", "A004", 22, padre4);

    // Los objetos Materia/Taller se usan por puntero en los alumnos.
    // Inscribir alumnos en materias y talleres, con calificaciones y horas:
    // a1 -> fisica(85.0) + programacion(90.0) + taller servicio(120)
    a1.inscribirEnMateria(&fisica, 85.0f);
    a1.inscribirEnMateria(&programacion, 90.0f);
    a1.inscribirEnTaller(&servicio, 120);

    // a2 -> matematicas(78.5) + programacion(88.0) + taller becario(200)
    a2.inscribirEnMateria(&matematicas, 78.5f);
    a2.inscribirEnMateria(&programacion, 88.0f);
    a2.inscribirEnTaller(&becario, 200);

    // a3 -> fisica(92.0) + matematicas(70.0) + taller servicio(50)
    a3.inscribirEnMateria(&fisica, 92.0f);
    a3.inscribirEnMateria(&matematicas, 70.0f);
    a3.inscribirEnTaller(&servicio, 50);

    // a4 -> programacion(65.0) + matematicas(74.5) + taller becario(180)
    a4.inscribirEnMateria(&programacion, 65.0f);
    a4.inscribirEnMateria(&matematicas, 74.5f);
    a4.inscribirEnTaller(&becario, 180);

    // Guardar alumnos en vector (moviendo)
    std::vector<Alumno> alumnos;
    alumnos.reserve(4);
    alumnos.push_back(std::move(a1));
    alumnos.push_back(std::move(a2));
    alumnos.push_back(std::move(a3));
    alumnos.push_back(std::move(a4));

    // Vector de punteros a materias y talleres para pasar a mostrarDatos
    std::vector<Materia*> todasMaterias = { &fisica, &programacion, &matematicas };
    std::vector<Taller*> todosTalleres = { &servicio, &becario };

    std::cout << "Ingresa una matricula o nombre del padre: ";
    std::string buscada;
    std::getline(std::cin, buscada);

    bool encontrado = false;
    // Buscar por matricula
    for (const auto& al : alumnos) {
        if (al.getMatricula() == buscada) {
            al.mostrarDatos(todasMaterias, todosTalleres);
            encontrado = true;
        }
    }
    // Si no se encontro por matricula, buscar por nombre del padre
    if (!encontrado) {
        for (const auto& al : alumnos) {
            if (al.getPadreNombre() == buscada) {
                al.mostrarDatos(todasMaterias, todosTalleres);
                encontrado = true;
            }
        }
    }

    if (!encontrado) {
        std::cout << "No se encontro informacion para: " << buscada << std::endl;
    }

    return 0;
}

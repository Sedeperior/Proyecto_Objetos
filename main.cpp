#include <iostream>
#include <vector>
#include <string>
#include "Alumno.h"
#include "Programacion.h"
#include "Fisica.h"
#include "Matematicas.h"

using namespace std;

int main() {
    // Cursos modelo (servirán como "plantillas" para copiar)
    Programacion prog;
    Fisica fis;
    Matematicas mat;

    // (Opcional) poner calificaciones en los modelos si quieres que se copien
    prog.setCalificacionFinal(8.5f);
    fis.setCalificacionFinal(9.0f);
    mat.setCalificacionFinal(7.7f);

    // Alumnos
    Alumno a1("Luis Perez", "A001", Padre("Carlos Perez"));
    Alumno a2("Ana Lopez", "A002", Padre("Maria Lopez"));
    Alumno a3("Jorge Diaz", "A003", Padre("Pedro Diaz"));
    Alumno a4("Marta Ruiz", "A004", Padre("Lucia Ruiz"));

    // Inscribir cursos (cada alumno obtiene una copia propia)
    a1.agregarCurso(prog);
    a1.agregarCurso(fis);

    a2.agregarCurso(mat);
    a2.agregarCurso(prog);

    a3.agregarCurso(fis);
    a3.agregarCurso(mat);

    a4.agregarCurso(prog);
    a4.agregarCurso(fis);

    // Como Alumno no es copiables, guardamos moviendo los objetos a un vector
    vector<Alumno> alumnos;
    alumnos.reserve(4);
    alumnos.push_back(std::move(a1));
    alumnos.push_back(std::move(a2));
    alumnos.push_back(std::move(a3));
    alumnos.push_back(std::move(a4));

    string buscada;
    cout << "Ingresa una matricula o nombre del padre: ";
    getline(cin, buscada);

    bool encontrado = false;
    for (const auto& al : alumnos) {
        if (al.getMatricula() == buscada || al.getPadreNombre() == buscada) {
            al.mostrarDatos();
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "No se encontro informacion." << endl;
    }

    return 0;
}

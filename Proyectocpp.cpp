#include <iostream>
#include <vector>
using namespace std;

// Clase base: Persona

class Persona {
protected:
    string nombre;
    int edad;

public:
    Persona(string nombre, int edad) : nombre(nombre), edad(edad) {}

    virtual void mostrar() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};

/* Clase derivada: Alumno
Hereda de Persona*/

class Alumno : public Persona {
private:
    string matricula;

public:
    Alumno(string nombre, int edad, string matricula)
        : Persona(nombre, edad), matricula(matricula) {}

    void mostrar() override {
        cout << "Alumno - Nombre: " << nombre 
             << ", Edad: " << edad 
             << ", Matricula: " << matricula << endl;
    }
};

/* Clase Curso
Composicion: contiene Alumnos*/

class Curso {
private:
    string nombreCurso;
    vector<Alumno> alumnos;

public:
    Curso(string nombreCurso) : nombreCurso(nombreCurso) {}

    void agregarAlumno(const Alumno& alumno) {
        alumnos.push_back(alumno);   // Paso de mensaje: Curso recibe Alumno
    }

    void mostrarAlumnos() {
        cout << "Curso: " << nombreCurso << endl;
        for (auto& a : alumnos) {
            a.mostrar();
        }
    }
};

/* Clase Escuela
 Composición: contiene Cursos*/
class Escuela {
private:
    string nombreEscuela;
    vector<Curso> cursos;

public:
    Escuela(string nombreEscuela) : nombreEscuela(nombreEscuela) {}

    void agregarCurso(const Curso& curso) {
        cursos.push_back(curso);  // Paso de mensaje: Escuela recibe Curso
    }

    void mostrarCursos() {
        cout << "Escuela: " << nombreEscuela << endl;
        for (auto& c : cursos) {
            c.mostrarAlumnos();
            cout << "-----------------------------\n";
        }
    }
};

// Funcion principal

int main() {
    // Crear alumnos
    Alumno a1("Juan", 18, "A001");
    Alumno a2("Maria", 19, "A002");

    // Crear curso y agregar alumnos
    Curso curso("Programacion C++");
    curso.agregarAlumno(a1);
    curso.agregarAlumno(a2);

    // Crear escuela y agregar curso
    Escuela escuela("Tecnologico");
    escuela.agregarCurso(curso);

    // Mostrar toda la informacion
    escuela.mostrarCursos();

    return 0;
}

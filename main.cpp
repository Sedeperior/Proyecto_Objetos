#include <iostream>
#include "SistemaEscolar.h" // Incluye SistemaEscolar.h, y este a su vez Entidades.h

int main() {
    // 1. Encapsulamiento
    Alumno a1("Juan Perez", 18, "A001");
    Alumno a2("Maria Lopez", 19, "A002");
    
    std::cout << "--- 1. Datos iniciales de Alumno ---" << std::endl;
    std::cout << "Nombre de a1 (via getter): " << a1.getNombre() << std::endl;
    a1.mostrar();
    
    // Modificar datos usando setters
    a1.setEdad(19);
    a1.setMatricula("A001-Revisada");
    std::cout << "\n--- 2. Datos modificados de Alumno (via setters) ---" << std::endl;
    a1.mostrar();
    
    // 2. Crear curso y agregar alumnos
    Curso curso_cpp("Programacion C++");
    curso_cpp.agregarAlumno(a1);
    curso_cpp.agregarAlumno(a2);
    
    // Demostrar acceso al nombre del curso usando getter
    std::cout << "\n--- 3. Acceso a dato de Curso (via getter) ---" << std::endl;
    std::cout << "Nombre del curso: " << curso_cpp.getNombreCurso() << std::endl;

    // 3. Crear escuela y agregar curso
    Escuela escuela_tec("Tecnologico");
    escuela_tec.agregarCurso(curso_cpp);

    // 4. Mostrar toda la informacion
    escuela_tec.mostrarCursos();

    // 5. Modificar el nombre de la escuela usando setter y mostrar
    escuela_tec.setNombreEscuela("Instituto Tecnologico");
    
    std::cout << "\n--- 6. Datos despues de modificar el nombre de la Escuela ---" << std::endl;
    std::cout << "Nuevo Nombre de la Escuela: " << escuela_tec.getNombreEscuela() << std::endl;

    return 0;
}
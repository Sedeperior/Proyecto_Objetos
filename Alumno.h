#pragma once
#include <string>
#include <vector>

class Materia;
class Taller;
class Padre;

class Alumno {
private:
    std::string nombre;
    std::string matricula;
    int edad;
    Padre padre;
    // cada alumno participa en 2 materias y 1 taller (segun la consigna)
    std::vector<Materia*> materias;
    Taller* taller;

public:
    Alumno(const std::string& nombre,
           const std::string& matricula,
           int edad,
           const Padre& padre);

    // no copiables por simplicidad de ownership
    Alumno(const Alumno&) = delete;
    Alumno& operator=(const Alumno&) = delete;

    // movimiento permitido
    Alumno(Alumno&&) noexcept = default;
    Alumno& operator=(Alumno&&) noexcept = default;

    std::string getMatricula() const;
    std::string getNombre() const;
    int getEdad() const;
    std::string getPadreNombre() const;

    // Inscripcion local: agrega referencia a Materia/Taller y delega la calificacion/horas a los objetos
    void inscribirEnMateria(Materia* materia, float calificacion);
    void inscribirEnTaller(Taller* tallerObj, int horasCompletadas);

    // Mostrar datos completos del alumno (nombre, edad, materias y taller, calificaciones, promedio, horas)
    void mostrarDatos(const std::vector<Materia*>& todasMaterias, const std::vector<Taller*>& todosTalleres) const;
};

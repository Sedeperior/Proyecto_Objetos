#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
#include <vector>
#include <memory>
#include "Curso.h"
#include "Padre.h"

class Alumno {
private:
    std::string nombre;
    std::string matricula;
    Padre padre;
    std::vector<std::unique_ptr<Curso>> cursos; // propietario exclusivo de sus cursos

public:
    Alumno(const std::string& nombre, const std::string& matricula, const Padre& padre);
    ~Alumno() = default;

    // Prohibir copia para evitar problemas con ownership
    Alumno(const Alumno&) = delete;
    Alumno& operator=(const Alumno&) = delete;

    // Permitir movimiento
    Alumno(Alumno&&) noexcept = default;
    Alumno& operator=(Alumno&&) noexcept = default;

    // Agrega un curso copiando (polimorficamente) el modelo
    void agregarCurso(const Curso& cursoModelo);

    void mostrarDatos() const;

    std::string getMatricula() const;
    std::string getPadreNombre() const;
};

#endif 

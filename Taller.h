#pragma once
#include "Curso.h"
#include <string>
#include <unordered_map>

class Taller : public Curso {
public:
    explicit Taller(const std::string& nombre, int maxHoras = 200);
    // inscribir con horas completadas (0..maxHoras)
    void inscribirAlumno(const std::string& matricula, int horasCompletadas);
    bool tieneAlumno(const std::string& matricula) const;
    // devuelve -1 si no existe
    int getHorasAcreditadas(const std::string& matricula) const;
    void mostrarDatosAlumno(const std::string& matricula) const;

private:
    int maxHoras;
    std::unordered_map<std::string, int> horasPorAlumno;
};

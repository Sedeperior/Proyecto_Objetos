#include "Taller.h"
#include <iostream>

Taller::Taller(const std::string& nombre, int maxHoras) : Curso(nombre), maxHoras(maxHoras) {}

void Taller::inscribirAlumno(const std::string& matricula, int horasCompletadas) {
    if (horasCompletadas < 0) horasCompletadas = 0;
    if (horasCompletadas > maxHoras) horasCompletadas = maxHoras;
    horasPorAlumno[matricula] = horasCompletadas;
}

bool Taller::tieneAlumno(const std::string& matricula) const {
    return horasPorAlumno.find(matricula) != horasPorAlumno.end();
}

int Taller::getHorasAcreditadas(const std::string& matricula) const {
    auto it = horasPorAlumno.find(matricula);
    if (it == horasPorAlumno.end()) return -1;
    return it->second;
}

void Taller::mostrarDatosAlumno(const std::string& matricula) const {
    auto it = horasPorAlumno.find(matricula);
    if (it == horasPorAlumno.end()) {
        std::cout << "  No inscrito en taller " << nombre << "\n";
    } else {
        std::cout << "  " << nombre << " - Horas acreditadas: " << it->second << "\n";
    }
}

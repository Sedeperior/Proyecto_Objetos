#include "Programacion.h"

//Cada materia tomará sólo los datos que les corresponde

Programacion::Programacion(Personas* p) {
    personas = p;

    matriculas[0] = "A001"; faltas[0] = 0;
    matriculas[1] = "A002"; faltas[1] = 1;
    matriculas[2] = "A003"; faltas[2] = 0;
    matriculas[3] = "A004"; faltas[3] = 23;
}

int Programacion::obtenerFaltas(const std::string& matricula) const {
    for (int i = 0; i < NUM_REGISTROS; i++) {
        if (matriculas[i] == matricula)
            return faltas[i];
    }
    return -1;
}

std::string Programacion::obtenerProfesor() const {
    return personas->obtenerProfesor("Programacion");
}

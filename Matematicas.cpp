#include "Matematicas.h"

//Cada materia tomará sólo los datos que les corresponde

Matematicas::Matematicas(Personas* p) {
    personas = p;

    matriculas[0] = "A001"; faltas[0] = 12;
    matriculas[1] = "A002"; faltas[1] = 0;
    matriculas[2] = "A003"; faltas[2] = 2;
    matriculas[3] = "A004"; faltas[3] = 0;
}

int Matematicas::obtenerFaltas(const std::string& matricula) const {
    for (int i = 0; i < NUM_REGISTROS; i++) {
        if (matriculas[i] == matricula)
            return faltas[i];
    }
    return -1;
}

std::string Matematicas::obtenerProfesor() const {
    return personas->obtenerProfesor("Matematicas");
}

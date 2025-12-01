#ifndef PROGRAMACION_H
#define PROGRAMACION_H

#include "Curso.h"
#include <memory>

class Programacion : public Curso {
public:
    Programacion();
    ~Programacion() override = default;

    std::unique_ptr<Curso> clone() const override;
};

#endif 

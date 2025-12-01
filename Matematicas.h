#ifndef MATEMATICAS_H
#define MATEMATICAS_H

#include "Curso.h"
#include <memory>

class Matematicas : public Curso {
public:
    Matematicas();
    ~Matematicas() override = default;

    std::unique_ptr<Curso> clone() const override;
};

#endif 

#ifndef FISICA_H
#define FISICA_H

#include "Curso.h"
#include <memory>

class Fisica : public Curso {
public:
    Fisica();
    ~Fisica() override = default;

    std::unique_ptr<Curso> clone() const override;
};

#endif 

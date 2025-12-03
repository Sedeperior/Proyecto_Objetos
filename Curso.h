#pragma once
#include <string>

class Curso {
protected:
    std::string nombre;
public:
    explicit Curso(const std::string& nombre);
    virtual ~Curso();
    std::string getNombre() const;
};

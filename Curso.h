#ifndef CURSO_H
#define CURSO_H

#include <string>
#include <memory>

class Curso {
protected:
    std::string nombre;
    float calificacionFinal;

public:
    Curso(const std::string& nombre);
    virtual ~Curso();

    void setCalificacionFinal(float cal);
    float getCalificacionFinal() const;
    std::string getNombre() const;

    // clone para copiar polimórficamente
    virtual std::unique_ptr<Curso> clone() const;
};

#endif // CURSO_H

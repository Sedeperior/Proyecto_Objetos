#ifndef ENTIDADES_H
#define ENTIDADES_H

#include <string>
#include <iostream>

class Persona {
private: 
    std::string nombre;
    int edad;

public:
    Persona(std::string nombre, int edad);

    // Getters 
    std::string getNombre() const { return nombre; }
    int getEdad() const { return edad; }

    // Setters
    void setNombre(const std::string& nuevoNombre) { nombre = nuevoNombre; }
    void setEdad(int nuevaEdad) { edad = nuevaEdad; }

    // Declaracion de metodos
    virtual void mostrar() const;
    virtual ~Persona();
};

class Alumno : public Persona {
private:
    std::string matricula;

public:
    Alumno(std::string nombre, int edad, std::string matricula);

    // Getters y Setters
    std::string getMatricula() const { return matricula; }
    void setMatricula(const std::string& nuevaMatricula) { matricula = nuevaMatricula; }

    // Declaracion del metodo override
    void mostrar() const override; 
};

#endif // ENTIDADES_H
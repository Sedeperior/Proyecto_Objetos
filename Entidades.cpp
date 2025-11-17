#include "Entidades.h"
#include <iostream>

// Definicion de Persona
Persona::Persona(std::string nombre, int edad) 
    : nombre(nombre), edad(edad) {} // Acceso directo valido dentro del constructor

void Persona::mostrar() const {
    // Acceso directo valido dentro de la clase Persona
    std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
}

Persona::~Persona() {}

// Definicion de Alumno
Alumno::Alumno(std::string nombre, int edad, std::string matricula)
    : Persona(nombre, edad), matricula(matricula) {} // Llama al constructor de Persona

void Alumno::mostrar() const {
    std::cout << "Alumno - Nombre: " << getNombre() // Uso de getter
              << ", Edad: " << getEdad()           // Uso de getter
              << ", Matricula: " << matricula << std::endl;
}
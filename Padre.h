#pragma once
#include <string>

class Padre {
private:
    std::string nombre;
public:
    explicit Padre(const std::string& nombre = "");
    std::string getNombre() const;
};

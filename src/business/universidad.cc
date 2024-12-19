#include "universidad.h"
#include <iostream>

// Constructor
Universidad::Universidad(const std::string& correo, int telefono)
    : correo(correo), telefono(telefono) {}

// Getters
std::string Universidad::getCorreo() const {
    return correo;
}

int Universidad::getTelefono() const {
    return telefono;
}

// Setters
void Universidad::setCorreo(const std::string& nuevoCorreo) {
    correo = nuevoCorreo;
}

void Universidad::setTelefono(int nuevoTelefono) {
    telefono = nuevoTelefono;
}

// Método para mostrar la información
void Universidad::mostrarInformacion() const {
    std::cout << "Información de la Universidad:\n";
    std::cout << "Correo: " << correo << "\n";
    std::cout << "Teléfono: " << telefono << "\n";
}

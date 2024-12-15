#include "profesor.h"
#include <iostream>

// Constructor
Profesor::Profesor(const std::string& nombre, const std::string& apellidos, int DNI, int telefono, 
                   const std::string& correo, const std::string& grados_profesa)
    : nombre(nombre), apellidos(apellidos), DNI(DNI), telefono(telefono), 
      correo(correo), grados_profesa(grados_profesa) {}

// Métodos de gestión de inscripciones
void Profesor::inscribirPlaza(const std::string& plaza) {
    inscripciones.push_back(plaza);
    std::cout << "Plaza '" << plaza << "' inscrita correctamente.\n";
}

void Profesor::anularPlaza(const std::string& plaza) {
    for (auto it = inscripciones.begin(); it != inscripciones.end(); ++it) {
        if (*it == plaza) {
            inscripciones.erase(it);
            std::cout << "Plaza '" << plaza << "' anulada correctamente.\n";
            return;
        }
    }
    std::cout << "Plaza '" << plaza << "' no encontrada.\n";
}

void Profesor::confirmarPlaza(const std::string& plaza) {
    std::cout << "Plaza '" << plaza << "' confirmada para el profesor.\n";
}

void Profesor::visualizarInscripciones() const {
    std::cout << "Inscripciones del profesor " << nombre << " " << apellidos << ":\n";
    for (const auto& plaza : inscripciones) {
        std::cout << "- " << plaza << "\n";
    }
}

// Métodos getters
std::string Profesor::getNombre() const {
    return nombre;
}

std::string Profesor::getApellidos() const {
    return apellidos;
}

int Profesor::getDNI() const {
    return DNI;
}

int Profesor::getTelefono() const {
    return telefono;
}

std::string Profesor::getCorreo() const {
    return correo;
}

std::string Profesor::getGradosProfesa() const {
    return grados_profesa;
}
#include "profesor.h"
#include <iostream>

// Constructor
Profesor::Profesor(const std::string& nombre, const std::string& apellidos, int DNI, int telefono, 
                   const std::string& correo, const std::string& grados_profesa)
    : nombre(nombre), apellidos(apellidos), DNI(DNI), telefono(telefono), 
      correo(correo), grados_profesa(grados_profesa) {}

// Métodos de gestión de inscripciones
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

// Setters
void Profesor::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

void Profesor::setApellidos(const std::string& apellidos) {
    this->apellidos = apellidos;
}

void Profesor::setDNI(int DNI) {
    this->DNI = DNI;
}

void Profesor::setTelefono(int telefono) {
    this->telefono = telefono;
}

void Profesor::setCorreo(const std::string& correo) {
    this->correo = correo;
}

void Profesor::setGradosProfesa(const std::string& gradosprofesa) {
    this->grados_profesa = gradosprofesa;
}

void Profesor::setInscripciones(const std::vector<std::string>& inscripciones) {
    this->inscripciones = inscripciones;
}
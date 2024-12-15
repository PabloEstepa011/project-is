#include "administrador.h"
#include <iostream>

// Constructor
Administrador::Administrador(const std::string& nombre, const std::string& apellidos,
                             int telefono, const std::string& correo)
    : nombre(nombre), apellidos(apellidos), telefono(telefono), correo(correo) {}

// Getters
std::string Administrador::getNombre() const {
    return nombre;
}

std::string Administrador::getApellidos() const {
    return apellidos;
}

int Administrador::getTelefono() const {
    return telefono;
}

std::string Administrador::getCorreo() const {
    return correo;
}

// Setters
void Administrador::setNombre(const std::string& nuevoNombre) {
    nombre = nuevoNombre;
}

void Administrador::setApellidos(const std::string& nuevosApellidos) {
    apellidos = nuevosApellidos;
}

void Administrador::setTelefono(int nuevoTelefono) {
    telefono = nuevoTelefono;
}

void Administrador::setCorreo(const std::string& nuevoCorreo) {
    correo = nuevoCorreo;
}

// Métodos de gestión simulados
void Administrador::gestionarPlan() const {
    std::cout << "Gestionando plan de convalidación...\n";
}

void Administrador::gestionarAlumno() const {
    std::cout << "Gestionando información de alumnos...\n";
}

void Administrador::gestionarProfesor() const {
    std::cout << "Gestionando información de profesores...\n";
}

void Administrador::gestionarInter() const {
    std::cout << "Gestionando intercambio...\n";
}

void Administrador::gestionarUni() const {
    std::cout << "Gestionando universidad...\n";
}

// Mostrar información del administrador
void Administrador::mostrarInformacion() const {
    std::cout << "Información del Administrador:\n";
    std::cout << "Nombre: " << nombre << " " << apellidos << "\n";
    std::cout << "Teléfono: " << telefono << "\n";
    std::cout << "Correo: " << correo << "\n";
}

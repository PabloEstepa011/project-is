#include "alumno.h"
#include <iostream>

// Constructor
Alumno::Alumno(const std::string& nombre, const std::string& apellidos, int DNI, int telefono, 
               const std::string& correo, const std::string& grados_matriculado, int curso_grado)
    : nombre(nombre), apellidos(apellidos), DNI(DNI), telefono(telefono), 
      correo(correo), grados_matriculado(grados_matriculado), curso_grado(curso_grado) {}

// Métodos de gestión de inscripciones
void Alumno::inscribirPlaza(const std::string& plaza) {
    inscripciones.push_back(plaza);
    std::cout << "Plaza '" << plaza << "' inscrita correctamente.\n";
}

void Alumno::anularPlaza(const std::string& plaza) {
    for (auto it = inscripciones.begin(); it != inscripciones.end(); ++it) {
        if (*it == plaza) {
            inscripciones.erase(it);
            std::cout << "Plaza '" << plaza << "' anulada correctamente.\n";
            return;
        }
    }
    std::cout << "Plaza '" << plaza << "' no encontrada.\n";
}

void Alumno::confirmarPlaza(const std::string& plaza) {
    std::cout << "Plaza '" << plaza << "' confirmada para el alumno.\n";
}

void Alumno::visualizarInscripciones() const {
    std::cout << "Inscripciones del alumno " << nombre << " " << apellidos << ":\n";
    for (const auto& plaza : inscripciones) {
        std::cout << "- " << plaza << "\n";
    }
}

// Métodos getters
std::string Alumno::getNombre() const {
    return nombre;
}

std::string Alumno::getApellidos() const {
    return apellidos;
}

int Alumno::getDNI() const {
    return DNI;
}

int Alumno::getTelefono() const {
    return telefono;
}

std::string Alumno::getCorreo() const {
    return correo;
}

std::string Alumno::getGradosMatriculado() const {
    return grados_matriculado;
}

int Alumno::getCursoGrado() const {
    return curso_grado;
}
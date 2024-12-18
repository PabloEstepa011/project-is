
#include "alumno.h"
#include <iostream>

// Constructor
Alumno::Alumno(const std::string& nombre, const std::string& apellidos, int DNI, int telefono, 
               const std::string& correo, const std::string& grados_matriculado, int curso_grado)
    : nombre(nombre), apellidos(apellidos), DNI(DNI), telefono(telefono), 
      correo(correo), grados_matriculado(grados_matriculado), curso_grado(curso_grado) {}

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

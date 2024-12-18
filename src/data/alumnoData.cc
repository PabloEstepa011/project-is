#include "AlumnoData.h"
#include <fstream>
#include <sstream>
#include <iostream>

// Constructor
AlumnoData::AlumnoData(const std::string& archivo) : archivo(archivo) {}

// Leer datos desde el archivo
Alumno AlumnoData::leerDatos() const {
    std::ifstream archivoEntrada(archivo);

    if (!archivoEntrada) {
        std::cerr << "No se pudo abrir el archivo: " << archivo << std::endl;
        return Alumno("", "", 0, 0, "", "", 0);
    }

    std::string nombre, apellidos, correo, grados;
    int DNI, telefono, cursoGrado;
    std::vector<std::string> inscripciones;

    // Leer datos básicos del alumno
    std::getline(archivoEntrada, nombre);
    std::getline(archivoEntrada, apellidos);
    archivoEntrada >> DNI >> telefono >> cursoGrado;
    archivoEntrada.ignore(); // Consumir el salto de línea
    std::getline(archivoEntrada, correo);
    std::getline(archivoEntrada, grados);

    // Leer las inscripciones
    std::string inscripcion;
    while (std::getline(archivoEntrada, inscripcion)) {
        if (!inscripcion.empty()) {
            inscripciones.push_back(inscripcion);
        }
    }

    archivoEntrada.close();
    return Alumno(nombre, apellidos, DNI, telefono, correo, grados, cursoGrado, inscripciones);
}

// Escribir datos al archivo
void AlumnoData::escribirDatos(const Alumno& alumno) const {
    std::ofstream archivoSalida(archivo, std::ios::trunc); // Sobreescribir archivo

    if (!archivoSalida) {
        std::cerr << "No se pudo abrir el archivo: " << archivo << std::endl;
        return;
    }

    // Guardar datos básicos del alumno
    archivoSalida << alumno.getNombre() << "\n";
    archivoSalida << alumno.getApellidos() << "\n";
    archivoSalida << alumno.getDNI() << "\n";
    archivoSalida << alumno.getTelefono() << "\n";
    archivoSalida << alumno.getCursoGrado() << "\n";
    archivoSalida << alumno.getCorreo() << "\n";
    archivoSalida << alumno.getGradosMatriculado() << "\n";

    // Guardar inscripciones
    for (const auto& inscripcion : alumno.inscripciones) {
        archivoSalida << inscripcion << "\n";
    }

    archivoSalida.close();
}

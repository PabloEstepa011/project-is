#include "ProfesorData.h"
#include <fstream>
#include <sstream>
#include <iostream>

// Constructor
ProfesorData::ProfesorData(const std::string& archivo) : archivo(archivo) {}

// Leer datos desde el archivo
Profesor ProfesorData::leerDatos() const {
    std::ifstream archivoEntrada(archivo);

    if (!archivoEntrada) {
        std::cerr << "No se pudo abrir el archivo: " << archivo << std::endl;
        return Profesor("", "", 0, 0, "", "");
    }

    std::string nombre, apellidos, correo, grados;
    int DNI, telefono;
    std::vector<std::string> inscripciones;

    // Leer datos básicos del profesor
    std::getline(archivoEntrada, nombre);
    std::getline(archivoEntrada, apellidos);
    archivoEntrada >> DNI >> telefono;
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
    return Profesor(nombre, apellidos, DNI, telefono, correo, grados, inscripciones);
}

// Escribir datos al archivo
void ProfesorData::escribirDatos(const Profesor& profesor) const {
    std::ofstream archivoSalida(archivo, std::ios::trunc); // Sobreescribir archivo

    if (!archivoSalida) {
        std::cerr << "No se pudo abrir el archivo: " << archivo << std::endl;
        return;
    }

    // Guardar datos básicos del profesor
    archivoSalida << profesor.getNombre() << "\n";
    archivoSalida << profesor.getApellidos() << "\n";
    archivoSalida << profesor.getDNI() << "\n";
    archivoSalida << profesor.getTelefono() << "\n";
    archivoSalida << profesor.getCorreo() << "\n";
    archivoSalida << profesor.getGradosProfesa() << "\n";

    // Guardar inscripciones
    for (const auto& inscripcion : profesor.inscripciones) {
        archivoSalida << inscripcion << "\n";
    }

    archivoSalida.close();
}

#include "gestorProfesor.h"
#include "profesorData.h"
#include <iostream>
#include <algorithm>
#include "profesor.h"

// Constructor
GestorProfesor::GestorProfesor() : profesor() {}

// Inscribir a un profesor en una plaza
void GestorProfesor::inscribirPlazaProfesor() {
    ProfesorData profesorData;
    std::string nuevaInscripcion;
    std::cout << "Introduce la plaza a la que deseas inscribirte: ";
    std::getline(std::cin, nuevaInscripcion);

    profesor.getInscripciones().push_back(nuevaInscripcion); // Agregar a la lista de inscripciones
    std::cout << "Inscripción añadida: " << nuevaInscripcion << std::endl;

    // Guardar cambios en el archivo
    profesorData.escribirDatos(profesor);
}

// Anular una inscripción de un profesor
void GestorProfesor::anularPlazaProfesor() {
    ProfesorData profesorData;
    std::string plaza;
    std::cout << "Introduce la plaza que deseas anular: ";
    std::getline(std::cin, plaza);

    auto inscripciones = profesor.getInscripciones();
    auto it = std::find(inscripciones.begin(), inscripciones.end(), plaza);

    if (it != inscripciones.end()) {
        inscripciones.erase(it);
        std::cout << "Inscripción anulada: " << plaza << std::endl;

        // Guardar cambios en el archivo
        profesorData.escribirDatos(profesor);
    } else {
        std::cout << "No se encontró la inscripción: " << plaza << std::endl;
    }
}

// Visualizar todas las inscripciones de un profesor
void GestorProfesor::visualizarInscripcionesProfesor() {
    ProfesorData profesorData;
    auto inscripciones = profesor.getInscripciones();

    if (inscripciones.empty()) {
        std::cout << "No hay inscripciones activas." << std::endl;
    } else {
        std::cout << "Inscripciones activas del profesor:" << std::endl;
        for (const auto& inscripcion : inscripciones) {
            std::cout << "- " << inscripcion << std::endl;
        }
    }
}

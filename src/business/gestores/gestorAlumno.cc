#include "gestorAlumno.h"
#include "../../data/alumnoData.h"
#include <iostream>
#include <algorithm>

// Constructor

// Función para inscribir a un alumno en una plaza
void GestorAlumno::inscribirPlaza() {
    AlumnoData alumnoData;
    std::string nuevaInscripcion;
    std::cout << "Introduce la plaza a la que deseas inscribirte: ";
    std::getline(std::cin, nuevaInscripcion);

    alumno.getInscripciones().push_back(nuevaInscripcion); // Agregar a la lista de inscripciones
    std::cout << "Inscripción añadida: " << nuevaInscripcion << std::endl;

    // Guardar cambios en el archivo
    alumnoData.escribirDatos(alumno);
}

// Función para anular la inscripción de un alumno
void GestorAlumno::anularPlaza() {
    AlumnoData alumnoData;
    std::string plaza;
    std::cout << "Introduce la plaza que deseas anular: ";
    std::getline(std::cin, plaza);

    auto inscripciones = alumno.getInscripciones();
    auto it = std::find(inscripciones.begin(), inscripciones.end(), plaza);

    if (it != inscripciones.end()) {
        inscripciones.erase(it);
        std::cout << "Inscripción anulada: " << plaza << std::endl;

        // Guardar cambios en el archivo
        alumnoData.escribirDatos(alumno);
    } else {
        std::cout << "No se encontró la inscripción: " << plaza << std::endl;
    }
}

// Función para visualizar inscripciones
void GestorAlumno::visualizarInscripciones() {
    AlumnoData alumnoData;
    auto inscripciones = alumno.getInscripciones();

    if (inscripciones.empty()) {
        std::cout << "No hay inscripciones activas." << std::endl;
    } else {
        std::cout << "Inscripciones activas del alumno:" << std::endl;
        for (const auto& inscripcion : inscripciones) {
            std::cout << "- " << inscripcion << std::endl;
        }
    }
}
#include "GestorAlumno.h"
#include "AlumnoData.h"
#include <iostream>
#include <algorithm>

// Constructor
GestorAlumno::GestorAlumno()
    : alumno("", "", 0, 0, "", "", 0), alumnoData("alumnos.txt") {
    // Cargar datos desde el archivo al inicio
    alumno = alumnoData.leerDatos();
}

// Función para inscribir a un alumno en una plaza
void GestorAlumno::inscribirPlaza() {
    std::string nuevaInscripcion;
    std::cout << "Introduce la plaza a la que deseas inscribirte: ";
    std::getline(std::cin, nuevaInscripcion);

    alumno.inscripciones.push_back(nuevaInscripcion); // Agregar a la lista de inscripciones
    std::cout << "Inscripción añadida: " << nuevaInscripcion << std::endl;

    // Guardar cambios en el archivo
    alumnoData.escribirDatos(alumno);
}

// Función para anular la inscripción de un alumno
void GestorAlumno::anularPlaza() {
    std::string plaza;
    std::cout << "Introduce la plaza que deseas anular: ";
    std::getline(std::cin, plaza);

    auto& inscripciones = alumno.inscripciones;
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
    const auto& inscripciones = alumno.inscripciones;

    if (inscripciones.empty()) {
        std::cout << "No hay inscripciones activas." << std::endl;
    } else {
        std::cout << "Inscripciones activas del alumno:" << std::endl;
        for (const auto& inscripcion : inscripciones) {
            std::cout << "- " << inscripcion << std::endl;
        }
    }
}
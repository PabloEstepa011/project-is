#include "lista.h"
#include <iostream>

// Constructor
Lista::Lista(int ocupacion_max) : ocupacion(0), ocupacion_max(ocupacion_max) {}

// Método para agregar inscripciones
void Lista::agregarInscripcion(const std::string& inscripcion) {
    if (ocupacion < ocupacion_max) {
        inscripciones.push_back(inscripcion);
        ocupacion++;
        std::cout << "Inscripción '" << inscripcion << "' agregada correctamente.\n";
    } else {
        std::cout << "No se puede agregar la inscripción '" << inscripcion 
                  << "'. La lista está llena.\n";
    }
}

// Método para mover una inscripción (eliminarla de la lista actual)
void Lista::moverInscripcion(const std::string& inscripcion) {
    for (auto it = inscripciones.begin(); it != inscripciones.end(); ++it) {
        if (*it == inscripcion) {
            inscripciones.erase(it);
            ocupacion--;
            std::cout << "Inscripción '" << inscripcion << "' movida correctamente.\n";
            return;
        }
    }
    std::cout << "Inscripción '" << inscripcion << "' no encontrada.\n";
}

// Método para mostrar las inscripciones
void Lista::mostrarInscripciones() const {
    std::cout << "Inscripciones actuales (" << ocupacion << "/" << ocupacion_max << "):\n";
    for (const auto& inscripcion : inscripciones) {
        std::cout << "- " << inscripcion << "\n";
    }
}

// Getters
int Lista::getOcupacion() const {
    return ocupacion;
}

int Lista::getOcupacionMax() const {
    return ocupacion_max;
}
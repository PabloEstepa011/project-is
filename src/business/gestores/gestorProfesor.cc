#include "gestorProfesor.h"
#include <iostream>
#include <algorithm>  // Para std::find

// Constructor por defecto
GestorProfesor::GestorProfesor() {
    // Inicialización de atributos si es necesario
}

// Método para inscribir una plaza para un profesor
void GestorProfesor::inscribirPlazaProfesor(const std::string& plaza) {
    plazasInscritasProfesor.push_back(plaza);
    std::cout << "Plaza " << plaza << " inscrita correctamente para el profesor." << std::endl;
}

// Método para anular una plaza para un profesor
void GestorProfesor::anularPlazaProfesor(const std::string& plaza) {
    auto it = std::find(plazasInscritasProfesor.begin(), plazasInscritasProfesor.end(), plaza);
    if (it != plazasInscritasProfesor.end()) {
        plazasInscritasProfesor.erase(it);
        std::cout << "Plaza " << plaza << " anulada correctamente para el profesor." << std::endl;
    } else {
        std::cout << "Plaza " << plaza << " no encontrada para el profesor." << std::endl;
    }
}

// Método para confirmar una plaza para un profesor
void GestorProfesor::confirmarPlazaProfesor(const std::string& plaza) {
    auto it = std::find(plazasInscritasProfesor.begin(), plazasInscritasProfesor.end(), plaza);
    if (it != plazasInscritasProfesor.end()) {
        std::cout << "Plaza " << plaza << " confirmada para el profesor." << std::endl;
    } else {
        std::cout << "Plaza " << plaza << " no encontrada para el profesor." << std::endl;
    }
}

// Método para visualizar todas las inscripciones de los profesores
void GestorProfesor::visualizarInscripcionesProfesor() const {
    if (plazasInscritasProfesor.empty()) {
        std::cout << "No hay inscripciones para el profesor." << std::endl;
    } else {
        std::cout << "Plazas inscritas para el profesor:" << std::endl;
        for (const auto& plaza : plazasInscritasProfesor) {
            std::cout << "- " << plaza << std::endl;
        }
    }
}
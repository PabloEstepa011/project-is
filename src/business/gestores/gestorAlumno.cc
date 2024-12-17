#include "gestorAlumno.h"
#include <iostream>
#include <vector>

// Constructor por defecto
GestorAlumno::GestorAlumno() {
    // Inicialización de atributos si es necesario
}

// Método para inscribir una plaza
void GestorAlumno::inscribirPlaza(const std::string& plaza) {
    plazasInscritas.push_back(plaza);
    std::cout << "Plaza " << plaza << " inscrita correctamente." << std::endl;
}

// Método para anular una plaza
void GestorAlumno::anularPlaza(const std::string& plaza) {

}

// Método para confirmar una plaza
void GestorAlumno::confirmarPlaza(const std::string& plaza) {
   
}

// Método para visualizar todas las inscripciones
void GestorAlumno::visualizarInscripciones() const {
    if (plazasInscritas.empty()) {
        std::cout << "No hay inscripciones." << std::endl;
    } else {
        std::cout << "Plazas inscritas:" << std::endl;
        for (const auto& plaza : plazasInscritas) {
            std::cout << "- " << plaza << std::endl;
        }
    }
}

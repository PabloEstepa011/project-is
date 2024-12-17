#include "menuProfesor.h"
#include <iostream>

// Constructor
MenuProfesor::MenuProfesor() {
    // Inicialización de variables o cualquier proceso que sea necesario
    profesorNombre = "Carlos Gómez";  // Ejemplo de inicialización
}

// Mostrar el menú principal del profesor
void MenuProfesor::mostrarMenu() const {
    std::cout << "==== Menu Profesor ====" << std::endl;
    std::cout << "1. Inscribir Plaza" << std::endl;
    std::cout << "2. Anular Plaza" << std::endl;
    std::cout << "3. Confirmar Plaza" << std::endl;
    std::cout << "4. Visualizar Inscripciones" << std::endl;
    std::cout << "Seleccione una opción: ";
}

// Inscribir plaza
void MenuProfesor::inscribirPlazaProfesor() {
    std::cout << profesorNombre << " ha inscrito una plaza." << std::endl;
}

// Anular plaza
void MenuProfesor::anularPlazaProfesor() {
    std::cout << profesorNombre << " ha anulado una plaza." << std::endl;
}

// Confirmar plaza
void MenuProfesor::confirmarPlazaProfesor() {
    std::cout << profesorNombre << " ha confirmado una plaza." << std::endl;
}

// Visualizar inscripciones
void MenuProfesor::visualizarInscripcionesProfesor() {
    std::cout << profesorNombre << " está visualizando sus inscripciones." << std::endl;
}

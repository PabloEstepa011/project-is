#include "menuAlumno.h"
#include <iostream>

// Constructor
MenuAlumno::MenuAlumno() {
    // Inicialización de variables o cualquier proceso que sea necesario
}

// Mostrar el menú principal del alumno
void MenuAlumno::mostrarMenu() const {
    std::cout << "==== Menu Alumno ====" << std::endl;
    std::cout << "1. Inscribir Plaza" << std::endl;
    std::cout << "2. Anular Plaza" << std::endl;
    std::cout << "3. Confirmar Plaza" << std::endl;
    std::cout << "4. Visualizar Inscripciones" << std::endl;
    std::cout << "Seleccione una opción: ";
}

// Inscribir plaza
void MenuAlumno::inscribirPlaza() {
    std::cout << alumnoNombre << " ha inscrito una plaza." << std::endl;
}

// Anular plaza
void MenuAlumno::anularPlaza() {
    std::cout << alumnoNombre << " ha anulado una plaza." << std::endl;
}

// Confirmar plaza
void MenuAlumno::confirmarPlaza() {
    std::cout << alumnoNombre << " ha confirmado una plaza." << std::endl;
}

// Visualizar inscripciones
void MenuAlumno::visualizarInscripciones() {
    std::cout << alumnoNombre << " está visualizando sus inscripciones." << std::endl;
}

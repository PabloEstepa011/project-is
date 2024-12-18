#include "menuAlumno.h"
#include <iostream>

// Constructor
MenuAlumno::MenuAlumno() {
    // Inicialización de variables o cualquier proceso que sea necesario
}

// Mostrar el menú principal del alumno
void MenuAlumno::mostrarMenu(){
    int opcion;
    std::cout << "==== Menu Alumno ====" << std::endl;
    std::cout << "1. Visualizar inscripciones\n";
    std::cout << "2. Inscribir plaza\n";
    std::cout << "3. Anular plaza\n";
    std::cout << "Seleccione una opción: ";

    switch (opcion) {
        case 1:
            //gestorAlumno.visualizarInscripciones();
            break;
        case 2:
            //gestorAlumno.inscribirPlaza();
            break;
        case 3:
            //gestorAlumno.anularPlaza();
            break;
        default:
            std::cout << "Error, elige otra opcion" << std::endl;
    }
}
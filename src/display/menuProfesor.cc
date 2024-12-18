#include "menuProfesor.h"
#include <iostream>

// Constructor
MenuProfesor::MenuProfesor() {
    // Inicialización de variables o cualquier proceso que sea necesario
}

// Mostrar el menú principal del profesor
void MenuProfesor::mostrarMenu(){
    int opcion;
    std::cout << "==== Menu Profesor ====" << std::endl;
    std::cout << "1. Visualizar inscripciones\n";
    std::cout << "2. Inscribir plaza\n";
    std::cout << "3. Anular plaza\n";
    std::cout << "Seleccione una opción: ";

    switch (opcion) {
        case 1:
            //gestorProfesor.visualizarInscripciones();
            break;
        case 2:
            //gestorProfesor.inscribirPlaza();
            break;
        case 3:
            //gestorProfesor.anularPlaza();
            break;
        default:
    }
}
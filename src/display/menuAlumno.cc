#include "menuAlumno.h"
#include <iostream>
#include "../business/gestores/gestorAlumno.cc" // Controlador para Alumno

void menuAlumno() {
    int opcion;

    do {
        std::cout << "\n--- Menú Alumno ---\n";
        std::cout << "1. Inscribirse en una plaza\n";
        std::cout << "2. Anular inscripción\n";
        std::cout << "3. Confirmar plaza\n";
        std::cout << "4. Visualizar inscripciones\n";
        std::cout << "5. Salir\n";
        std::cout << "Elija una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Inscribiendo en una plaza...\n";
                inscribirPlaza(); // Llama a la función del controlador
                break;
            case 2:
                std::cout << "Anulando inscripción...\n";
                anularPlaza(); // Llama a la función del controlador
                break;
            case 3:
                std::cout << "Confirmando plaza...\n";
                confirmarPlaza(); // Llama a la función del controlador
                break;
            case 4:
                std::cout << "Visualizando inscripciones...\n";
                visualizarInscripciones(); // Llama a la función del controlador
                break;
            case 5:
                std::cout << "Saliendo del menú de alumno...\n";
                break;
            default:
                std::cout << "Opción no válida. Por favor, intente de nuevo.\n";
        }
    } while (opcion != 5);
}
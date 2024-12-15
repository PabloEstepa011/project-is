#include <iostream>
#include <limits>
#include "../business/gestores/gestorProfesor.cc"
#include "menuProfesor.h" // Inclusión del archivo de cabecera

void mostrarMenuProfesor() {
    int opcion;

    do {
        std::cout << "\n========== Menu Profesor ==========\n";
        std::cout << "1. Inscribir Plaza\n";
        std::cout << "2. Anular Plaza\n";
        std::cout << "3. Confirmar Plaza\n";
        std::cout << "4. Visualizar Inscripciones\n";
        std::cout << "5. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        // Validación de la entrada
        if (std::cin.fail()) {
            std::cin.clear(); // Limpia el error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada no válida. Intente de nuevo.\n";
            continue;
        }

        switch (opcion) {
            case 1:
                std::cout << "\n--- Inscribir Plaza ---\n";
                inscribirPlazaProfesor(); // Función del gestorProfesor.cc
                break;

            case 2:
                std::cout << "\n--- Anular Plaza ---\n";
                anularPlazaProfesor(); // Función del gestorProfesor.cc
                break;

            case 3:
                std::cout << "\n--- Confirmar Plaza ---\n";
                confirmarPlazaProfesor(); // Función del gestorProfesor.cc
                break;

            case 4:
                std::cout << "\n--- Visualizar Inscripciones ---\n";
                visualizarInscripcionesProfesor(); // Función del gestorProfesor.cc
                break;

            case 5:
                std::cout << "Saliendo del Menu Profesor...\n";
                break;

            default:
                std::cout << "Opción no válida. Por favor, intente de nuevo.\n";
                break;
        }

    } while (opcion != 5);
}
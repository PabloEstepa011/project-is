#include "menuAdministrador.h"

// Constructor
MenuAdministrador::MenuAdministrador() {}

// Método principal: Mostrar el menú y manejar opciones
void MenuAdministrador::mostrarMenu() {
    int opcion;

    do {
        std::cout << "\n==== MENU ADMINISTRADOR ====\n";
        std::cout << "1. Gestionar Alumnos\n";
        std::cout << "2. Gestionar Profesores\n";
        std::cout << "3. Gestionar Planes de Convalidación\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                gestionarAlumnos();
                break;
            case 2:
                gestionarProfesores();
                break;
            case 3:
                gestionarPlanesConvalidacion();
                break;
            case 4:
                std::cout << "Saliendo del menú administrador...\n";
                break;
            default:
                std::cout << "Opción inválida. Inténtelo de nuevo.\n";
                break;
        }
    } while (opcion != 4);
}

// Método para gestionar alumnos
void MenuAdministrador::gestionarAlumnos() {
    int opcion;
    std::cout << "\n==== GESTIONAR ALUMNOS ====\n";
    std::cout << "1. Añadir alumno\n";
    std::cout << "2. Borrar alumno\n";
    std::cout << "3. Listar alumno\n";
    std::cout << "Seleccione una opción: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            //gestorAlumno.añadirAlumno();
            break;
        case 2:
            //gestorAlumno.mostrarAlumnos();
            break;
        case 3:
            //gestorAlumno.eliminarAlumno();
            break;
        default:
            std::cout << "Opción inválida.\n";
    }
}

// Método para gestionar profesores
void MenuAdministrador::gestionarProfesores() {
    int opcion;
    std::cout << "\n==== GESTIONAR PROFESORES ====\n";
    std::cout << "1. Añadir profesor\n";
    std::cout << "2. Borrar profesor\n";
    std::cout << "3. Listar profesor\n";
    std::cout << "Seleccione una opción: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            //gestorProfesor.añadirProfesor();
            break;
        case 2:
            //gestorProfesor.mostrarProfesores();
            break;
        case 3:
            //gestorProfesor.eliminarProfesor();
            break;
        default:
            std::cout << "Opción inválida.\n";
    }
}
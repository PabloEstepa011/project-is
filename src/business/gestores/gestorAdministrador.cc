#include "gestorAdministrador.h"
#include <iostream>

// Constructor
GestorAdministrador::GestorAdministrador() {}

// Método para gestionar alumnos
void GestorAdministrador::gestionarAlumnos() {
    int opcion;
    std::cout << "\n==== GESTIONAR ALUMNOS ====\n";
    std::cout << "1. Añadir Alumno\n";
    std::cout << "2. Mostrar Alumnos\n";
    std::cout << "3. Eliminar Alumno\n";
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
void GestorAdministrador::gestionarProfesores() {
    int opcion;
    std::cout << "\n==== GESTIONAR PROFESORES ====\n";
    std::cout << "1. Añadir Profesor\n";
    std::cout << "2. Mostrar Profesores\n";
    std::cout << "3. Eliminar Profesor\n";
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

// Método para gestionar intercambios
void GestorAdministrador::gestionarIntercambios() {
    std::cout << "\n==== GESTIONAR INTERCAMBIOS ====\n";
    std::cout << "Funcionalidad en desarrollo...\n";
}

// Método para gestionar planes de convalidación
void GestorAdministrador::gestionarPlanesConvalidacion() {
    std::cout << "\n==== GESTIONAR PLANES DE CONVALIDACION ====\n";
    std::cout << "Funcionalidad en desarrollo...\n";
}

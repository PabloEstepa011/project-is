#include "gestorAlumno.h"
#include <iostream>
#include <fstream>
#include <string>

const std::string archivoAlumnos = "../data/bbdd/alumnos.txt";

// Función para inscribir a un alumno en una plaza
void inscribirPlaza() {
    std::ofstream file(archivoAlumnos, std::ios::app); // Abre en modo añadir
    if (!file.is_open()) {
        std::cerr << "Error al abrir el archivo de alumnos.\n";
        return;
    }

    std::string nombre, curso;
    std::cout << "Ingrese el nombre del alumno: ";
    std::cin.ignore(); // Limpiar buffer
    std::getline(std::cin, nombre);

    std::cout << "Ingrese el curso o grado: ";
    std::getline(std::cin, curso);

    file << nombre << ";" << curso << "\n";
    file.close();

    std::cout << "Inscripción realizada con éxito.\n";
}

// Función para anular la inscripción de un alumno
void anularPlaza() {
    std::ifstream inputFile(archivoAlumnos);
    std::ofstream tempFile("temp.txt");

    if (!inputFile.is_open() || !tempFile.is_open()) {
        std::cerr << "Error al abrir los archivos.\n";
        return;
    }

    std::string nombre, linea;
    std::cout << "Ingrese el nombre del alumno a anular: ";
    std::cin.ignore();
    std::getline(std::cin, nombre);

    bool encontrado = false;
    while (std::getline(inputFile, linea)) {
        if (linea.find(nombre) == std::string::npos) {
            tempFile << linea << "\n"; // Copia líneas que no coincidan
        } else {
            encontrado = true;
        }
    }

    inputFile.close();
    tempFile.close();

    // Reemplazar archivo original
    std::remove(archivoAlumnos.c_str());
    std::rename("temp.txt", archivoAlumnos.c_str());

    if (encontrado) {
        std::cout << "Inscripción anulada correctamente.\n";
    } else {
        std::cout << "No se encontró el alumno.\n";
    }
}

// Función para confirmar una plaza
void confirmarPlaza() {
    std::cout << "Función confirmar plaza aún no implementada.\n";
    // Aquí podrías agregar lógica para actualizar un estado de confirmación
}

// Función para visualizar inscripciones
void visualizarInscripciones() {
    std::ifstream file(archivoAlumnos);
    if (!file.is_open()) {
        std::cerr << "Error al abrir el archivo de alumnos.\n";
        return;
    }

    std::string linea;
    std::cout << "\n--- Lista de Inscripciones ---\n";
    while (std::getline(file, linea)) {
        std::cout << linea << "\n";
    }
    file.close();
}
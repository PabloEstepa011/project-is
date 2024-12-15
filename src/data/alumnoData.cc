#include "alumnoData.h"
#include <fstream>
#include <iostream>

const std::string archivoAlumnos = "../data/bbdd/alumnos.txt";

// Función para guardar un alumno en el archivo
void AlumnoData::guardarAlumno(const Alumno& alumno) {
    std::ofstream file(archivoAlumnos, std::ios::app); // Modo añadir
    if (!file.is_open()) {
        std::cerr << "Error al abrir el archivo para escritura.\n";
        return;
    }

    file << alumno.nombre << ";" << alumno.curso << "\n";
    file.close();
    std::cout << "Alumno guardado correctamente.\n";
}

// Función para leer todos los alumnos del archivo
std::vector<Alumno> AlumnoData::leerAlumnos() {
    std::vector<Alumno> alumnos;
    std::ifstream file(archivoAlumnos);

    if (!file.is_open()) {
        std::cerr << "Error al abrir el archivo para lectura.\n";
        return alumnos;
    }

    std::string linea;
    while (std::getline(file, linea)) {
        size_t pos = linea.find(';');
        if (pos != std::string::npos) {
            Alumno alumno;
            alumno.nombre = linea.substr(0, pos);
            alumno.curso = linea.substr(pos + 1);
            alumnos.push_back(alumno);
        }
    }

    file.close();
    return alumnos;
}

// Función para eliminar un alumno por nombre
bool AlumnoData::eliminarAlumno(const std::string& nombre) {
    std::ifstream inputFile(archivoAlumnos);
    std::ofstream tempFile("temp.txt");

    if (!inputFile.is_open() || !tempFile.is_open()) {
        std::cerr << "Error al abrir los archivos.\n";
        return false;
    }

    std::string linea;
    bool encontrado = false;

    while (std::getline(inputFile, linea)) {
        if (linea.find(nombre) == std::string::npos) {
            tempFile << linea << "\n"; // Copia líneas que no coinciden
        } else {
            encontrado = true;
        }
    }

    inputFile.close();
    tempFile.close();

    // Reemplazar el archivo original
    std::remove(archivoAlumnos.c_str());
    std::rename("temp.txt", archivoAlumnos.c_str());

    if (encontrado) {
        std::cout << "Alumno eliminado correctamente.\n";
    } else {
        std::cout << "Alumno no encontrado.\n";
    }

    return encontrado;
}
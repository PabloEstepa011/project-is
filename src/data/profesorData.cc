#include "profesorData.h"
#include <fstream>
#include <iostream>
#include <sstream>

// Constructor: inicializa el nombre del archivo
ProfesorData::ProfesorData(const std::string& archivo) : archivoProfesores(archivo) {}

// Método para cargar los profesores desde el archivo
std::vector<Profesor> ProfesorData::cargarProfesores() {
    std::vector<Profesor> profesores;
    std::ifstream archivo(archivoProfesores);

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo de profesores: " << archivoProfesores << "\n";
        return profesores;
    }

    std::string linea;
    while (std::getline(archivo, linea)) {
        std::istringstream stream(linea);
        Profesor profesor;
        stream >> profesor.nombre >> profesor.apellido >> profesor.idPlaza >> profesor.estado;
        profesores.push_back(profesor);
    }

    archivo.close();
    return profesores;
}

// Método para guardar los profesores en el archivo
void ProfesorData::guardarProfesores(const std::vector<Profesor>& profesores) {
    std::ofstream archivo(archivoProfesores);

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo para escribir: " << archivoProfesores << "\n";
        return;
    }

    for (const auto& profesor : profesores) {
        archivo << profesor.nombre << " " << profesor.apellido << " "
                << profesor.idPlaza << " " << profesor.estado << "\n";
    }

    archivo.close();
}

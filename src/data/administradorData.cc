#include "administradorData.h"
#include <fstream>
#include <iostream>
#include <sstream>

// Constructor: inicializa el nombre del archivo
AdministradorData::AdministradorData() {}

// Método para cargar los administradores desde el archivo
std::vector<Administrador> AdministradorData::cargarAdministradores() {
    std::vector<Administrador> administradores;
    std::ifstream archivo(archivoAdministradores);

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo de administradores: " << archivoAdministradores << "\n";
        return administradores;
    }

    std::string linea;
    while (std::getline(archivo, linea)) {
        std::istringstream stream(linea);
        Administrador administrador;
        stream >> administrador.nombre >> administrador.apellido >> administrador.usuario >> administrador.contrasena;
        administradores.push_back(administrador);
    }

    archivo.close();
    return administradores;
}

// Método para guardar los administradores en el archivo
void AdministradorData::guardarAdministradores(const std::vector<Administrador>& administradores) {
    std::ofstream archivo(archivoAdministradores);

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo para escribir: " << archivoAdministradores << "\n";
        return;
    }

    for (const auto& administrador : administradores) {
        archivo << administrador.nombre << " " << administrador.apellido << " "
                << administrador.usuario << " " << administrador.contrasena << "\n";
    }

    archivo.close();
}

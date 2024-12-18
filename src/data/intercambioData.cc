#include "intercambioData.h"
#include <fstream>
#include <iostream>
#include <sstream>

// Constructor: inicializa el nombre del archivo
IntercambioData::IntercambioData(const std::string& archivo) : archivoIntercambios(archivo) {}

// Método para cargar los intercambios desde el archivo
std::vector<Intercambio> IntercambioData::cargarIntercambios() {
    /* std::vector<Intercambio> intercambios;
    std::ifstream archivo(archivoIntercambios);

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo de intercambios: " << archivoIntercambios << "\n";
        return intercambios;
    }

    std::string linea;
    while (std::getline(archivo, linea)) {
        std::istringstream stream(linea);
        Intercambio intercambio;
        stream >> intercambio.id >> intercambio.origen >> intercambio.destino 
               >> intercambio.fecha >> intercambio.estado;
        intercambios.push_back(intercambio);
    }

    archivo.close();
    return intercambios; */
}

// Método para guardar los intercambios en el archivo
void IntercambioData::guardarIntercambios(const std::vector<Intercambio>& intercambios) {
    /* std::ofstream archivo(archivoIntercambios);

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo para escribir: " << archivoIntercambios << "\n";
        return;
    }

    for (const auto& intercambio : intercambios) {
        archivo << intercambio.id << " " << intercambio.origen << " " << intercambio.destino << " "
                << intercambio.fecha << " " << intercambio.estado << "\n";
    }

    archivo.close(); */
}

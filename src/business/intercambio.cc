#include "intercambio.h"
#include <iostream>

// Constructor
Intercambio::Intercambio(int plazas, int periodo_inscripcion, const std::string& universidad, int duracion)
    : plazas(plazas), periodo_inscripcion(periodo_inscripcion), universidad(universidad), duracion(duracion) {}

// Método para generar una lista base de periodos
void Intercambio::generarLista() {
    listaPeriodos.clear(); // Limpiar la lista actual
    for (int i = 1; i <= periodo_inscripcion; ++i) {
        listaPeriodos.push_back("Periodo " + std::to_string(i));
    }
    std::cout << "Lista de periodos generada correctamente.\n";
}

// Método para agregar un periodo específico
void Intercambio::agregarPeriodos(const std::string& periodo) {
    listaPeriodos.push_back(periodo);
    std::cout << "Periodo '" << periodo << "' agregado correctamente.\n";
}

// Getters
int Intercambio::getPlazas() const {
    return plazas;
}

int Intercambio::getPeriodoInscripcion() const {
    return periodo_inscripcion;
}

std::string Intercambio::getUniversidad() const {
    return universidad;
}

int Intercambio::getDuracion() const {
    return duracion;
}

// Método para mostrar todos los periodos
void Intercambio::mostrarPeriodos() const {
    std::cout << "Lista de periodos para la universidad " << universidad << ":\n";
    for (const auto& periodo : listaPeriodos) {
        std::cout << "- " << periodo << "\n";
    }
}

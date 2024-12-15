#include "planConvalidacionData.h"
#include <fstream>
#include <iostream>
#include <sstream>

// Constructor: inicializa el nombre del archivo
PlanConvalidacionData::PlanConvalidacionData(const std::string& archivo) : archivoPlanesConvalidacion(archivo) {}

// Método para cargar los planes de convalidación desde el archivo
std::vector<PlanConvalidacion> PlanConvalidacionData::cargarPlanesConvalidacion() {
    std::vector<PlanConvalidacion> planesConvalidacion;
    std::ifstream archivo(archivoPlanesConvalidacion);

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo de planes de convalidación: " << archivoPlanesConvalidacion << "\n";
        return planesConvalidacion;
    }

    std::string linea;
    while (std::getline(archivo, linea)) {
        std::istringstream stream(linea);
        PlanConvalidacion plan;
        stream >> plan.idPlan >> plan.asignaturaOrigen >> plan.asignaturaDestino >> plan.estado;
        planesConvalidacion.push_back(plan);
    }

    archivo.close();
    return planesConvalidacion;
}

// Método para guardar los planes de convalidación en el archivo
void PlanConvalidacionData::guardarPlanesConvalidacion(const std::vector<PlanConvalidacion>& planesConvalidacion) {
    std::ofstream archivo(archivoPlanesConvalidacion);

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo para escribir: " << archivoPlanesConvalidacion << "\n";
        return;
    }

    for (const auto& plan : planesConvalidacion) {
        archivo << plan.idPlan << " " << plan.asignaturaOrigen << " " << plan.asignaturaDestino << " "
                << plan.estado << "\n";
    }

    archivo.close();
}

#include "planConvalidacion.h"
#include <iostream>

// Constructor
PlanConvalidacion::PlanConvalidacion(const std::string& asignatura, const std::string& universidad,
                                     const std::string& ID, const std::string& grado)
    : asignatura(asignatura), universidad(universidad), ID(ID), grado(grado) {}

// Getters
std::string PlanConvalidacion::getAsignatura() const {
    return asignatura;
}

std::string PlanConvalidacion::getUniversidad() const {
    return universidad;
}

std::string PlanConvalidacion::getID() const {
    return ID;
}

std::string PlanConvalidacion::getGrado() const {
    return grado;
}

// Setters
void PlanConvalidacion::setAsignatura(const std::string& nuevaAsignatura) {
    asignatura = nuevaAsignatura;
}

void PlanConvalidacion::setUniversidad(const std::string& nuevaUniversidad) {
    universidad = nuevaUniversidad;
}

void PlanConvalidacion::setID(const std::string& nuevoID) {
    ID = nuevoID;
}

void PlanConvalidacion::setGrado(const std::string& nuevoGrado) {
    grado = nuevoGrado;
}

// Método para mostrar la información
void PlanConvalidacion::mostrarInformacion() const {
    std::cout << "Plan de Convalidación:\n";
    std::cout << "Asignatura: " << asignatura << "\n";
    std::cout << "Universidad: " << universidad << "\n";
    std::cout << "ID: " << ID << "\n";
    std::cout << "Grado: " << grado << "\n";
}

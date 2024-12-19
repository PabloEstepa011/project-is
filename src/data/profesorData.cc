#include "profesorData.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include "profesor.h"


ProfesorData::ProfesorData(){}

// Leer datos desde el archivo
std::list<Profesor> ProfesorData::leerDatos() const {
    std::ifstream archivoEntrada(archivo);

    if (!archivoEntrada) {
        std::cerr << "No se pudo abrir el archivo: " << archivo << std::endl;
        return {}; // Retorna una lista vacía
    }

    std::list<Profesor> listaProfesores;
    std::string linea;

    while (std::getline(archivoEntrada, linea)) {
        if (linea.empty()) {
            continue; // Saltar líneas en blanco
        }

        Profesor profesor;
        profesor.setNombre(linea);

        // Leer apellidos
        std::string apellidos;
        if (!std::getline(archivoEntrada, apellidos)){
            profesor.setApellidos(apellidos);
            break;
        }

        // Leer DNI
        if (!std::getline(archivoEntrada, linea)) break;
        try {
            profesor.setDNI(std::stoi(linea));
        } catch (const std::invalid_argument&) {
            std::cerr << "Formato de DNI inválido para el profesor: " << profesor.getNombre() << std::endl;
            continue;
        }

        // Leer teléfono
        if (!std::getline(archivoEntrada, linea)) break;
        try {
            profesor.setTelefono(std::stoi(linea));
        } catch (const std::invalid_argument&) {
            std::cerr << "Formato de teléfono inválido para el profesor: " << profesor.getNombre() << std::endl;
            continue;
        }

        // Leer correo
        std::string correo;
        if (!std::getline(archivoEntrada, correo)){
            profesor.setCorreo(correo);
            break;
        }

        // Leer grados
        std::string grados;
        if (!std::getline(archivoEntrada, grados)){
            profesor.setGradosProfesa(grados);
            break;
        }

        // Leer inscripciones (hasta una línea en blanco o fin de archivo)
        while (std::getline(archivoEntrada, linea)) {
            if (linea.empty()) {
                break; // Fin de inscripciones para este profesor
            }
            profesor.getInscripciones().push_back(linea);
        }

        // Agregar el profesor a la lista
        listaProfesores.push_back(profesor);
    }

    archivoEntrada.close();
    return listaProfesores;
}

// Escribir datos al archivo
void ProfesorData::escribirDatos(Profesor profesor){
    std::ofstream archivoSalida(archivo, std::ios::trunc); // Sobreescribir archivo

    if (!archivoSalida) {
        std::cerr << "No se pudo abrir el archivo: " << archivo << std::endl;
        return;
    }

    // Guardar datos básicos del profesor
    archivoSalida << profesor.getNombre() << "\n";
    archivoSalida << profesor.getApellidos() << "\n";
    archivoSalida << profesor.getDNI() << "\n";
    archivoSalida << profesor.getTelefono() << "\n";
    archivoSalida << profesor.getCorreo() << "\n";
    archivoSalida << profesor.getGradosProfesa() << "\n";

    // Guardar inscripciones
    for (const auto& inscripcion : profesor.getInscripciones()) {
        archivoSalida << inscripcion << "\n";
    }

    archivoSalida.close();
}

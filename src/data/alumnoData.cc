#include "alumnoData.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <list>
#include "alumno.h"


// Constructor
AlumnoData::AlumnoData() {}

// Leer datos desde el archivo
std::list<Alumno> AlumnoData::leerDatos() const {
    std::ifstream archivoEntrada(archivo);

    if (!archivoEntrada) {
        std::cerr << "No se pudo abrir el archivo: " << archivo << std::endl;
        return {}; // Retorna una lista vacía
    }

    std::list<Alumno> listaAlumnos;
    std::string linea;

    while (std::getline(archivoEntrada, linea)) {
        if (linea.empty()) {
            continue; // Saltar líneas en blanco
        }

        Alumno alumno;
        alumno.setNombre(linea);

        // Leer apellidos
        std::string apellidos;
        if (!std::getline(archivoEntrada, apellidos)){
            alumno.setApellidos(apellidos);
            break;
        } 

        // Leer DNI
        if (!std::getline(archivoEntrada, linea)) break;
        try {
            alumno.setDNI(std::stoi(linea));
        } catch (const std::invalid_argument&) {
            std::cerr << "Formato de DNI inválido para el alumno: " << alumno.getNombre() << std::endl;
            continue;
        }

        // Leer teléfono
        if (!std::getline(archivoEntrada, linea)) break;
        try {
            alumno.setTelefono(std::stoi(linea));
        } catch (const std::invalid_argument&) {
            std::cerr << "Formato de teléfono inválido para el alumno: " << alumno.getNombre() << std::endl;
            continue;
        }

        // Leer cursoGrado
        if (!std::getline(archivoEntrada, linea)) break;
        try {
            alumno.setCursoGrado(std::stoi(linea));
        } catch (const std::invalid_argument&) {
            std::cerr << "Formato de cursoGrado inválido para el alumno: " << alumno.getNombre() << std::endl;
            continue;
        }

        // Leer correo
        std::string correo;
        if (!std::getline(archivoEntrada, correo)){
            alumno.setCorreo(correo);
            break;
        }

        // Leer grados
        std::string grados;
        if (!std::getline(archivoEntrada, grados)){
            alumno.setGradosMatriculado(grados);
            break;
        }

        // Leer inscripciones (hasta una línea en blanco o fin de archivo)
        while (std::getline(archivoEntrada, linea)) {
            if (linea.empty()) {
                break; // Fin de inscripciones para este alumno
            }
            alumno.getInscripciones().push_back(linea);
        }

        // Agregar el alumno a la lista
        listaAlumnos.push_back(alumno);
    }

    archivoEntrada.close();
    return listaAlumnos;
}

// Escribir datos al archivo
bool AlumnoData::escribirDatos(Alumno alumno){
    std::ofstream archivoSalida(archivo, std::ios::app); // Abrir en modo append

    if (!archivoSalida) {
        std::cerr << "No se pudo abrir el archivo para escribir: " << archivo << std::endl;
        return false;
    }

    archivoSalida << alumno.getNombre() << "\n";
    archivoSalida << alumno.getApellidos() << "\n";
    archivoSalida << alumno.getDNI() << "\n";
    archivoSalida << alumno.getTelefono() << "\n";
    archivoSalida << alumno.getCursoGrado() << "\n";
    archivoSalida << alumno.getCorreo() << "\n";
    archivoSalida << alumno.getGradosMatriculado() << "\n";

    for (std::string inscripcion : alumno.getInscripciones()) {
        archivoSalida << inscripcion << "\n";
    }

    archivoSalida << "\n"; // Línea en blanco para separar alumnos

    archivoSalida.close();
    return true;
}

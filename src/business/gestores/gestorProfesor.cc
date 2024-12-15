#include "gestorProfesor.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

// Estructura para manejar los datos de inscripción
struct InscripcionProfesor {
    std::string nombre;
    std::string apellido;
    int idPlaza;
    std::string estado; // "Inscrito", "Anulado", "Confirmado"
};

// Vector para almacenar las inscripciones en memoria
std::vector<InscripcionProfesor> inscripciones;

// Función para cargar las inscripciones desde el archivo
void cargarInscripcionesProfesor() {
    inscripciones.clear(); // Limpiar antes de cargar
    std::ifstream archivo("data/bbdd/profesores.txt");
    if (!archivo) {
        std::cerr << "Error al abrir el archivo de inscripciones de profesores.\n";
        return;
    }

    std::string linea;
    while (std::getline(archivo, linea)) {
        std::istringstream stream(linea);
        InscripcionProfesor inscripcion;
        stream >> inscripcion.nombre >> inscripcion.apellido >> inscripcion.idPlaza >> inscripcion.estado;
        inscripciones.push_back(inscripcion);
    }

    archivo.close();
}

// Función para guardar las inscripciones en el archivo
void guardarInscripcionesProfesor() {
    std::ofstream archivo("data/bbdd/profesores.txt");
    if (!archivo) {
        std::cerr << "Error al abrir el archivo para guardar inscripciones.\n";
        return;
    }

    for (const auto& inscripcion : inscripciones) {
        archivo << inscripcion.nombre << " " << inscripcion.apellido << " " 
                << inscripcion.idPlaza << " " << inscripcion.estado << "\n";
    }

    archivo.close();
}

// Implementación de inscribir plaza
void inscribirPlazaProfesor() {
    cargarInscripcionesProfesor();

    InscripcionProfesor nuevaInscripcion;
    std::cout << "Ingrese el nombre del profesor: ";
    std::cin >> nuevaInscripcion.nombre;
    std::cout << "Ingrese el apellido del profesor: ";
    std::cin >> nuevaInscripcion.apellido;
    std::cout << "Ingrese el ID de la plaza: ";
    std::cin >> nuevaInscripcion.idPlaza;

    nuevaInscripcion.estado = "Inscrito";
    inscripciones.push_back(nuevaInscripcion);
    guardarInscripcionesProfesor();

    std::cout << "Plaza inscrita exitosamente.\n";
}

// Implementación de anular plaza
void anularPlazaProfesor() {
    cargarInscripcionesProfesor();

    int idPlaza;
    std::cout << "Ingrese el ID de la plaza a anular: ";
    std::cin >> idPlaza;

    bool encontrado = false;
    for (auto& inscripcion : inscripciones) {
        if (inscripcion.idPlaza == idPlaza && inscripcion.estado == "Inscrito") {
            inscripcion.estado = "Anulado";
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        guardarInscripcionesProfesor();
        std::cout << "Plaza anulada exitosamente.\n";
    } else {
        std::cout << "No se encontró una plaza inscrita con el ID proporcionado.\n";
    }
}

// Implementación de confirmar plaza
void confirmarPlazaProfesor() {
    cargarInscripcionesProfesor();

    int idPlaza;
    std::cout << "Ingrese el ID de la plaza a confirmar: ";
    std::cin >> idPlaza;

    bool encontrado = false;
    for (auto& inscripcion : inscripciones) {
        if (inscripcion.idPlaza == idPlaza && inscripcion.estado == "Inscrito") {
            inscripcion.estado = "Confirmado";
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        guardarInscripcionesProfesor();
        std::cout << "Plaza confirmada exitosamente.\n";
    } else {
        std::cout << "No se encontró una plaza inscrita con el ID proporcionado.\n";
    }
}

// Implementación de visualizar inscripciones
void visualizarInscripcionesProfesor() {
    cargarInscripcionesProfesor();

    std::cout << "\nLista de Inscripciones de Profesores:\n";
    for (const auto& inscripcion : inscripciones) {
        std::cout << "Nombre: " << inscripcion.nombre
                  << ", Apellido: " << inscripcion.apellido
                  << ", ID Plaza: " << inscripcion.idPlaza
                  << ", Estado: " << inscripcion.estado << "\n";
    }
}

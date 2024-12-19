#include "gestorAdministrador.h"
#include "alumnoData.h"
#include "profesorData.h"
#include <iostream>
#include <string>
#include <list>
#include <algorithm>

// Constructor
GestorAdministrador::GestorAdministrador()
    : alumno("", "", 0, 0, "", "", 0), profesor("", "", 0, 0, "", "") {}

// Función para añadir un alumno
void GestorAdministrador::añadirAlumno() {
    AlumnoData alumnoData;
    std::string nombre, apellidos, correo, gradosMatriculado;
    int DNI, telefono, cursoGrado;

    std::cout << "Introduce los datos del alumno:\n";
    std::cout << "Nombre: "; std::getline(std::cin, nombre);
    std::cout << "Apellidos: "; std::getline(std::cin, apellidos);
    std::cout << "DNI: "; std::cin >> DNI;
    std::cout << "Teléfono: "; std::cin >> telefono;
    std::cin.ignore(); // Consumir el salto de línea
    std::cout << "Correo: "; std::getline(std::cin, correo);
    std::cout << "Grados matriculados: "; std::getline(std::cin, gradosMatriculado);
    std::cout << "Curso del grado: "; std::cin >> cursoGrado;
    std::cin.ignore(); // Consumir el salto de línea

    Alumno nuevoAlumno(nombre, apellidos, DNI, telefono, correo, gradosMatriculado, cursoGrado);
    alumnoData.escribirDatos(nuevoAlumno); // Guardar el nuevo alumno
    std::cout << "Alumno añadido correctamente.\n";
}

// Función para borrar un alumno
void GestorAdministrador::borrarAlumno() {
    AlumnoData alumnoData;
    int DNI;
    std::cout << "Introduce el DNI del alumno que deseas borrar: ";
    std::cin >> DNI;
    std::cin.ignore(); // Consumir el salto de línea

    // Leer todos los alumnos y eliminar el que tenga el DNI dado
    std::list<Alumno> alumnos = alumnoData.leerDatos();
    size_t original_size = alumnos.size();
    alumnos.remove_if([DNI](const Alumno& a) { return a.getDNI() == DNI; });

    for(Alumno alumno: alumnos){
        if (alumnos.size() < original_size) {
            alumnoData.escribirDatos(alumno); // Actualizar el archivo
            std::cout << "Alumno borrado correctamente.\n";
        } else {
            std::cout << "No se encontró un alumno con ese DNI.\n";
        }
    }
}

// Función para listar alumnos
void GestorAdministrador::listarAlumno() {
    AlumnoData alumnoData;
    std::list<Alumno> alumnos = alumnoData.leerDatos();
    if (alumnos.empty()) {
        std::cout << "No hay alumnos registrados.\n";
    } else {
        std::cout << "Lista de alumnos registrados:\n";
        for (const auto& alumno : alumnos) {
            std::cout << "Nombre: " << alumno.getNombre()
                      << ", Apellidos: " << alumno.getApellidos()
                      << ", DNI: " << alumno.getDNI()
                      << ", Teléfono: " << alumno.getTelefono() << '\n';
        }
    }
}

// Función para añadir un profesor
void GestorAdministrador::añadirProfesor() {
    ProfesorData profesorData;
    std::string nombre, apellidos, correo, gradosProfesa;
    int DNI, telefono;

    std::cout << "Introduce los datos del profesor:\n";
    std::cout << "Nombre: "; std::getline(std::cin, nombre);
    std::cout << "Apellidos: "; std::getline(std::cin, apellidos);
    std::cout << "DNI: "; std::cin >> DNI;
    std::cout << "Teléfono: "; std::cin >> telefono;
    std::cin.ignore(); // Consumir el salto de línea
    std::cout << "Correo: "; std::getline(std::cin, correo);
    std::cout << "Grados que profesa: "; std::getline(std::cin, gradosProfesa);

    Profesor nuevoProfesor(nombre, apellidos, DNI, telefono, correo, gradosProfesa);
    profesorData.escribirDatos(nuevoProfesor); // Guardar el nuevo profesor
    std::cout << "Profesor añadido correctamente.\n";
}

// Función para borrar un profesor
void GestorAdministrador::borrarProfesor() {
    ProfesorData profesorData;
    int DNI;
    std::cout << "Introduce el DNI del profesor que deseas borrar: ";
    std::cin >> DNI;
    std::cin.ignore(); // Consumir el salto de línea

    // Leer todos los profesores y eliminar el que tenga el DNI dado
    std::list<Profesor> profesores = profesorData.leerDatos();
    size_t original_size = profesores.size();
    profesores.remove_if([DNI](const Profesor& p) { return p.getDNI() == DNI; });
    
    for(Profesor profesor : profesores){
        if (profesores.size() < original_size) {
            profesorData.escribirDatos(profesor); // Actualizar el archivo
            std::cout << "Profesor borrado correctamente.\n";
        } else {
            std::cout << "No se encontró un profesor con ese DNI.\n";
        }
    }
}

// Función para listar profesores
void GestorAdministrador::listarProfesor() {
    ProfesorData profesorData;    
    std::list<Profesor> profesores = profesorData.leerDatos();
    if (profesores.empty()) {
        std::cout << "No hay profesores registrados.\n";
    } else {
        std::cout << "Lista de profesores registrados:\n";
        for (const auto& profesor : profesores) {
            std::cout << "Nombre: " << profesor.getNombre()
                      << ", Apellidos: " << profesor.getApellidos()
                      << ", DNI: " << profesor.getDNI()
                      << ", Teléfono: " << profesor.getTelefono() << '\n';
        }
    }
}
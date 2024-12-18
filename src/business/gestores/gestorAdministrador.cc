#include "gestorAdministrador.h"
#include "alumno.h"         // Se incluye porque se crean instancias de Alumno
#include "alumnoData.h"     // Para interactuar con la capa de datos
#include <iostream>
#include <string>

// Constructor
GestorAdministrador::GestorAdministrador() {}

void GestorAdministrador::añadirAlumno() {
    std::string nombre;
    std::string apellidos;
    int DNI;
    int telefono;
    std::string correo;
    std::string grados_matriculado;
    int curso_grado;

    std::cout << "\n--- Añadir Alumno ---\n";
    std::cout << "Nombre: ";
    std::getline(std::cin, nombre);

    std::cout << "Apellidos: ";
    std::getline(std::cin, apellidos);

    std::cout << "DNI: ";
    std::cin >> DNI;

    std::cout << "Teléfono: ";
    std::cin >> telefono;
    std::cin.ignore(); // Limpia el buffer de entrada

    std::cout << "Correo: ";
    std::getline(std::cin, correo);

    std::cout << "Grados Matriculado: ";
    std::getline(std::cin, grados_matriculado);

    std::cout << "Curso del Grado: ";
    std::cin >> curso_grado;
    std::cin.ignore();

    // Crear instancia del alumno
    Alumno nuevoAlumno(nombre, apellidos, DNI, telefono, correo, grados_matriculado, curso_grado);

    // Llamada a la capa data para guardar los datos
    AlumnoData::guardarAlumno(nuevoAlumno);
    std::cout << "Alumno añadido correctamente.\n";
}

void GestorAdministrador::borrarAlumno() {
    int DNI;

    std::cout << "\n--- Borrar Alumno ---\n";
    std::cout << "DNI del alumno a borrar: ";
    std::cin >> DNI;
    std::cin.ignore(); // Limpia el buffer de entrada

    bool resultado = AlumnoData::eliminarAlumno(DNI);

    if (resultado) {
        std::cout << "Alumno eliminado correctamente.\n";
    } else {
        std::cout << "No se encontró un alumno con el DNI proporcionado.\n";
    }
}

void GestorAdministrador::listarAlumno() {
    std::cout << "\n--- Listar Alumnos ---\n";

    auto listaAlumnos = AlumnoData::obtenerAlumnos();

    if (listaAlumnos.empty()) {
        std::cout << "No hay alumnos registrados.\n";
        return;
    }

    for (const auto& alumno : listaAlumnos) {
        std::cout << "Nombre: " << alumno.getNombre() << " " << alumno.getApellidos() << "\n"
                  << "DNI: " << alumno.getDNI() << "\n"
                  << "Teléfono: " << alumno.getTelefono() << "\n"
                  << "Correo: " << alumno.getCorreo() << "\n"
                  << "Grados Matriculado: " << alumno.getGradosMatriculado() << "\n"
                  << "Curso del Grado: " << alumno.getCursoGrado() << "\n";
        std::cout << "----------------------------\n";
    }
}

void GestorAdministrador::añadirProfesor() {
    std::string nombre;
    std::string apellidos;
    int DNI;
    int telefono;
    std::string correo;
    std::string departamento;

    std::cout << "\n--- Añadir Profesor ---\n";
    std::cout << "Nombre: ";
    std::getline(std::cin, nombre);

    std::cout << "Apellidos: ";
    std::getline(std::cin, apellidos);

    std::cout << "DNI: ";
    std::cin >> DNI;

    std::cout << "Teléfono: ";
    std::cin >> telefono;
    std::cin.ignore(); // Limpia el buffer de entrada

    std::cout << "Correo: ";
    std::getline(std::cin, correo);

    std::cout << "Departamento: ";
    std::getline(std::cin, departamento);

    // Crear instancia del profesor y guardar usando el gestorProfesor
    gestorProfesor.añadirProfesor(nombre, apellidos, DNI, telefono, correo, departamento);
    std::cout << "Profesor añadido correctamente.\n";
}

void GestorAdministrador::borrarProfesor() {
    int DNI;

    std::cout << "\n--- Borrar Profesor ---\n";
    std::cout << "DNI del profesor a borrar: ";
    std::cin >> DNI;
    std::cin.ignore(); // Limpia el buffer de entrada

    bool resultado = gestorProfesor.borrarProfesor(DNI);

    if (resultado) {
        std::cout << "Profesor eliminado correctamente.\n";
    } else {
        std::cout << "No se encontró un profesor con el DNI proporcionado.\n";
    }
}

void GestorAdministrador::listarProfesor() {
    std::cout << "\n--- Listar Profesores ---\n";

    auto listaProfesores = gestorProfesor.listarProfesores();

    if (listaProfesores.empty()) {
        std::cout << "No hay profesores registrados.\n";
        return;
    }

    for (const auto& profesor : listaProfesores) {
        std::cout << "Nombre: " << profesor.getNombre() << " " << profesor.getApellidos() << "\n"
                  << "DNI: " << profesor.getDNI() << "\n"
                  << "Teléfono: " << profesor.getTelefono() << "\n"
                  << "Correo: " << profesor.getCorreo() << "\n"
                  << "Departamento: " << profesor.getDepartamento() << "\n";
        std::cout << "----------------------------\n";
    }
}
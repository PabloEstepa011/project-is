#include "alumnoData.h"

// Constructor que toma la ruta del archivo donde se guardarán los datos
AlumnoData::AlumnoData(const std::string& archivo) : archivoAlumnos(archivo) {
    // Puedes agregar alguna lógica para verificar si el archivo existe o inicializarlo si no existe
    std::ifstream archivoTest(archivoAlumnos);
    if (!archivoTest.is_open()) {
        std::ofstream nuevoArchivo(archivoAlumnos);
        if (!nuevoArchivo.is_open()) {
            std::cerr << "No se pudo crear el archivo: " << archivoAlumnos << std::endl;
        } else {
            std::cout << "Archivo creado con éxito: " << archivoAlumnos << std::endl;
        }
    }
    archivoTest.close();
}

// Método estático para guardar un alumno
void AlumnoData::guardarAlumno(const Alumno& alumno) {
    std::ofstream archivo(archivoAlumnos);
    if (archivo.is_open()) {
        archivo << alumno.nombre << "," << alumno.curso << std::endl;
        archivo.close();
    } else {
        std::cerr << "No se pudo abrir el archivo para guardar el alumno." << std::endl;
    }
}

// Método estático para leer todos los alumnos del archivo
std::vector<Alumno> AlumnoData::leerAlumnos() {
    std::vector<Alumno> alumnos;
    std::ifstream archivo(archivoAlumnos);
    std::string linea;
    
    while (std::getline(archivo, linea)) {
        size_t separador = linea.find(',');
        if (separador != std::string::npos) {
            Alumno alumno;
            alumno.nombre = linea.substr(0, separador);
            alumno.curso = linea.substr(separador + 1);
            alumnos.push_back(alumno);
        }
    }
    archivo.close();
    return alumnos;
}

// Método estático para eliminar un alumno por nombre
bool AlumnoData::eliminarAlumno(const std::string& nombre) {
    std::vector<Alumno> alumnos = leerAlumnos();
    bool encontrado = false;
    
    // Filtramos los alumnos para no incluir el que queremos eliminar
    alumnos.erase(
        std::remove_if(alumnos.begin(), alumnos.end(), [&nombre](const Alumno& alumno) {
            return alumno.nombre == nombre;
        }),
        alumnos.end()
    );

    // Si el tamaño de los alumnos es distinto, significa que eliminamos al alumno
    if (alumnos.size() != leerAlumnos().size()) {
        std::ofstream archivo(archivoAlumnos);
        for (const Alumno& alumno : alumnos) {
            archivo << alumno.nombre << "," << alumno.curso << std::endl;
        }
        archivo.close();
        encontrado = true;
    }
    return encontrado;
}
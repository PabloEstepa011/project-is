#ifndef ALUMNO_DATA_H
#define ALUMNO_DATA_H

#include <string>
#include <vector>

// Estructura para representar un alumno
struct Alumno {
    std::string nombre;
    std::string curso;
};

class AlumnoData {
public:
    // Guardar un alumno en el archivo
    static void guardarAlumno(const Alumno& alumno);

    // Leer todos los alumnos del archivo
    static std::vector<Alumno> leerAlumnos();

    // Eliminar un alumno por nombre
    static bool eliminarAlumno(const std::string& nombre);
};

#endif // ALUMNO_DATA_H

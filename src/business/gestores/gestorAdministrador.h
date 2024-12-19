#ifndef GESTORADMINISTRADOR_H
#define GESTORADMINISTRADOR_H

#include "alumno.h"
#include "profesor.h"

class GestorAdministrador {
public:
    // Constructor
    GestorAdministrador();

    // Métodos de gestion alumnos
    void añadirAlumno();
    void borrarAlumno();
    void listarAlumno();

    void añadirProfesor();
    void borrarProfesor();
    void listarProfesor();

private:
    // Atributos: Gestores necesarios para las operaciones
    Alumno alumno;
    Profesor profesor;
    // Aquí pueden agregarse más gestores para intercambios y planes
};

#endif // GESTORADMINISTRADOR_H
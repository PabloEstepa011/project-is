#ifndef GESTORADMINISTRADOR_H
#define GESTORADMINISTRADOR_H

#include "gestorAlumno.h"
#include "gestorProfesor.h"
#include "../intercambio.h"
#include "../planConvalidacion.h"

class GestorAdministrador {
public:
    // Constructor
    GestorAdministrador();

    // Métodos de gestión
    void gestionarAlumnos();
    void gestionarProfesores();
    void gestionarIntercambios();
    void gestionarPlanesConvalidacion();

private:
    // Atributos: Gestores necesarios para las operaciones
    inscribirPlaza()
    GestorProfesor gestorProfesor;
    // Aquí pueden agregarse más gestores para intercambios y planes
};

#endif // GESTORADMINISTRADOR_H

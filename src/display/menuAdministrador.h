#ifndef MENUADMINISTRADOR_H
#define MENUADMINISTRADOR_H

#include <iostream>
#include <string>
#include "business/gestores/gestorAlumno.h"
#include "business/gestores/gestorProfesor.h"
#include "business/intercambio.h"
#include "business/planConvalidacion.h"

class MenuAdministrador {
public:
    // Constructor
    MenuAdministrador();

    // Método principal para ejecutar el menú
    void mostrarMenu();

private:
    // Métodos privados para manejar opciones específicas
    void gestionarAlumnos();
    void gestionarProfesores();
    void gestionarPlanesConvalidacion();

    // Atributos: Gestores necesarios
    GestorAlumno gestorAlumno;
    GestorProfesor gestorProfesor;
};

#endif // MENUADMINISTRADOR_H

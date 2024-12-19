#ifndef MENUADMINISTRADOR_H
#define MENUADMINISTRADOR_H

#include <iostream>
#include <string>
#include "gestorAlumno.h"
#include "gestorProfesor.h"

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

#ifndef MENU_PROFESOR_H
#define MENU_PROFESOR_H

#include "business/gestores/gestorProfesor.h"

class MenuProfesor {
public:
    // Constructor
    MenuProfesor();

    // Método para mostrar el menú del alumno
    void mostrarMenu();

private:
    // Instancia de GestorAlumno para gestionar la información del alumno
    GestorProfesor gestorProfesor;
};

#endif // MENU_PROFESOR_H
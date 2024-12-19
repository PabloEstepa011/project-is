#ifndef MENU_ALUMNO_H
#define MENU_ALUMNO_H

#include "gestorAlumno.h"

class MenuAlumno {
public:
    // Constructor
    MenuAlumno();

    // Método para mostrar el menú del alumno
    void mostrarMenu();

private:
    // Instancia de GestorAlumno para gestionar la información del alumno
    GestorAlumno gestorAlumno;
};

#endif // MENU_ALUMNO_H
#ifndef MENU_ALUMNO_H
#define MENU_ALUMNO_H

#include <string>

class MenuAlumno {
public:
    // Constructor
    MenuAlumno();

    // Función que muestra el menú del alumno
    void mostrarMenu() const;

    // Otras funciones relacionadas con el menú del alumno
    void inscribirPlaza();
    void anularPlaza();
    void confirmarPlaza();
    void visualizarInscripciones();

private:
    // Puedes agregar variables privadas si es necesario, como datos de alumno
    std::string alumnoNombre;
};

#endif // MENU_ALUMNO_H
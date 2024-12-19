#ifndef PROFESORDATA_H
#define PROFESORDATA_H

#include "profesor.h"
#include <string>
#include <list>

class ProfesorData {
private:
    const std::string archivo = "bbdd/profesores.txt"; // Nombre del archivo

public:
    ProfesorData();

    // Métodos para leer y escribir datos
    std::list<Profesor> leerDatos() const;
    void escribirDatos(Profesor profesor);
};

#endif // PROFESORDATA_H

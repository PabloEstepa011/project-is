#ifndef PROFESORDATA_H
#define PROFESORDATA_H

#include "business/profesor.h"
#include <string>

class ProfesorData {
private:
    const std::string archivo = "bbdd/profesores.txt"; // Nombre del archivo

public:
    
    // Métodos para leer y escribir datos
    Profesor leerDatos() const;
    void escribirDatos(const Profesor& profesor) const;
};

#endif // PROFESORDATA_H

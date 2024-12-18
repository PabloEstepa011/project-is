#ifndef PROFESORDATA_H
#define PROFESORDATA_H

#include "Profesor.h"
#include <string>

class ProfesorData {
private:
    std::string archivo; // Nombre del archivo

public:
    explicit ProfesorData(const std::string& archivo);
    
    // Métodos para leer y escribir datos
    Profesor leerDatos() const;
    void escribirDatos(const Profesor& profesor) const;
};

#endif // PROFESORDATA_H

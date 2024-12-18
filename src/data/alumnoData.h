#ifndef ALUMNODATA_H
#define ALUMNODATA_H

#include "business/alumno.h"
#include <string>

class AlumnoData {
private:
    std::string archivo; // Nombre del archivo

public:
    explicit AlumnoData(const std::string& archivo);
    
    // Métodos para leer y escribir datos
    Alumno leerDatos() const;
    void escribirDatos(const Alumno& alumno) const;
};

#endif // ALUMNODATA_H

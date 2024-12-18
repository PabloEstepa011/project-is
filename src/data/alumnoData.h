#ifndef ALUMNODATA_H
#define ALUMNODATA_H

#include "../business/alumno.h"
#include <string>
#include <list>

class AlumnoData {
private:
    const std::string archivo = "bbdd/alumnos.txt"; // Nombre del archivo

public:
    explicit AlumnoData();
    
    // Métodos para leer y escribir datos
    std::list<Alumno> leerDatos() const;
    bool escribirDatos(Alumno alumno);

};

#endif // ALUMNODATA_H

#ifndef GESTORALUMNO_H
#define GESTORALUMNO_H

#include <string>
#include <iostream>
#include <business/alumno.h>

class GestorAlumno{
    public:
        GestorAlumno();

        void inscribirPlazaAlumno();
        void anularPlazaAlumno();
        void visualizarInscripcionesAlumno();

    private:
        Alumno alumno;

};

#endif // GESTORPROFESOR_H
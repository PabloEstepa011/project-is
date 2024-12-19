#ifndef GESTORALUMNO_H
#define GESTORALUMNO_H

#include "alumno.h"
#include <string>
#include <iostream>


class GestorAlumno{
    public:
        GestorAlumno();

        void inscribirPlaza();
        void anularPlaza();
        void visualizarInscripciones();

    private:
        Alumno alumno;

};

#endif // GESTORPROFESOR_H
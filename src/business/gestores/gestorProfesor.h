#ifndef GESTORPROFESOR_H
#define GESTORPROFESOR_H

#include <string>
#include <iostream>
#include <business/profesor.h>

class GestorProfesor{
    public:
        GestorProfesor();

        void inscribirPlazaProfesor();
        void anularPlazaProfesor();
        void visualizarInscripcionesProfesor();

    private:
        Profesor profesor;

};

#endif // GESTORPROFESOR_H
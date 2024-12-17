#ifndef MENUPROFESOR_H
#define MENUPROFESOR_H

#include <string>

class MenuProfesor {
public:
    // Constructor
    MenuProfesor();

    // Método para mostrar el menú del profesor
    void mostrarMenu() const;

    // Métodos adicionales relacionados con el menú del profesor
    void inscribirPlazaProfesor();
    void anularPlazaProfesor();
    void confirmarPlazaProfesor();
    void visualizarInscripcionesProfesor();

private:
    // Puedes agregar variables privadas si es necesario
    std::string profesorNombre;
};

#endif // MENUPROFESOR_H
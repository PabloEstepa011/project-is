#ifndef GESTORPROFESOR_H
#define GESTORPROFESOR_H

#include <string>
#include <vector>

// Clase GestorProfesor para gestionar las acciones relacionadas con los profesores
class GestorProfesor {
public:
    // Constructor por defecto
    GestorProfesor();

    // Funciones para gestionar las inscripciones de los profesores
    void inscribirPlazaProfesor(const std::string& plaza);
    void anularPlazaProfesor(const std::string& plaza);
    void confirmarPlazaProfesor(const std::string& plaza);
    void visualizarInscripcionesProfesor() const;

private:
    // Atributos que almacenan las inscripciones o cualquier otro dato necesario
    // (por ejemplo, lista de plazas inscritas)
    std::vector<std::string> plazasInscritasProfesor;
};

#endif // GESTORPROFESOR_H
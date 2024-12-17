#ifndef GESTOR_ALUMNO_H
#define GESTOR_ALUMNO_H

#include <string>
#include <vector>

// Clase GestorAlumno para gestionar las acciones relacionadas con los alumnos
class GestorAlumno {
public:
    // Constructor por defecto
    GestorAlumno();

    // Funciones para gestionar las inscripciones
    void inscribirPlaza(const std::string& plaza);
    void anularPlaza(const std::string& plaza);
    void confirmarPlaza(const std::string& plaza);
    void visualizarInscripciones() const;

private:
    // Atributos que almacenan las inscripciones o cualquier otro dato necesario
    // (por ejemplo, lista de plazas inscritas)
    // Esto puede ser un contenedor de tipo lista o vector, dependiendo de tu necesidad.
    std::vector<std::string> plazasInscritas;
};

#endif // GESTOR_ALUMNO_H
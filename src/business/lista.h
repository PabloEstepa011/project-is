#ifndef LISTA_H
#define LISTA_H

#include <string>
#include <vector>

class Lista {
private:
    int ocupacion;            // Ocupación actual de la lista
    int ocupacion_max;        // Ocupación máxima permitida
    std::vector<std::string> inscripciones; // Lista de inscripciones

public:
    // Constructor
    Lista(int ocupacion_max);

    // Métodos específicos
    void moverInscripcion(const std::string& inscripcion);

    // Métodos getters
    int getOcupacion() const;
    int getOcupacionMax() const;
    void mostrarInscripciones() const;

    // Método para agregar inscripciones
    void agregarInscripcion(const std::string& inscripcion);
};

#endif // LISTA_H

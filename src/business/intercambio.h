#ifndef INTERCAMBIO_H
#define INTERCAMBIO_H

#include <string>
#include <vector>

class Intercambio {
private:
    int plazas;
    int periodo_inscripcion;
    std::string universidad;
    int duracion;
    std::vector<std::string> listaPeriodos; // Para almacenar periodos de inscripción.

public:
    // Constructor
    Intercambio(int plazas, int periodo_inscripcion, const std::string& universidad, int duracion);

    // Métodos específicos
    void generarLista();
    void agregarPeriodos(const std::string& periodo);

    // Métodos getters
    int getPlazas() const;
    int getPeriodoInscripcion() const;
    std::string getUniversidad() const;
    int getDuracion() const;

    // Método para mostrar los periodos de inscripción
    void mostrarPeriodos() const;
};

#endif // INTERCAMBIO_H

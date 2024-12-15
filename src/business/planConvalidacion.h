#ifndef PLANCONVALIDACION_H
#define PLANCONVALIDACION_H

#include <string>

class PlanConvalidacion {
private:
    std::string asignatura;  // Nombre de la asignatura
    std::string universidad; // Nombre de la universidad
    std::string ID;          // Identificador del plan de convalidación
    std::string grado;       // Nombre del grado académico

public:
    // Constructor
    PlanConvalidacion(const std::string& asignatura, const std::string& universidad,
                      const std::string& ID, const std::string& grado);

    // Getters
    std::string getAsignatura() const;
    std::string getUniversidad() const;
    std::string getID() const;
    std::string getGrado() const;

    // Setters
    void setAsignatura(const std::string& asignatura);
    void setUniversidad(const std::string& universidad);
    void setID(const std::string& ID);
    void setGrado(const std::string& grado);

    // Método para mostrar la información del plan
    void mostrarInformacion() const;
};

#endif // PLANCONVALIDACION_H

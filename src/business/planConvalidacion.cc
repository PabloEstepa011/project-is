#include <iostream>
#include <string>

using namespace std;

class PlanConvalidacion {
private:
    // Atributos
    string asignatura;
    string universidad;
    string grado;
    int ID; // Identificador único del plan de convalidación

public:
    // Constructor por defecto
    PlanConvalidacion() : ID(0) {}

    // Constructor parametrizado
    PlanConvalidacion(const string& asignatura, const string& universidad, const string& grado, int ID)
        : asignatura(asignatura), universidad(universidad), grado(grado), ID(ID) {}

    // Métodos setters
    void setAsignatura(const string& asignatura) { this->asignatura = asignatura; }
    void setUniversidad(const string& universidad) { this->universidad = universidad; }
    void setGrado(const string& grado) { this->grado = grado; }
    void setID(int ID) { this->ID = ID; }

    // Métodos getters
    string getAsignatura() const { return asignatura; }
    string getUniversidad() const { return universidad; }
    string getGrado() const { return grado; }
    int getID() const { return ID; }

};
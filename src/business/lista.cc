#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Lista {
private:
    // Atributos
    int ocupacion; // Número actual de inscripciones
    int ocupacion_max; // Número máximo permitido de inscripciones
    vector<string> inscripciones; // Lista de inscripciones

public:
    // Constructor por defecto
    Lista() : ocupacion(0), ocupacion_max(0) {}

    // Constructor parametrizado
    Lista(int ocupacion_max) : ocupacion(0), ocupacion_max(ocupacion_max) {}

    // Métodos setters
    void setOcupacion(int ocupacion) { this->ocupacion = ocupacion; }
    void setOcupacionMax(int ocupacion_max) { this->ocupacion_max = ocupacion_max; }
    void setInscripciones(const vector<string>& inscripciones) { this->inscripciones = inscripciones; }

    // Métodos getters
    int getOcupacion() const { return ocupacion; }
    int getOcupacionMax() const { return ocupacion_max; }
    vector<string> getInscripciones() const { return inscripciones; }

    // Métodos adicionales
    bool agregarInscripcion(const string& inscripcion) {
        if (ocupacion < ocupacion_max) {
            inscripciones.push_back(inscripcion);
            ++ocupacion;
            return true;
        } else {
            cout << "No se puede agregar la inscripción: cupo lleno.\n";
            return false;
        }
    }
};
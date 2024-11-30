#include <iostream>
#include <string>

using namespace std;

class Intercambio {
private:
    // Atributos
    int plazas;
    string periodo_inscripcion;
    string universidad;
    int duracion; // en meses, por ejemplo

public:
    // Constructor por defecto
    Intercambio() : plazas(0), duracion(0) {}

    // Constructor parametrizado
    Intercambio(int plazas, const string& periodo_inscripcion, const string& universidad, int duracion)
        : plazas(plazas), periodo_inscripcion(periodo_inscripcion), universidad(universidad), duracion(duracion) {}

    // Métodos setters
    void setPlazas(int plazas) { this->plazas = plazas; }
    void setPeriodoInscripcion(const string& periodo) { periodo_inscripcion = periodo; }
    void setUniversidad(const string& universidad) { this->universidad = universidad; }
    void setDuracion(int duracion) { this->duracion = duracion; }

    // Métodos getters
    int getPlazas() const { return plazas; }
    string getPeriodoInscripcion() const { return periodo_inscripcion; }
    string getUniversidad() const { return universidad; }
    int getDuracion() const { return duracion; }


};
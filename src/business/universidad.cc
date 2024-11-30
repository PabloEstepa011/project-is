#include <iostream>
#include <string>

using namespace std;

class Universidad {
private:
    // Atributos
    string correo;
    string telefono;

public:
    // Constructor por defecto
    Universidad() = default;

    // Constructor parametrizado
    Universidad(const string& correo, const string& telefono)
        : correo(correo), telefono(telefono) {}

    // Métodos setters
    void setCorreo(const string& correo) { this->correo = correo; }
    void setTelefono(const string& telefono) { this->telefono = telefono; }

    // Métodos getters
    string getCorreo() const { return correo; }
    string getTelefono() const { return telefono; }

};
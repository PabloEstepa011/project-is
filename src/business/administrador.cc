#include <iostream>
#include <string>

using namespace std;

class Administrador {
private:
    // Atributos
    string nombre;
    string apellidos;
    string telefono;
    string correo;

public:
    // Constructor por defecto
    Administrador() = default;

    // Constructor parametrizado
    Administrador(const string& nombre, const string& apellidos, const string& telefono, const string& correo)
        : nombre(nombre), apellidos(apellidos), telefono(telefono), correo(correo) {}

    // Métodos setters
    void setNombre(const string& nombre) { this->nombre = nombre; }
    void setApellidos(const string& apellidos) { this->apellidos = apellidos; }
    void setTelefono(const string& telefono) { this->telefono = telefono; }
    void setCorreo(const string& correo) { this->correo = correo; }

    // Métodos getters
    string getNombre() const { return nombre; }
    string getApellidos() const { return apellidos; }
    string getTelefono() const { return telefono; }
    string getCorreo() const { return correo; }

};
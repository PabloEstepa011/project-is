#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Alumno {
    private:
        // Atributos
        string nombre;
        string apellidos;
        string DNI;
        string telefono;
        string correo;
        vector<string> grados_matriculados;
        vector<int> curso_grados;
        vector<string> inscripciones;

    public:
        // Constructor por defecto
        Alumno() = default;

        // Constructor parametrizado
        Alumno(const string& nombre, const string& apellidos, const string& DNI,
            const string& telefono, const string& correo)
            : nombre(nombre), apellidos(apellidos), DNI(DNI), telefono(telefono), correo(correo) {}

        // Métodos setters
        void setNombre(const string& nombre) { this->nombre = nombre; }
        void setApellidos(const string& apellidos) { this->apellidos = apellidos; }
        void setDNI(const string& DNI) { this->DNI = DNI; }
        void setTelefono(const string& telefono) { this->telefono = telefono; }
        void setCorreo(const string& correo) { this->correo = correo; }
        void setGradosMatriculados(const vector<string>& grados) { grados_matriculados = grados; }
        void setCursoGrados(const vector<int>& cursos) { curso_grados = cursos; }
        void setInscripciones(const vector<string>& inscripciones) { this->inscripciones = inscripciones; }

        // Métodos getters
        string getNombre() const { return nombre; }
        string getApellidos() const { return apellidos; }
        string getDNI() const { return DNI; }
        string getTelefono() const { return telefono; }
        string getCorreo() const { return correo; }
        vector<string> getGradosMatriculados() const { return grados_matriculados; }
        vector<int> getCursoGrados() const { return curso_grados; }
        vector<string> getInscripciones() const { return inscripciones; }

};
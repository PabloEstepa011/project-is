#include <iostream>
#include <string>

using namespace std;

class Alumno {
private:
    string nombre;
    string apellidos;
    int edad;
    string matricula;

public:
    // Constructor por defecto
    Alumno() : nombre(""), apellidos(""), edad(0), matricula("") {}

    // Constructor parametrizado
    Alumno(const string& nombre, const string& apellidos, int edad, const string& matricula)
        : nombre(nombre), apellidos(apellidos), edad(edad), matricula(matricula) {}

    // Métodos setter
    void setNombre(const string& nombre) {
        this->nombre = nombre;
    }

    void setApellidos(const string& apellidos) {
        this->apellidos = apellidos;
    }

    void setEdad(int edad) {
        if (edad >= 0) { // Validación para evitar edades negativas
            this->edad = edad;
        } else {
            cerr << "Error: La edad no puede ser negativa." << endl;
        }
    }

    void setMatricula(const string& matricula) {
        this->matricula = matricula;
    }

    // Métodos getter
    string getNombre() const {
        return nombre;
    }

    string getApellidos() const {
        return apellidos;
    }

    int getEdad() const {
        return edad;
    }

    string getMatricula() const {
        return matricula;
    }

    // Método para imprimir la información del alumno
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellidos: " << apellidos << endl;
        cout << "Edad: " << edad << " años" << endl;
        cout << "Matrícula: " << matricula << endl;
    }
};

int main() {
    // Crear un objeto Alumno
    Alumno alumno1("Juan", "Pérez López", 20, "A12345");
    alumno1.mostrarInformacion();

    // Modificar valores
    alumno1.setEdad(21);
    alumno1.setMatricula("B67890");
    cout << "\nInformación actualizada:" << endl;
    alumno1.mostrarInformacion();

    return 0;
}
#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>
#include <vector>

class Profesor {
private:
    std::string nombre;
    std::string apellidos;
    int DNI;
    int telefono;
    std::string correo;
    std::string grados_profesa;
    std::vector<std::string> inscripciones;

public:
    // Constructor
    Profesor(const std::string& nombre, const std::string& apellidos, int DNI, int telefono, 
             const std::string& correo, const std::string& grados_profesa);


    // Métodos getters
    std::string getNombre() const;
    std::string getApellidos() const;
    int getDNI() const;
    int getTelefono() const;
    std::string getCorreo() const;
    std::string getGradosProfesa() const;
};

#endif // PROFESOR_H

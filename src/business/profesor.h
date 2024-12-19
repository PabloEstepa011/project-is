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
    Profesor();
    // Constructor
    Profesor(const std::string& nombre, const std::string& apellidos, int DNI, int telefono, 
             const std::string& correo, const std::string& grados_profesa);


    // Métodos getters
    std::vector<std::string> getInscripciones(){
        return inscripciones;
    }
    std::string getNombre() const;
    std::string getApellidos() const;
    int getDNI() const;
    int getTelefono() const;
    std::string getCorreo() const;
    std::string getGradosProfesa() const;

        // Métodos setters
    void setNombre(const std::string& nombre);
    void setApellidos(const std::string& apellidos);
    void setDNI(int DNI);
    void setTelefono(int telefono);
    void setCorreo(const std::string& correo);
    void setGradosProfesa(const std::string& gradosprofesa);
    void setInscripciones(const std::vector<std::string>& inscripciones_);
};

#endif // PROFESOR_H

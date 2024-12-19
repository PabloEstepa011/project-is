#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H

#include <string>

class Universidad {
private:
    std::string correo;  // Correo de contacto de la universidad
    int telefono;        // Teléfono de contacto de la universidad

public:
    // Constructor
    Universidad(const std::string& correo, int telefono);

    // Métodos getters
    std::string getCorreo() const;
    int getTelefono() const;

    // Métodos setters
    void setCorreo(const std::string& correo);
    void setTelefono(int telefono);

    // Método para mostrar la información de la universidad
    void mostrarInformacion() const;
};

#endif // UNIVERSIDAD_H

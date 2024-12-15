#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <string>

class Administrador {
private:
    std::string nombre;     // Nombre del administrador
    std::string apellidos;  // Apellidos del administrador
    int telefono;           // Teléfono de contacto
    std::string correo;     // Correo electrónico del administrador

public:
    // Constructor
    Administrador(const std::string& nombre, const std::string& apellidos,
                  int telefono, const std::string& correo);

    // Getters
    std::string getNombre() const;
    std::string getApellidos() const;
    int getTelefono() const;
    std::string getCorreo() const;

    // Setters
    void setNombre(const std::string& nombre);
    void setApellidos(const std::string& apellidos);
    void setTelefono(int telefono);
    void setCorreo(const std::string& correo);

    // Métodos de gestión (simulados para la demostración)
    void gestionarPlan() const;
    void gestionarAlumno() const;
    void gestionarProfesor() const;
    void gestionarInter() const;
    void gestionarUni() const;

    // Mostrar información del administrador
    void mostrarInformacion() const;
};

#endif // ADMINISTRADOR_H

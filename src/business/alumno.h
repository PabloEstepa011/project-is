#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
#include <vector>

class Alumno {
private:
    std::string nombre;
    std::string apellidos;
    int DNI;
    int telefono;
    std::string correo;
    std::string grados_matriculado;
    int curso_grado;
    std::vector<std::string> inscripciones;

public:
    // Constructor
    Alumno(const std::string& nombre, const std::string& apellidos, int DNI, int telefono, 
           const std::string& correo, const std::string& grados_matriculado, int curso_grado);

    // Métodos de gestión de inscripciones
    void inscribirPlaza(const std::string& plaza);
    void anularPlaza(const std::string& plaza);
    void confirmarPlaza(const std::string& plaza);
    void visualizarInscripciones() const;

    // Métodos getters
    std::string getNombre() const;
    std::string getApellidos() const;
    int getDNI() const;
    int getTelefono() const;
    std::string getCorreo() const;
    std::string getGradosMatriculado() const;
    int getCursoGrado() const;
};

#endif // ALUMNO_H
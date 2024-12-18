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
    Alumno();
    // Constructor
    Alumno(const std::string& nombre, const std::string& apellidos, int DNI, int telefono, 
           const std::string& correo, const std::string& grados_matriculado, int curso_grado);

    // Métodos getters
    std::vector<std::string> getInscripciones(){
        return inscripciones;
    }
    std::string getNombre() const;
    std::string getApellidos() const;
    int getDNI() const;
    int getTelefono() const;
    std::string getCorreo() const;
    std::string getGradosMatriculado() const;
    int getCursoGrado() const;
      // Métodos setters
    void setNombre(const std::string& nombre);
    void setApellidos(const std::string& apellidos);
    void setDNI(int DNI);
    void setTelefono(int telefono);
    void setCorreo(const std::string& correo);
    void setGradosMatriculado(const std::string& gradosmatriculado);
    void setCursoGrado(int cursogrado);
    void setInscripciones(const std::vector<std::string>& inscripciones_);
};

#endif // ALUMNO_H
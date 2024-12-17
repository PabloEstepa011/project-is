#ifndef GESTORADMINISTRADOR_H
#define GESTORADMINISTRADOR_H


class GestorAdministrador {
public:
    // Constructor
    GestorAdministrador();

    // Métodos de gestion alumnos
    void añadirAlumno();
    void borrarAlumno();
    void listarAlumno();

    void añadirProfesor();
    void borrarProfesor();
    void listarProfesor();

private:
    // Atributos: Gestores necesarios para las operaciones
    GestorAlumno gestorAlumno;
    GestorProfesor gestorProfesor;
    // Aquí pueden agregarse más gestores para intercambios y planes
};

#endif // GESTORADMINISTRADOR_H

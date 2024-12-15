#ifndef PROFESORDATA_H
#define PROFESORDATA_H

#include <string>
#include <vector>

// Estructura para manejar la información del profesor
struct Profesor {
    std::string nombre;
    std::string apellido;
    int idPlaza;
    std::string estado; // "Inscrito", "Anulado", "Confirmado"
};

class ProfesorData {
public:
    // Constructor
    ProfesorData(const std::string& archivo);

    // Métodos
    std::vector<Profesor> cargarProfesores();
    void guardarProfesores(const std::vector<Profesor>& profesores);

private:
    std::string archivoProfesores; // Ruta del archivo
};

#endif // PROFESORDATA_H

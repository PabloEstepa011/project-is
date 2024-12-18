#ifndef ADMINISTRADORDATA_H
#define ADMINISTRADORDATA_H

#include <string>
#include <vector>

// Estructura para manejar la información del administrador
struct Administrador {
    std::string nombre;
    std::string apellido;
    std::string usuario;
    std::string contrasena;  // Guardar contraseñas de forma segura (en un sistema real, no es recomendable almacenar contraseñas como texto claro)
};

class AdministradorData {
public:
    // Constructor
    AdministradorData();

    // Métodos
    std::vector<Administrador> cargarAdministradores();
    void guardarAdministradores(const std::vector<Administrador>& administradores);

private:
    const std::string archivoAdministradores = "bbdd/admin.txt"; // Nombre del archivo
};

#endif // ADMINISTRADORDATA_H

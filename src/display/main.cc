#include <iostream>
#include <vector>
#include <string>
#include "alumnoData.h"
#include "profesorData.h"
#include "administradorData.h"
#include "intercambioData.h"
#include "planConvalidacionData.h"
#include "gestorAlumno.h"
#include "gestorProfesor.h"
#include "gestorAdministrador.h"
#include "menuAlumno.h"
#include "menuProfesor.h"
#include "menuAdministrador.h"

using namespace std;

int main() {
    // Definir los archivos de datos
    string archivoAlumnos = "data/bbdd/alumnos.txt";
    string archivoProfesores = "data/bbdd/profesores.txt";
    string archivoAdministradores = "data/bbdd/administradores.txt";
    string archivoIntercambios = "data/bbdd/intercambios.txt";
    string archivoPlanesConvalidacion = "data/bbdd/planesConvalidacion.txt";

    // Crear las instancias de las clases de gestión de datos
    AlumnoData alumnoData(archivoAlumnos);
    ProfesorData profesorData(archivoProfesores);
    AdministradorData administradorData(archivoAdministradores);
    IntercambioData intercambioData(archivoIntercambios);
    PlanConvalidacionData planConvalidacionData(archivoPlanesConvalidacion);

    // Crear las instancias de los gestores
    GestorAlumno gestorAlumno(alumnoData);
    GestorProfesor gestorProfesor(profesorData);
    GestorAdministrador gestorAdministrador(administradorData);

    // Crear los menús
    MenuAlumno menuAlumno(gestorAlumno);
    MenuProfesor menuProfesor(gestorProfesor);
    MenuAdministrador menuAdministrador(gestorAdministrador);

    // Variables para determinar el rol del usuario (Alumno, Profesor, Administrador)
    int opcionRol;
    
    cout << "Seleccione el rol:\n";
    cout << "1. Alumno\n";
    cout << "2. Profesor\n";
    cout << "3. Administrador\n";
    cout << "Opción: ";
    cin >> opcionRol;

    // Mostrar el menú según el rol seleccionado
    switch (opcionRol) {
        case 1: {
            menuAlumno.mostrarMenu();
            break;
        }
        case 2: {
            menuProfesor.mostrarMenu();
            break;
        }
        case 3: {
            menuAdministrador.mostrarMenu();
            break;
        }
        default:
            cout << "Opción inválida. Saliendo del programa.\n";
            break;
    }

    return 0;
}
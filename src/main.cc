#include <iostream>
#include <vector>
#include <string>
#include "alumnoData.h"
#include "profesorData.h"
#include "administradorData.h"
#include "intercambioData.h"
#include "planConvalidacionData.h"
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
    AlumnoData alumnoData;
    ProfesorData profesorData;
    AdministradorData administradorData;


    // Crear los menús
    MenuAlumno menuAlumno;
    MenuProfesor menuProfesor;
    MenuAdministrador menuAdministrador;

    // Variables para determinar el rol del usuario (Alumno, Profesor, Administrador)
    int opcionRol;
    
    cout << "Seleccione el rol al que pertence:\n";
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
};
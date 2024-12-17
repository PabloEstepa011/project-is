cmake_minimum_required(VERSION 3.10)
project(ProjectIS)

# Configuración del estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Definir directorios
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/src)

# Incluir directorios de cabecera (a partir de la raíz del directorio src)
include_directories(${INCLUDE_DIR})

# Definir todos los archivos fuente
set(SOURCES
    ${SRC_DIR}/display/main.cc
    ${SRC_DIR}/display/menuAdministrador.cc
    ${SRC_DIR}/display/menuAlumno.cc
    ${SRC_DIR}/display/menuProfesor.cc
    ${SRC_DIR}/business/gestores/gestorAdministrador.cc
    ${SRC_DIR}/business/gestores/gestorAlumno.cc
    ${SRC_DIR}/business/gestores/gestorProfesor.cc
    ${SRC_DIR}/business/administrador.cc
    ${SRC_DIR}/business/alumno.cc
    ${SRC_DIR}/business/profesor.cc
    ${SRC_DIR}/business/intercambio.cc
    ${SRC_DIR}/business/planConvalidacion.cc
    ${SRC_DIR}/business/universidad.cc
    ${SRC_DIR}/data/administradorData.cc
    ${SRC_DIR}/data/alumnoData.cc
    ${SRC_DIR}/data/profesorData.cc
    ${SRC_DIR}/data/intercambioData.cc
    ${SRC_DIR}/data/planConvalidacionData.cc
)

# Generar el ejecutable
add_executable(ProjectIS ${SOURCES})

# Copiar archivos de datos al directorio de salida
file(GLOB DATA_FILES "${SRC_DIR}/data/bbdd/*.txt")
foreach(file ${DATA_FILES})
    configure_file(${file} ${CMAKE_BINARY_DIR}/data/ COPYONLY)
endforeach()

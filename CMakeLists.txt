cmake_minimum_required(VERSION 3.10)
project(ProjectIS)

# Configuración del estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Definir directorios
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(DATA_DIR ${CMAKE_SOURCE_DIR}/data)

# Incluir directorio src para archivos de cabecera
include_directories(${SRC_DIR})

# Definir todos los archivos fuente
set(SOURCES
    ${SRC_DIR}/main.cc
    ${SRC_DIR}/menuAdministrador.cc
    ${SRC_DIR}/menuAlumno.cc
    ${SRC_DIR}/menuProfesor.cc
    ${SRC_DIR}/gestores/gestorAlumno.cc
    ${SRC_DIR}/gestores/gestorProfesor.cc
    ${SRC_DIR}/gestores/gestorAdministrador.cc
    ${SRC_DIR}/intercambio.cc
    ${SRC_DIR}/intercambioData.cc
    ${SRC_DIR}/planConvalidacion.cc
    ${SRC_DIR}/planConvalidacionData.cc
    ${SRC_DIR}/alumno.cc
    ${SRC_DIR}/alumnoData.cc
    ${SRC_DIR}/profesor.cc
    ${SRC_DIR}/profesorData.cc
    ${SRC_DIR}/administrador.cc
    ${SRC_DIR}/administradorData.cc
    ${SRC_DIR}/universidad.cc
    ${SRC_DIR}/lista.cc
)

# Generar el ejecutable
add_executable(ProjectIS ${SOURCES})

# Copiar archivos de datos al directorio de salida
file(GLOB DATA_FILES "${DATA_DIR}/*.txt")
foreach(file ${DATA_FILES})
    configure_file(${file} ${CMAKE_BINARY_DIR}/data/ COPYONLY)
endforeach()

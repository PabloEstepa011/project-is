# Definir los archivos fuente de los gestores
set(GESTORES_SOURCES
    gestorAdministrador.cc
    gestorAlumno.cc
    gestorProfesor.cc
)

# Crear la biblioteca estática para los gestores
add_library(gestores STATIC ${GESTORES_SOURCES})

# Incluir los archivos de cabecera necesarios
target_include_directories(gestores PUBLIC ${CMAKE_SOURCE_DIR}/src/business/gestores)

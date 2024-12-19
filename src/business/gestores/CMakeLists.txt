# Definir los archivos fuente de los gestores
set(GESTORES_SOURCES
    gestorAdministrador.cc
    gestorAlumno.cc
    gestorProfesor.cc
)

# Crear la biblioteca estática para los gestores
add_library(gestores ${GESTORES_SOURCES})

# Incluir directorios para los archivos de cabecera
target_include_directories(gestores PUBLIC ${PROJECT_SOURCE_DIR}/src/business
                                           ${PROJECT_SOURCE_DIR}/src/data)
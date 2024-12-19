# Definir los archivos fuente para la parte de visualización
set(DISPLAY_SOURCES
    menuAdministrador.cc
    menuAlumno.cc
    menuProfesor.cc
)

# Crear la biblioteca estática para la visualización
add_library(display ${DISPLAY_SOURCES})

target_include_directories(display PUBLIC ${PROJECT_SOURCE_DIR}/src/business
                                          ${PROJECT_SOURCE_DIR}/src/business/gestores
                                          ${PROJECT_SOURCE_DIR}/src/data)
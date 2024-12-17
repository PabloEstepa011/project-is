# Definir los archivos fuente para la parte de visualización
set(DISPLAY_SOURCES
    main.cc
    menuAdministrador.cc
    menuAlumno.cc
    menuProfesor.cc
)

# Crear la biblioteca estática para la visualización
add_library(display STATIC ${DISPLAY_SOURCES})

# Incluir directorios para los archivos de cabecera
target_include_directories(display PUBLIC ${CMAKE_SOURCE_DIR}/src/display)

# Definir los archivos fuente para la parte de visualización
set(DISPLAY_SOURCES
    menuAdministrador.cc
    menuAlumno.cc
    menuProfesor.cc
)

# Crear la biblioteca estática para la visualización
add_library(display STATIC ${DISPLAY_SOURCES})

# Incluir directorios para los archivos de cabecera
target_include_directories(display PUBLIC ${CMAKE_SOURCE_DIR}/src/display)

add_library(app main.cc)
target_link_libraries(app PUBLIC display gestores data business)

target_include_directories(app PUBLIC ${CMAKE_CURRENT_LIST_DIR}
                                          ${PROJECT_SOURCE_DIR}/src/business /src/data /src/business/gestores)

add_executable(main main.cc)
target_link_libraries(main PUBLIC app)
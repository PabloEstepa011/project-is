# Definir los archivos fuente para la parte de negocio
set(BUSINESS_SOURCES
    administrador.cc
    alumno.cc
    intercambio.cc
    lista.cc
    planConvalidacion.cc
    profesor.cc
    universidad.cc
)

# Crear la biblioteca estática para la parte de negocio
add_library(business STATIC ${BUSINESS_SOURCES})

# Incluir directorios para los archivos de cabecera
target_include_directories(business PUBLIC ${CMAKE_SOURCE_DIR}/src/business)

# Añadir subdirectorios de los gestores
add_subdirectory(gestores)

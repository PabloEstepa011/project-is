# Definir los archivos fuente para los datos
set(DATA_SOURCES
    administradorData.cc
    alumnoData.cc
    intercambioData.cc
    planConvalidacionData.cc
    profesorData.cc
)

# Crear la biblioteca estática para los datos
add_library(data STATIC ${DATA_SOURCES})

# Incluir directorios para los archivos de cabecera
target_include_directories(data PUBLIC ${CMAKE_SOURCE_DIR}/src/data)

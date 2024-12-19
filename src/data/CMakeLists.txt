# Definir los archivos fuente para los datos
set(DATA_SOURCES
    administradorData.cc
    alumnoData.cc
    intercambioData.cc
    planConvalidacionData.cc
    profesorData.cc
)

# Crear la biblioteca estática para los datos
add_library(data ${DATA_SOURCES})

target_include_directories(data PUBLIC ${PROJECT_SOURCE_DIR}/src/business)
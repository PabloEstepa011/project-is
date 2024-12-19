# Añadir subdirectorios para cada componente
add_subdirectory(display)
add_subdirectory(business)
add_subdirectory(data)

# Crear el ejecutable principal
add_executable(main main.cc)
target_link_libraries(main PUBLIC display gestores business data)

target_include_directories(main PUBLIC ${PROJECT_SOURCE_DIR}/src/data
                                      ${PROJECT_SOURCE_DIR}/src/display)
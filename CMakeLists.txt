cmake_minimum_required(VERSION 3.10) 
project(JsonGenerador C) # Setear el nombre del proyecto

set(CMAKE_C_STANDARD 99) # Establecer el estándar de C a C99

include_directories(src src/cJSON) #  Incluir directorios de encabezados

add_executable(main # Crear el ejecutable principal
    src/main.c
    src/json.c
    src/cJSON/cJSON.c
)

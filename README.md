 JsonGenerador C

Su objetivo principal es generar un archivo JSON utilizando la biblioteca cJSON en lenguaje C. 
Para lograrlo, se implementó una estructura de proyecto modular y se incluyeron tres sistemas de construcción diferentes: **Make**, **CMake** y **Meson**.

Estructura del Proyecto

La estructura del proyecto sigue buenas prácticas de organización, separando los archivos fuente (src/) de los archivos binarios (build/). Se incluyen los siguientes componentes:

- src/json.h: Encabezado que declara la función generar_json.
- src/json.c: Implementación de la función generar_json, que construye un objeto JSON con información personal.
- src/main.c: Archivo principal que invoca generar_json y muestra el resultado en consola.

 Compilación (se debe esperar que se genera un archivo json, que contenga los datos personales del estudiante que realizó este proyecto (mi persona, Daniel Brenes)

El proyecto puede ser compilado utilizando cualquiera de los siguientes métodos:

### Usando Make

bash
make
./build/main

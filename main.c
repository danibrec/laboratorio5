#include <stdio.h>
#include <stdlib.h>
#include "json.h"

int main() {
    char* json_string = generar_json(); // Llama a la función que genera el JSON

    if (json_string == NULL) {
        fprintf(stderr, "Error al generar el JSON.\n");    // Manejo de errores si la generación falla
        return 1;
    }

    printf("%s\n", json_string); // Imprime el JSON generado
    free(json_string);  // liberar memoria después de imprimir

    return 0;
}

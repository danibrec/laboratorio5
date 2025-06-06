#include <stdio.h>
#include <stdlib.h>
#include "json.h"
#include "cJSON.h" // Se asegura de que la biblioteca cJSON esté instalada



char* generar_json() { 
    cJSON *root = cJSON_CreateObject(); // Crea un nuevo objeto JSON
    if (root == NULL) return NULL;

    cJSON_AddStringToObject(root, "nombre", "Daniel Brenes Coto"); //  Añade un campo de tipo string
    cJSON_AddNumberToObject(root, "edad", 20); // Añade un campo de tipo number
    cJSON_AddStringToObject(root, "carnet", "C31288"); // Añade un campo de tipo string
    cJSON_AddBoolToObject(root, "estudiante activo", 1); // Añade un campo de tipo boolean 

    char *json_string = cJSON_Print(root); // Convierte el objeto JSON a una cadena de caracteres
    cJSON_Delete(root); // Libera la memoria del objeto JSON

    return json_string; // Retorna la cadena de caracteres JSON
}



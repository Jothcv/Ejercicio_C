#include <stdio.h>

int main() {
    FILE *fptr;
    char texto[100];

    // Abrir un archivo en modo escritura
    fptr = fopen("archivo.txt", "w");

    printf("Ingresa un texto: ");
    fgets(texto, sizeof(texto), stdin);

    // Escribir en el archivo
    fprintf(fptr, "%s", texto);

    // Cerrar el archivo
    fclose(fptr);

    // Leer del archivo
    fptr = fopen("archivo.txt", "r");

    if (fptr == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    printf("Contenido del archivo:\n");
    while (fgets(texto, sizeof(texto), fptr) != NULL) {
        printf("%s", texto);
    }

    fclose(fptr);

    return 0;
}

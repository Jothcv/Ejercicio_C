#include <stdio.h>

int main() {
    FILE *archivo;
    char palabra[50]; 
    archivo = fopen("palabras.txt", "w");
    for (int i = 0; i < 5; ++i) {
        printf("Introduce la palabra %d: ", i + 1);
        scanf("%s", palabra);
        fprintf(archivo, "%s\n", palabra);
    }
    fclose(archivo);
    printf("Se han escrito las palabras en el archivo palabra\n");
    return 0;
}

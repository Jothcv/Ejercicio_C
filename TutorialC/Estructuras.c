#include <stdio.h>

// Definición de una estructura llamada "Persona"
struct Persona {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    // Declaración de una variable de tipo "Persona"
    struct Persona persona1;

    // Asignación de valores a los miembros de la estructura
    printf("Ingresa el nombre: ");
    scanf("%s", persona1.nombre);
    printf("Ingresa la edad: ");
    scanf("%d", &persona1.edad);
    printf("Ingresa la altura (en metros): ");
    scanf("%f", &persona1.altura);

    // Acceso a los miembros de la estructura
    printf("\nDatos de la persona:\n");
    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);
    printf("Altura: %.2f metros\n", persona1.altura);

    return 0;
}

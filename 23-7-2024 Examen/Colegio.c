#include <stdio.h>
#include <string.h>

struct Maestro {
    int codigo;
    char nombre[1000];
};

struct Estudiante {
    int carnet;
    char nombre[1000];
    char apellido[1000];
};

void almacenarMaestros(struct Maestro maestros[], int numMaestros) {
    for (int i = 0; i < numMaestros; i++) {
        printf("ingrese el codigo de alumnos     %d: ", i + 1);
        scanf("%d", &maestros[i].codigo);
        printf("Ingrese el nombre del maestro %d: ", i + 1);
        scanf("%s", maestros[i].nombre);
    }
}

void almacenarEstudiantes(struct Estudiante estudiantes[], int numEstudiantes) {
    for (int i = 0; i < numEstudiantes; i++) {
        printf("ingresa el carnet del estudiante %d: ", i + 1);
        scanf("%d", &estudiantes[i].carnet);
        printf("ingresa el nombre del estu %d: ", i + 1);
        scanf("%s", estudiantes[i].nombre);
        printf("ingresa su apellido %d: ", i + 1);
        scanf("%s", estudiantes[i].apellido);
    }
}
 
void mostrarMaestros(struct Maestro maestros[], int numMaestros) {
    printf("\nimformacion de los maestros: \n");
    for (int i = 0; i < numMaestros; i++) {
        printf("codigo: %d, nombre: %s\n", maestros[i].codigo, maestros[i].nombre);
    }
}

void mostrarEstudiantes(struct Estudiante estudiantes[], int numEstudiantes) {
    printf("\nInformación de Estudiantes:\n");
    for (int i = 0; i < numEstudiantes; i++) {
        printf("carnet: %d, nombre: %s, apellido: %s\n", estudiantes[i].carnet, estudiantes[i].nombre, estudiantes[i].apellido);
    }
}

int main() {
    int numMaestros = 3;
    int numEstudiantes = 5;
    struct Maestro maestros[numMaestros];
    struct Estudiante estudiantes[numEstudiantes];
    almacenarMaestros(maestros, numMaestros);
    almacenarEstudiantes(estudiantes, numEstudiantes);
    mostrarMaestros(maestros, numMaestros);
    mostrarEstudiantes(estudiantes, numEstudiantes);
    return 0;
}


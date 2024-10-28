#include <stdio.h>

struct Estudiante {
    char nombre[50];
    char apellido[50];
    float notas[4];
    float promedio;
};

int main() {
    struct Estudiante estudiantes[5];

    for (int i = 0; i < 5; i++) {
        printf("Ingrese el nombre del estudiante \n: ");
        scanf("%s", estudiantes[i].nombre);
        printf("Ingrese el apellido del estudiante \n: ");
        scanf("%s", estudiantes[i].apellido);

        float sumaNotas = 0;
        for (int j = 0; j < 4; j++) {
            printf("Ingrese la nota %d del estudiante %d: ", j + 1, i + 1);
            scanf("%f", &estudiantes[i].notas[j]);
            sumaNotas += estudiantes[i].notas[j];
        }
        estudiantes[i].promedio = sumaNotas / 4;
    }

    int ganaron = 0;
    int perdieron = 0;

    for (int i = 0; i < 5; i++) {
        if (estudiantes[i].promedio >= 70) {
            ganaron++;
        } else if (estudiantes[i].promedio < 60) {
            perdieron++;
        }
    }
    printf("Estudiantes que ganaron: %d\n", ganaron);
    printf("Estudiantes que perdieron: %d\n", perdieron);
    return 0;
}

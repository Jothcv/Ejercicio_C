#include <stdio.h>

int main() {
    int numEstudiantes = 5;
    int numNotas = 3;
    double sumaNotas;
    double promedio;
    int i = 1;
    while (i <= numEstudiantes) 
    {
        sumaNotas = 0;
        printf("estudiante %d:\n", i);
        int j = 1;
        while (j <= numNotas) 
        {
            double nota;
            printf("ingrese la nota %d: ", j);
            scanf("%lf", &nota);
            if (nota < 0 || nota > 100) 
            {
                printf("Nota inválida. Ingrese una nota entre 0 y 100.\n");
                j--; 
            } else 
            {
                sumaNotas += nota;
            }
            j++;
        }
        promedio = sumaNotas / numNotas;
        printf("Promedio del estudiante %d: %.2lf\n", i, promedio);
        i++;
    }
    return 0;
}

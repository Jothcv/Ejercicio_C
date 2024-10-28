#include <stdio.h>

int main() {
    int numEstudiantes = 5;
    int numNotas = 3;
    double sumaNotas;
    double promedio;
    
    for (int i=1;i<= numEstudiantes;++i) 
    {
        sumaNotas = 0;
        printf("estudiante %d:\n",i);
        for (int j = 1; j <= numNotas; ++j) 
        {
            double nota;
            printf("ingresa la nota del estudiante %d ", j);
            scanf("%lf", &nota);
            sumaNotas += nota;
        }
        promedio = sumaNotas / numNotas;
        printf("Promedio del estudiante %d: %.2lf\n", i, promedio);
    }
    return 0;
}

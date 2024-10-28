#include <stdio.h>
struct alumno
{
    char nombre[10];
    char apellido[10];
    int edad;
    int notas[4];
    float promedio;
} A1={"juan","peres",15,40};


int main(){
    int suma;
    float promedio;
    
        printf("su nombre es: %s su apellido es: %s y su edad es: %d ",A1.nombre,A1.apellido,A1.edad);
        for (int i = 1; i <=4; i++)
        {
            printf("su nombre es: %s su apellido es: %s y su edad es: %d ",A1.nombre,A1.apellido,A1.edad);
            scanf("%d",&A1.notas[i]);
            suma=suma+A1.notas[i];
            A1.promedio=suma/4;
            printf("su promedio es: %.2f",A1.promedio);
        }
        
        return 0;
}
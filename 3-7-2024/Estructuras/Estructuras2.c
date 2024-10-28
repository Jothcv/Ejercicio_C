#include <stdio.h>
struct alumno
{
    char nombre[10];
    char apellido[10];
    int edad;
    int notas[4];
    float promedio;
};

int main(){
    int suma;
    struct alumno A1;
    printf("ingresa tu nombre: ");
    scanf("%s",&A1.nombre);
    printf("ingresa tu apellido: ");
    scanf("%s",&A1.apellido);
    printf("ingresa tu edad: ");
    scanf("%d",&A1.edad);
    printf("el nombre es: %s el apellido es: %s la edad es: %d \n",A1.nombre,A1.apellido,A1.edad);
    struct alumno A2;
    
    float promedio;
        for (int i = 1; i <=4; i++)
        {   
            printf("ingrese una nota: ");
            scanf("%d",&A1.notas[i]);
            suma=suma+A1.notas[i];
            A1.promedio=suma/4;
            printf("su promedio es: %.2f",A1.promedio);
        }

        for (int j = 1; j <=4; j++)
        {
            printf("ingrese otra nota: ");
            scanf("%d",&A2.notas[j]);
            suma=suma+A2.notas[j];
            A2.promedio=suma/4;
            printf("su promedio es: %.2f",A2.promedio);
        }
    
        return 0;
}
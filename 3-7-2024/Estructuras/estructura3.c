#include <stdio.h>
struct alumno
{
    char nombre[10];
    char apellido[10];
    int edad;
    int notas[4];
    float promedio;
} estudiante[5];

int main(){
    for(int i=1;i==5;i++){
        printf("ingrese el nombre");
        scanf("%s",&estudiante[i].nombre);
        printf("ingresa el apellido ");
        scanf("%s",&estudiante[i].apellido);
    }
        return 0;
} 
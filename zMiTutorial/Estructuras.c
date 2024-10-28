#include <stdio.h>
struct Persona
{
    char nombre[10];
    int edad;
};


int main(){
    struct Persona Persona1={"juan",25};
    printf("nombre: %s",Persona1.nombre);
    printf("edad: %d",Persona1.edad);

    return 0;
}
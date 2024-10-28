#include <stdio.h>
int main(){
    char nombre[100];
    char apellido[100];
    printf("ingrese su nombre: ");
    scanf("%s",&nombre);
    printf("ingrese su apellido: ");
    scanf("%s",&apellido);
    printf("%s",strcat(nombre,apellido));
    return 0;
}
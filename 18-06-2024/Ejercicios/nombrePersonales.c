#include <stdio.h>
int main(){
    {
        char nombre[100],apellido[100],direccion[100],Civil[100],genero[100];
        printf("su nombre es: ");
        scanf("%s",&nombre);
        printf("ingrese su apellido: ");
        scanf("%s",&apellido);
        printf("ingresa tu direccion: ");
        scanf("%s",&direccion);
        printf("ingresa tu estado civil: ");
        scanf("%s",&Civil);
        printf("ingrese su genero: ");
        scanf("%s",&genero);

        printf("sus datos personales son:\n ");
        printf("su nombre es: %s \n",nombre);
        printf("su apellido es: %s \n",apellido);
        printf("su direccion es: %s \n",direccion);
        printf("su estado civil es: %s \n",Civil);
        printf("su genero es: %s \n",genero);
        return 0;
    }
}
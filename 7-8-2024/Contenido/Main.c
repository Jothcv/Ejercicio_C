#include <stdio.h>
#include "Productos.h"

int main(){
    Productos Datos[cantidad];
    int Opcion;
    do
    {
        printf("1. Ingresar Productos \n");
        printf("2. Listado de productos \n");
        printf("3. Salir \n");
        printf("Elija una opcion :");
        scanf("%d",&Opcion);

    switch (Opcion)
    {
        case 1:
            guardar(Datos);
            break;
        case 2:
            listado(Datos);
        default:
            break;
        } 
    }while (Opcion!=3);
}
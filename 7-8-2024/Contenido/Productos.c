#include <stdio.h>
#include "Productos.h"
void guardar(Productos Datos[cantidad]){
    int contador;
    for(contador=0;contador<cantidad;contador++){
        printf("ingrese el codigo del producto: ");
        scanf("%d",&Datos[contador].codigo);
        printf("ingrese la description:");
        scanf("%s",&Datos[contador].descripcion);
        printf("ingrese el precio: ");
        scanf("%f",&Datos[contador].precio);
    }
}

void listado(Productos Datos[cantidad])
{
    int contador;
    for(contador=0;contador<cantidad;contador++){
        printf("codigo:%d\n",Datos[contador].codigo);
        printf("descripcion: %s\n",Datos[contador].descripcion);
        printf("Precio: %0.2f\n",Datos[contador].precio);
    }
}

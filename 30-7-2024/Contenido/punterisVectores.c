#include <stdio.h>
#include <stdlib.h>

int main(){
    int *puntero; 
    int vector, i;
    printf("Ingrese la cantidad elementos que desea ingresar ");
    scanf("%d",&vector);
    puntero=malloc(vector*sizeof(int));
    for ( i = 0; i < vector; i++)
    {
        printf("Ingrese valor ");
        scanf("%d",&puntero[i]);
    }
    
    printf("Contenido del vector \n");
    for ( i = 0; i < vector; i++)
    {
        printf("Los valores obtenidos son %d \n",puntero[i]);
    }
    free(puntero);
    return 0;
}


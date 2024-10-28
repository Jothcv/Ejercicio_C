#include <stdio.h>
#include <stdlib.h>


int main() {
    int filas, columnas;
    int **matriz;
    printf("¿Cuántas filas quiere? ");
    scanf("%d", &filas);
    printf("¿Cuántas columnas quiere? ");
    scanf("%d", &columnas);
    matriz = (int **)malloc(filas * sizeof(int *));
    for (int i = 0; i < filas; i++) 
    {
        matriz[i] = (int *)malloc(columnas * sizeof(int));
    }
    ingreso(matriz, filas, columnas);
    suma(matriz, filas, columnas);
    for (int i = 0; i < filas; i++) 
    {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}


void ingreso(int **matriz, int filas, int columnas) 
{
    for (int i = 0; i < filas; i++) {
        printf("Ingresa los valores para la fila %d:\n", i + 1);
        for (int j = 0; j < columnas; j++) 
        {
            printf("ingrese los datos de la fila %d y columna: %d ",i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void suma(int **matriz, int filas, int columnas) 
{
    printf("\nSuma de cada fila:\n");
    for (int i = 0; i < filas; i++) 
    {
        int suma = 0;
        for (int j = 0; j < columnas; j++) 
        {
            suma += matriz[i][j];
        }
        printf("La suma de la fila %d es: %d\n", i + 1, suma);
    }
}



#include <stdio.h>
#include <stdlib.h>
int pedirCantidadElementos();
void pedirValores(int *puntero, int vector);
void mostrarValores(int *puntero, int vector);

int main() {
    int *puntero;
    int vector;
    vector = pedirCantidadElementos();
    puntero = (int*)malloc(vector * sizeof(int));
    pedirValores(puntero, vector);
    mostrarValores(puntero, vector);
    free(puntero);
    return 0;
}

int pedirCantidadElementos() {
    int cantidad;
    printf("ingrese la cantidad de ingresos que quiere hacer ");
    scanf("%d", &cantidad);
    return cantidad;
}

void pedirValores(int *puntero, int vector) {
    for (int i = 0; i < vector; i++) {
        printf("ingresa el valor :V %d: ", i + 1);
        scanf("%d", &puntero[i]);
    }
}   

void mostrarValores(int *puntero, int vector) {
    printf("los datos del vector son: \n");
    for (int i = 0; i < vector; i++) {
        printf("Valor %d: %d\n", i + 1, puntero[i]);
    }
}

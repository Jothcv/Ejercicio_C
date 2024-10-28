#include <stdio.h>

int main() {
    // Declaración de un arreglo de 5 enteros
    int numeros[5] = {1, 2, 3, 4, 5};

    // Acceso e impresión de los elementos del arreglo
    for (int i = 0; i < 5; i++) {
        printf("Elemento en el índice %d: %d\n", i, numeros[i]);
    }

    return 0;
}

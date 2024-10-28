#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int* ptr;

    printf("Ingresa el número de elementos: ");
    scanf("%d", &n);

    // Asignando memoria para 'n' enteros
    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Error en la asignación de memoria.\n");
        return 1; // Salida del programa si la asignación falla
    }

    printf("Ingresa los elementos:\n");
    for (i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
    }

    printf("Elementos ingresados:\n");
    for (i = 0; i < n; ++i) {
        printf("%d ", *(ptr + i));
    }

    free(ptr);  // Liberando la memoria asignada

    return 0;
}

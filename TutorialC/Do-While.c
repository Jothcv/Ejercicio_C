#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Ingresa un número positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    printf("Ingresaste: %d\n", numero);

    return 0;
}

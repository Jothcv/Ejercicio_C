//ejercicio 1
#include <stdio.h>

int main() {
    int numero;
    do {
        printf("ingresa un numero: ");
        scanf("%d", &numero);
        if (numero == 0) {
            printf("el numero es 0 el programa termina");
            break;

        } else if (numero >= 1 && numero <= 9) {
            printf("tiene 1 digito\n");
        } else if (numero >= 10 && numero <= 99) {
            printf("tiene dos digitos\n");
        } else if (numero >= 100 && numero <= 999) {
            printf("tiene 3 digitos\n");
        } else {
            printf("el numero es 0 ptograma");
        }

    } while (numero >= 0); 
    return 0;
}

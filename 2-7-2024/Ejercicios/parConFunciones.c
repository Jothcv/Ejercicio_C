//ejercicio numero 6
#include <stdio.h>
void ParImpar(int numero); 

void ParImpar(int numero) {
    if (numero % 2 == 0) {
        printf("el numero: %d es par\n", numero);
    } else {
        printf("el numero: %d es impar.\n", numero);
    }
}

int main() {
    int num;
    printf("Ingresa un número: ");
    scanf("%d",&num);

    ParImpar(num);

    return 0;
}

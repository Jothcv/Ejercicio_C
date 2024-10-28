//ejercicio2
#include <stdio.h>

int main() {
    int numPersonas;
    int peso;
    int menos100 = 0;
    int entre100y150 = 0;
    int entre150y200 = 0;
    int mayor200 = 0;

    printf("ingrese la cantidad de personas: ");
    scanf("%d", &numPersonas);

    int contador = 0;
    do {
        printf("Ingrese el peso de la persona ");
        scanf("%d", &peso);

        if (peso < 100) {
            menos100++;
        } else if (peso >= 100 && peso <= 150) {
            entre100y150++;
        } else if (peso > 150 && peso <= 200) {
            entre150y200++;
        } else {
            mayor200++;
        }
        contador++;
    } while (contador < numPersonas);
    printf("menor a 100 %d\n", menos100);
    printf("entre 100 y 150 %d\n", entre100y150);
    printf("entre 150 y 200 %d\n", entre150y200);
    printf("es mayor a 200 %d\n", mayor200);
    return 0;
}

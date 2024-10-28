//ejercicio 3
#include <stdio.h>

int main() {
    int prome[10];
    int suma = 0;
    for (int i=0;i<10;++i) {
        printf("Ingresa el valor %d: ",i);
        scanf("%d", &prome[i]);
        suma += prome[i];
    }
    float promedio = (float)suma / 10;
    printf("el promedio de los valores ingresados es: %.2f\n", promedio);
    return 0;
}

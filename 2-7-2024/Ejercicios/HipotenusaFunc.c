#include <stdio.h>
#include <math.h>

void calcularHipotenusa(int cateto1, int cateto2, int Hipotenusa) {
    Hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
}

int main() {
    int a, b, hipotenusa;
    printf("Ingresa la longitud del primer cateto: ");
    scanf("%d", &a);
    printf("Ingresa la longitud del segundo cateto: ");
    scanf("%d", &b);

    calcularHipotenusa(a, b, &hipotenusa);
    printf("la hipotenusa es: %d.\n", hipotenusa);

    return 0;
}

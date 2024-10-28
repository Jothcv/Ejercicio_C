#include <stdio.h>

int calcularMedia(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3;
}

int main() {
    int a, b, c, media;
    
    printf("Ingresa el primer número: ");
    scanf("%d", &a);
    

    printf("Ingresa el segundo número: ");
    scanf("%d", &b);
    

    printf("Ingresa el tercer número: ");
    scanf("%d", &c);

    media = calcularMedia(a, b, c);
    
    printf("La media de %d, %d y %d es %d.\n", a, b, c, media);

    return 0;
}

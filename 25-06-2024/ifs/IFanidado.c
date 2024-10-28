#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);
    
    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);
    
    printf("Ingresa el tercer numero: ");
    scanf("%d", &num3);
    
    if (num1 >= num2 && num1 >= num3) {
        printf("El numero mayor es: num1");
        if (num2 >= num3) {
            printf("El numero mediano es num2");
            printf("El numero pequeno es num3");
        } else {
            printf("El numero mediano es num3");
            printf("El numero pequeno es num2");
        }
    }
     else if (num2 >= num1 && num2 >= num3) {
        printf("El mayor numero es: %d\n", num2);
        if (num1 >= num3) {
            printf("El numero mediano es: %d\n", num1);
            printf("El numero pequeno es: %d\n", num3);
        } else {
            printf("El numero mediano es: %d\n", num3);
            printf("El numero pequeno es: %d\n", num1);
        }
    }
     else
    {
        printf("El mayor numero es: %d\n", num3);
        if (num1 >= num2) {
            printf("El numero mediano es: %d\n", num1);
            printf("El numero pequeno es: %d\n", num2);
        } else {
            printf("El numero mediano es: %d\n", num2);
            printf("El numero pequeno es: %d\n", num1);
        }
    }
    
    return 0;
}
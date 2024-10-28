#include <stdio.h>  
int main() {
    int numero = 10;

    if (numero > 0) {
        printf("El número es positivo.\n");
    } else {
        printf("El número es negativo o cero.\n");
    }

    

    int numero = 15;
    if (numero > 0) {  // Primer nivel de condición
        if (numero % 2 == 0) {  // Segundo nivel de condición
            printf("El número es positivo y par.\n");
        } else {
            printf("El número es positivo e impar.\n");
        }
    } else {
        printf("El número es negativo o cero.\n");
    }


 


    int numero = 15;

    if (numero > 0) {
        printf("El número es positivo.\n");
    } else if (numero < 0) {
        printf("El número es negativo.\n");
    } else {
        printf("El número es cero.\n");
    }



}
    
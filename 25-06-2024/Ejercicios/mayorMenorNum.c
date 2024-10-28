//4. pedir el ingreso con un scanf de 5 numeros y mostrar el mayor y el menor usando solamente if anidados o if else con c
#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int mayor; 
    int menor;


    printf("ingresa un numero ");
    scanf("%d", &num1);
    mayor = menor = num1;


    printf("ingresa otro numero");
    scanf("%d", &num2);
    if (num2 > mayor) 
        {
        mayor = num2;
        } 
    else if (num2 < menor) 
        {
        menor = num2;
        }


    printf("ingresa otro numero ");
    scanf("%d", &num3);
    if (num3 > mayor) 
        {
        mayor = num3;
        } else if (num3 < menor) 
        {
        menor = num3;
        }


    printf("ingresa otro numeros ");
    scanf("%d", &num4);
    if (num4 > mayor) 
        {
        mayor = num4;
        } 
    else if (num4 < menor) 
        {
        menor = num4;
        }


    printf("ingresa otro numero ");
    scanf("%d", &num5);
    if (num5 > mayor) 
        {
        mayor = num5;
        } 
    else if (num5 < menor) 
        {
        menor = num5;
        }


    printf("el mas grande es%d\n", mayor);
    printf("el meno es  %d\n", menor);

    return 0;
}
#include <stdio.h>
#include <math.h>
int main(){
    {
        float num1;

        printf("ingresa un numero: ");
        scanf("%f",&num1);
        printf("el logaritmo natural del numero ingresad es %.2f otro log por si acaso %.2f \n",log(num1),log10(num1));
    }
}
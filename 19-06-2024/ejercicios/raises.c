#include <stdio.h>
#include <math.h>
int main(){
    {
        float num1;
        float num2;
        float num3;
        float ra1;
        float ra2;
        float ra3;
        float suma;
        printf("ingresa tu primer numero para sacarle raiz ");
        scanf("%f",&num1);
        printf("ingresa tu segundo numero para sacarle raiz ");
        scanf("%f",&num2);
        printf("ingresa tu tercer numero para sacarle raiz ");
        scanf("%f",&num3);

        ra1=sqrt(num1);
        ra2=sqrt(num2);
        ra3=sqrt(num3);
        printf("la raiz del numero ingresado es: %f \n",ra1);
        printf("la raiz del numero ingresado es: %f \n",ra2);
        printf("la raiz del numero ingresado es: %f \n",ra3);

        suma=ra1+ra2+ra3;
        printf("la suma de tus raises es: %f",suma);
        return 0;
    }
}
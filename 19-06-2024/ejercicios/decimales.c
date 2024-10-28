#include <stdio.h>
#include <math.h>
int main(){
    {
        float num1;
        float num2;
        float num3;

        printf("ingresa tu numero en decimales para aproimarla " );
        scanf("%f",&num1);
        printf("ingresa tu numero en decimales para aproimarla ");
        scanf("%f",&num2);
        printf("ingresa tu numero en decimales para aproimarla ");
        scanf("%f",&num3);

        printf("el primer numero redondeado para el siguiente es:  %.2f \n",ceil(num1));
        printf("el primer numero redondeado al numero base es:  %.2f \n",floor(num1));
        printf("\n");
        printf("el primer numero redondeado para el siguiente es:  %.2f \n",ceil(num2));
        printf("el primer numero redondeado al numero base es:  %.2f \n",floor(num2));
        printf("\n");
        printf("el primer numero redondeado para el siguiente es:  %.2f \n",ceil(num3));
        printf("el primer numero redondeado al numero base es:  %.2f \n",floor(num3));


    }
}
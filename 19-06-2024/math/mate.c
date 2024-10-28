#include <stdio.h>
#include <math.h>
int main(){
    {
        float num1=-4.88,pi=3.1416;
        int num2=9;
        printf("el valoe absoluto del numero 1 es: %f \n",fabs(num1));//valor absoluto es con fabs
        printf("el valor absoluto del 1 es: %f \n",fabs(pi));
        printf("el valor absoluto de num1 es: %.2f y el de num2 es %.2f \n",fabs(num1),fabs(pi)); //en una sola lineas 

        //para sacar el coseno 
        printf("el coseno de pi es %.2f \n",cos(pi));

        //potencia
        printf("el numero dos elevado al cubo %.2f \n",pow(num2,3));

        //para redondear el siguiente numero
        printf("el numero pi redondeado es: %.2f \n",ceil(pi));

        //aproxima al numero que esta es decir quiandole los decimales
        printf("el numero pi redondeado es: %.2f \n",floor(pi));

        //para el numero de euler
        printf("el valor de euler es: %.2f \n",exp(1));

        //reaiz cuadrada
        printf("la raiz cuadrada de num2 es: %f \n",sqrt(num2));

        //sacar logaritmos 
        printf("el logaritmo de num2 es %.2f \n",log(num2));
        
        //sacar logaritmo natural
        printf("el logaritmo natural es:  %.2f \n",log10(num2));
        


        return 0;
    }
}
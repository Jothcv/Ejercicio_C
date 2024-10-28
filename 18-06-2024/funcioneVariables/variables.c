#include <stdio.h>
int main(){
    {
        int num1=10,num2=20,resultado=num1+num2;
        printf("el resultado es = %d\n",resultado);

        int num3=500;
        float num4=0.567;
        printf("%f \n",num4);
        printf("%.f \n",num4);
        printf("%.4f \n",num4);//el punto para mostrar las cantidades de decimales
        printf("%2.4e \n",num4);
        printf("%d \n",num3);//para mostrar los numeros enteros
        return 0;
    }
}
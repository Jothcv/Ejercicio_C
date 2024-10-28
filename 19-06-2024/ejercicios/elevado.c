#include <stdio.h>
#include <math.h>
int main(){
    {
        float num1;
        float num2;
        printf("ingresa tu nuemor que quieres elevar \n");
        scanf("%f",&num1);
        
        printf("ingrese el numero por el cual lo va a elevar:\n ");
        scanf("%f",&num2);
        printf("tu numero elevado es: %f \n",pow(num1,num2));
        return 0;
    }
        
}
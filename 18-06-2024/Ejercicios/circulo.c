#include <stdio.h>
int main(){
    {
        float pi=3.1416;
        float radio;
        float total;
        printf("ingrese el area de su circulo: ");
        scanf("%f",&radio);
        total=pi*radio*radio;
        printf("el area de su circulo es: %f \n",total);
        return 0;
    }
}
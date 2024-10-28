#include <stdio.h>
int main(){
    {
        int edad;
        printf("ingrese la edad de la persona: ");
        scanf("%d",&edad);
        if (edad>=50)
            {
            printf("es una persona de la tercera edad: %d",edad);
            }
        else if (edad>=30 && edad<=49)
            {
                printf("es una persona adulta su edad es: %d",edad);
            }
        else if (edad>=19 && edad<=29)
            {
                printf("es adulto joven su edad es: %d",edad);
            }
        else if (edad>=12 && edad<=17)
            {
                printf("es un adolecente su edad es: %d",edad);
            }
        else
            {
                printf("es un niño: %d",edad);
            }
        return 0;
    }
}
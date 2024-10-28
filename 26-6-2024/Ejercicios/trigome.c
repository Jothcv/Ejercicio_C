#include <stdio.h>
#include <math.h>
int main(){
    {
        int menu;
        printf("\n1. seno\n2. coseno\n3. tangente\ningresa a que menu quieres ingresar: ");
        scanf("%d",&menu);
        switch (menu)
        {  
        case 1:
            float res1;
            float resul1;
            float pi=3.1416;
            printf("ingresa el numero para convertirlo a seno: ");
            scanf("%f",&res1);
            resul1=(res1*pi)/180;
            printf("el numero ingresato sacado a radianes es: %f",resul1);
            printf("ahora le sacamos el seno que seria: %f \n",sin(resul1));
        case 2:
            float res2;
            float resul2;
            float pi2=3.1416;
            printf("ingresa para convertirlo a coseno: ");
            scanf("%f",&res2);
            resul2=(res2*pi2)/180;
            printf("el numero ingresato sacado a radianes es: %f",resul2);
            printf("ahora le sacamos el seno que seria: %f \n",cos(resul2));
        case 3:
            float res3;
            float resul3;
            float pi3=3.1416;
            printf("ingresa para convertirlo a tangente ");
            scanf("%f",&res3);
            resul3=(res3*pi3)/180;
            printf("el numero ingresato sacado a radianes es: %f",resul3);
            printf("ahora le sacamos el tangente que seria: %f \n",tan(resul3));
        }
    }
}
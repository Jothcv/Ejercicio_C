#include <stdio.h>
int main(){
    {
        char pais1[100];
        char pais2[100];
        char pais3[100];
        int num1;
        int num2;
        int num3;
        int suma;
       
        printf("ingrese un pais: ");
        scanf("%s",&pais1);
        printf("ingrese otro pais: ");
        scanf("%s",&pais2);
        printf("ingrese su ultimo pais: ");
        scanf("%s",&pais3);

        num1=strlen(pais1);
        printf("la longitud de la cadena es : %d \n",num1);

        num2=strlen(pais2);
        printf("la longitud de la cadena es : %d \n",num2);

        num3=strlen(pais3);
        printf("la longitud de la cadena es : %d \n",num3);

        suma=num1+num2+num3;
        printf("la suma de la longitd es: %d \n",suma);

    }
}
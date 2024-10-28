#include <stdio.h>
int main(){
    {
        int num1;
        int num2;
        int cociente;
        int residuo;

        printf("ingresa tu primer numero ");
        scanf("%d",&num1);
        printf("ingresa tu segundo numero ");
        scanf("%d",&num2);

        cociente=(num1/num2);
        residuo=(num1 % num2);
        printf("el cosiente es: %d \n",cociente);
        printf("el cosiente es: %d \n",residuo);
        


    }
}
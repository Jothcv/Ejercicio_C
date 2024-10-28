#include <stdio.h>
int main(){
    {
        int num1;
        int num2;
        int suma;
        int resta;
        int div;
        int multi;
        printf("ingrese el primer valor: ");
        scanf("%d",&num1);
        printf("ingrese el segundo valor: ");
        scanf("%d",&num2);
        suma=num1+num2;
        resta=num1-num2;
        div=num1/num2;
        multi=num1*num2;
        printf("su suma es %d \n",suma);
        printf("su resta es %d \n",resta);
        printf("su divicion es %d \n",div);
        printf("su multiplicacion es %d \n",multi);
        return 0;
    }
}